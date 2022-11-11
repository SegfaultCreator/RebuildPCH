cmake_minimum_required(VERSION 3.15)
project(RebuildPCH)

add_compile_options("-fPIC")
add_subdirectory(LibC)
add_subdirectory(LibCpp)
add_subdirectory(LibLinking)


