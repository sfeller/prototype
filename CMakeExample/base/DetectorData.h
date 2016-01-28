/**
 * \file This file contains the classes that define a detector object
 **/
#pragma once

#include <stdint.h>

//Data Formats
#define XFMT_UNKNOWN 0
#define XFMT_CV      1  //OpenCv format
#define XFMT_INT16   2  //16 bits per bin

//Aquisition Modes
#define MODE_DEFAULT 0  //Default acquisition mode as determined by the detector
#define MODE_FULL    1  //Full resolution acquisition
#define MODE_BIN1    2  //Bin Level 1 acquisition

/**
 * \brief Structure of detector metadata
 *
 * This structure contains the metadata needed to define a detector/sensor
 **/
struct DetectorMetadata
{
   uint64_t integrationTime = 0;    //!< Integration time in nanosecs
   uint64_t  detectorId = 0;        //!< Unique ID of the detector (SN)
   uint64_t dataOffset = 0;        //!< Offset of data into memory (-1 = no data)
   uint64_t dataSize = 0;           //!< Size of the data buffer in bytes
   int pixelCount = 0;             //!< Number of pixels in the data
   int binsPerPixel = 0;           //!< Number of energy bins per pixel
   int bitsPerBin = 0;             //!< Number of bits per energy bin
   int acquisitionMode = MODE_DEFAULT; //!< Mode of how data was acquired
   int dataFormat = XFMT_UNKOWN;    //!< Data format (OpenCV or bits per pixel)
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
      void * buffer = NULL;            //!< Buffer with data (once allocated)
}
