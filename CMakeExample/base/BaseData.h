/**
 * \file This file contains the classes that define a detector object
 **/
#pragma once
#include <memory>
#include <stdint.h>

//Data Formats
const uint16_t XFMT_UNKNOWN=0;  //!< Undefined data format or no data
const uint16_t XFMT_CV     =1;  //!< OpenCv format
const uint16_t XFMT_INT16  =2;  //!< 16 bits per bin

/**
 * \brief Base class that provide direct access to data
 *
 * This class combines the DetectorMetadata with the raw image data
 **/
class BaseData
{
   protected:
      std::shared_ptr<uint16_t> m_buffer; //!<Pointer to the data buffer
      
   public:
      uint64_t bufferSize = 0;         //<! Size of the buffer
      uint16_t format = XFMT_UNKNOWN;  //!< data format

      BaseData();
      ~BaseData();
      bool allocateBuffer( size_t size );


};

/**
 * \brief Testing functions
 **/
bool BaseDataTest();
