/************************************************************
 * BaseData.cpp
 *
 * This file contains the basic data management class for use
 * in XRay imaging applications
 *
 * Created by: Steve Feller                   Date: 1/27/16
 ************************************************************/
#include <memory>
#include <stdint.h>
#include "BaseData.h"

/** 
 * \brief Constructor
 **/
BaseData::BaseData()
{
}

/** 
 * \brief Destructor
 *
 * The destructor deletes any allocated data or variables
 * on exit.
 **/
BaseData::~BaseData()
{
}

/**
 * \brief Allocates the buffer to the given number of elements
 *
 * \param [in] size number of elements to allocated into the buffer
 **/
bool BaseData::allocateBuffer( size_t size )
{
   m_buffer = std::make_shared<uint16_t>(size);
   return true;
}

/**
 * \brief Function for unit testing of the clase
 *
 * This function tests the functionality of the BaseData class
 **/
bool BaseDataTest(void)
{
   BaseData bdata;
   bool rc = bdata.allocateBuffer(1000);
   return rc;
}


