/**
 * @file
 * Description.
*/

"use strict";
// Variables!
const yourProxy  = "http://eau.local/";
const rootFolder = "./"
const sourcePath = rootFolder + "src/";
const distPath   = rootFolder + "./";


// Load plugins!
const gulp         = require("gulp");
const sass         = require('gulp-sass');
const purge        = require('gulp-css-purge');
const plumber      = require("gulp-plumber");
const browsersync  = require("browser-sync").create();
const sourcemaps   = require('gulp-sourcemaps');
const autoprefixer = require("autoprefixer");
const strip        = require('gulp-strip-comments');
const minify       = require('gulp-minify');
const postcss      = require("gulp-postcss");

// BrowserSync!
function browserSync(done) {
  browsersync.init({
    proxy: yourProxy
  });
  done();
}

// BrowserSync Reload!
function browserSyncReload(done) {
  browsersync.reload();
  done();
}

// CSS task!
function css() {
  return gulp
  .src(sourcePath + "scss/**/*.scss")
  .pipe(sourcemaps.init())
  .pipe(plumber())
  .pipe(sass({ outputStyle: "expanded" }, {errLogToConsole: true}))
  .on('error', catchErr)
  .pipe(postcss([autoprefixer]))
  .pipe(purge())
  .pipe(sourcemaps.write("map"))
  .pipe(gulp.dest(distPath + "css"))
  .pipe(browsersync.stream());
}

function cssTemplates() {
  return gulp
  .src("templates/**/*.scss")
  .pipe(sourcemaps.init())
  .pipe(plumber())
  .pipe(sass({ outputStyle: "expanded" }, {errLogToConsole: true}))
  .on('error', catchErr)
  .pipe(postcss([autoprefixer]))
  .pipe(purge({
    trim : true
  }))
  .pipe(sourcemaps.write("map"))
  .pipe(gulp.dest(distPath + "css/templates"))
  .pipe(browsersync.stream());
}

function cssMin() {
  return gulp
    .src(sourcePath + "scss/**/*.scss")
    .pipe(plumber())
    .pipe(sass({ outputStyle: "compressed" }))
    .pipe(postcss([autoprefixer]))
    .pipe(purge({
      trim : true
    }))
    .pipe(gulp.dest(distPath + "css"))
}

function cssMinTemplates() {
  return gulp
    .src("templates/**/*.scss")
    .pipe(plumber())
    .pipe(sass({ outputStyle: "compressed" }))
    .pipe(postcss([autoprefixer]))
    .pipe(purge({
      trim : true
    }))
    .pipe(gulp.dest(distPath + "css/templates"))
}

// Transpile,minify scripts!
function scripts() {
  return (
    gulp
      .src([sourcePath + "js/**/*"])
      .pipe(minify({
        ext:{
          min:'.js'
        },
        noSource: true
      }))
      .pipe(gulp.dest(distPath + "js"))
      .pipe(browsersync.stream())
  );
}

// Watch files!
function watchFiles() {
  gulp.watch(sourcePath + "scss/**/*", css);
  gulp.watch(sourcePath + "templates/**/*.scss", cssTemplates);
  gulp.watch(sourcePath + "js/**/*", scripts);
  gulp.watch(rootFolder + "templates/**/*", browserSyncReload);
}

// Define complex tasks!
const build = gulp.series(gulp.parallel(cssMin, cssMinTemplates, scripts)); //+ ,bootstrapJs
const watch = gulp.parallel(watchFiles, browserSync);

function catchErr(e) {
  console.log(e);
  this.emit('end');
}

// Export tasks!
exports.watch = watch;
exports.default = build;
