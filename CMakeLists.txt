cmake_minimum_required(VERSION 4.3.4 FATAL_ERROR)
set(PROJECT_NAME MyLaboratory)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
	src/main.cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
