//==============================================================================
// A simple C++ wrapper class for C++11 threads
//
//==============================================================================

#include <iostream>
#include <sys/types.h>
#include <chrono>
#include <thread>
#include <vector>

#include "C11Thread.h"
#include <Timer.h>

using namespace std;

/**
 * \brief  Destructor
 *
 * This destructor waits for the internal thread to complete (join) 
 * before self-destructing. 
 **/
C11Thread::~C11Thread()
{
   Join();
}

/** 
 * \brief Function called to start thread execution
 *
 * \param [in] arg generic pointer that represents shared data
 * \return std::thread object for this threads
 **/
bool C11Thread::Start( void * arg ) 
{
   if( threadObj != NULL ) {
      cout << "C11Thread threadObject already allocated!" << endl;
      return false;
   }

   threadObj = new std::thread;

   *threadObj = std::thread(&C11Thread::Execute, this, arg);
   initialized = true;
   return true;
}

/**
 * \brief Execution function that starts thread processing
 *
 * \param [in] arg generic pointer to shared data
 *
 * This function is entry point into thread operation. This
 * function needs to be overridden to be useful.
 **/
void C11Thread::Execute(void * arg ) 
{
   //Expects a valid pointer
   if( arg == NULL ) {
      cerr<<"C11Thread::Execute expecting a boolean pointer"<<endl;
   }

   else {
      running = (bool *)arg;
      while(*running)
      {
         std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      }
   }

   return;
}

/**
 * \brief Waits for the thread to complete before returning
 *
 * This call is implmenets the std::thread::join for the class
 **/
bool C11Thread::Join()
{
   if( threadObj == NULL ) {
      return false;
   }

   if( !threadObj->joinable()) {
      return false;
   }

   threadObj->join();

   delete threadObj;
   threadObj = NULL;

   return true;
}

/**
 * \brief Test function
 **/
bool testC11Thread(void)
{
   C11Thread cThread;


   std::cout << "MSG: Execution function not impelmented!"<<endl;
   cThread.Start(NULL);

   static bool running = true;
   cThread.Start(&running);

   std::cout << "Running being set to false!" << endl;
   running = false;

   bool rc = cThread.Join();
   if( !rc ) {
      std::cout << "Unable to join thread!"<<std::endl;
   }
   std::cout << "Joined"<<std::endl;

   //Vector tests (timed)
   Timer timer;
   size_t threadCount = 100;
   running = true;
   std::vector<C11Thread> threadVect(threadCount);

   for( int i = 0; i < threadCount; i++ ) {
      threadVect[i].Start(&running);
   }

   double elapsed = timer.elapsed();
   cout << "Created "<<threadCount<<" threads in "<<elapsed<< " seconds"<<endl;
   timer.start();


   //Stop running
   running = false;

/*
   //Join all
   for( int i = 0; i < threadCount; i++ ) {
      threadVect[i].Join();
   }
*/

   cout << "Destroyed "<<threadCount<< "threads in "<<elapsed<<" seconds"<<endl;




   return rc;

}

