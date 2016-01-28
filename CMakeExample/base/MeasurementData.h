/**
 * \file This file contains the classes that define a detector object
 **/
#pragma once

#include <stdint.h>
#include <DetectorData.h>


/**
 * \brief Structure of detector metadata
 *
 * This structure contains the metadata needed to define a detector/sensor
 **/
struct MeasurementMetadata
{
   uint64_t timestamp = 0;
   uint64_t measurementId = 0;        //!< Unique Id of the measurement 
   uint64_t detectorCount = 0;        //!< Number of detectors
   uint64_t dataOffset = 0;           //!< Offset of data into memory (-1 = no data)
   uint64_t dataSize = 0;             //!< Size of the data buffer in bytes
   int dataFormat = XFMT_UNKOWN;      //!< Data format (OpenCV or bits per pixel)
   std::vector<DetectorMetaData> detectorMetaData; //!< Metadata for each detector
}

/**
 * \brief Class that represents data acquired from a detector
 *
 * This class combines the DetectorMetadata with the raw image data
 **/
class DetectorData 
{
   public:
      //Variables
      DetectorMetadata metadata;       //!< Metadata that describes the detector
      void * data = NULL;              //!< Buffer with data (once allocated)
}
