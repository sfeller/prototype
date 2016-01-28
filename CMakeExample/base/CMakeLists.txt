cmake_minimum_required(VERSION 2.8)

PROJECT(XRayDataBase)

#This tells cmake to install header files when make install is executed
include(GenerateExportHeader)

#specifies a list of source files to be compiled
set( BASE_SOURCES 
   BaseData.cpp
)

#specifies the library to create. The name will be libbase_static.a and libbase.so in this case.
add_library( base_static ${BASE_SOURCES})
add_library( base SHARED ${BASE_SOURCES})

#install library files
install(TARGETS 
   base 
   base_static
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
   INCLUDES DESTINATION include
   PUBLIC_HEADER DESTINATION include
)

