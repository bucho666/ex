## バージョン指定
cmake_minimum_required(VERSION 3.1)
# プロジェクト名
project(ex C)
# Cのバージョン指定
set(CMAKE_C_STANDARD 11)
# コンパイラ指定
set(CMAKE_C_COMPILER /usr/bin/clang)
# コンパイルオプション
set(CMAKE_C_FLAGS "-O2 -Wall")
# カレントディレクトリのソースファイル取得
file(GLOB sorces *.c)
## ライブラリファイルと依存ファイル
add_library(${PROJECT_NAME} STATIC ${sorces})
