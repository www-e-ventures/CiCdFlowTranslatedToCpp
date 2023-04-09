cmake_minimum_required(VERSION 3.25)
project(CiCd)

set(CMAKE_CXX_STANDARD 20)

add_executable(CiCd main.cpp include/cicd_base.h include/dev_environment.h include/staging_environment.h include/prod_environment.h src/dev_environment.cpp src/staging_environment.cpp src/prod_environment.cpp)
