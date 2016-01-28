cmake_minimum_required(VERSION 2.8)

PROJECT(XRayData)

include_directories( ${CMAKE_SOURCE_DIR}/base)

add_executable(  unitTest
   UnitTest.cpp
)

target_link_libraries( unitTest
   base
)

#These targets are designed to be installed at the system level by default
install(TARGETS
   unitTest
   RUNTIME DESTINATION bin
)

