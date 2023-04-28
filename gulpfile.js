'use strict';

const { 
  gulp, 
  src, 
  dest, 
  watch,
  series, 
  paralell 
} = require('gulp');

const uglify = require('gulp-uglify');
const sass = require('gulp-sass')(require('sass'));
const sourcemaps = require('gulp-sourcemaps');
const browsersync = require('browser-sync').create();

const jssource = 'app/js/*.js';
const jsdest = 'dest/js';
const csssource = 'app/styles/*.scss';
const cssdest ='dest/styles';
const tokensource = 'app/tokens/*.json';
const tokendest = 'app/tokens/color';

function buildJs() {
  return src(jssource)
    .pipe(uglify())
    .pipe(dest(jsdest));
}

function buildStyles() {
  return src(csssource)
  .pipe(sass().on('error', sass.logError))
  .pipe(dest(cssdest));
}

function watchScss() {
  watch(csssource, buildStyles);
}

function browsersyncServe(cb){
  browsersync.init({
    server: {
      baseDir: 'dest/'
    }
  });
  cb();
}

function browsersyncReload(cb){
  browsersync.reload();
  cb();
}

function watchTask(){
  watch('*.html', browsersyncReload);
  watch(['app/tokens/*.json', 'app/**/*.scss', 'app/**/*.js'], series( buildStyles, buildJs, browsersyncReload));
}

exports.default = series(
  buildStyles, 
  buildJs, 
  browsersyncServe,
  watchTask
);
