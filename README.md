# Simple cmake/gtest c++ 20 setup

this is simple setup for cpp project with gtest and cmake. You just need to rename `mymodule` and `myproject` strings accross whole boilerplate

## How to debug tests/program? 

1. `set(CMAKE_BUILD_TYPE Debug)` in `CMakeLists.txt`
2. in root folder 
```
mkdir build && cd build && cmake .. && make 
cd tests
gdb ./myproject_tests # remember you can change myproject to something else in CMakeLists.txt files
# Then google how to use gdb
```

## Stuff you may want to change

As I said
1. rename `mymodule` or delete it if you don't need it
2. rename `myproject` in `CMakeLists.txt`
3. point to the latest commit in google test in `CMakeLists.txt`
4. `set(CMAKE_BUILD_TYPE Debug)` change `Debug` to `Release` when you compile for release (duh)

## Features 

1. GCC Analyzer

## VS Code, google test C++ intellisense shows errors

https://stackoverflow.com/questions/67485524/gtest-in-vscode-c-c-intellisense-shows-errors