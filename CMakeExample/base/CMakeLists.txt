cmake_minimum_required(VERSION 2.8)

PROJECT(XRayDataBase)

include(GenerateExportHeader)

set( BASE_SOURCES 
   BaseData.cpp
#   MeasurementData.cpp
#   ScanData.cpp
#   ObjectData.cpp
)

add_library( base ${BASE_SOURCES})

#install library files
install(TARGETS base 
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
   INCLUDES DESTINATION include
   PUBLIC_HEADER DESTINATION include
)

