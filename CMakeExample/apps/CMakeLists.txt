cmake_minimum_required(VERSION 2.8)

PROJECT(XRayData)

#specify location of include directories within this project
include_directories( ${CMAKE_SOURCE_DIR}/base)

#Specify the output executable of this file
add_executable( unitTest
   UnitTest.cpp
)

#assign a library to link to this file. This shows a static library
target_link_libraries( unitTest
   base_static
)

#Specify where the targets are installed when a "make install" is executed
install(TARGETS
   unitTest
   RUNTIME DESTINATION bin
)

