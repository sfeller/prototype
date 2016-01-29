//==============================================================================
// A simple C++ wrapper class for c++11 threads
//
// The intended usage of this class is via inheritence--it does nothing itself.
// First, create a new class that inherits from C11Thread. Overide the Setup and
// Execute methods. The Setup method is intended to be executed once. The
// Execute method is the actual thread (it contains the thread's execution
// loop, and does not exit except under special (i.e. fault) circumstances).
//==============================================================================
#pragma once
#include <thread>

//************************************************************
/**
 *!\brief A simple C++ wrapper class for POSIX threads.
 *
 * The intended usage of this class is via inheritence--it does nothing itself.
 * First, create a new class that inherits from jthread. Overide the Setup and
 * Execute methods. The Setup method is intended to be executed once. The
 * Execute method is the actual thread (it contains the thread's execution
 * loop, and does not exit except under special (i.e. fault) circumstances).
 **/
//************************************************************
class C11Thread
{
    private:
       bool initialized = false;       //!< Flag to indicate thread is operational
       std::thread * threadObj = NULL; //!< Thread variable
       bool * running = NULL;          //!< Flag to stop running (True during execution)

    protected:

    public:
       ~C11Thread();
       bool Start( void * arg );
       bool Join( void );
       virtual void Execute( void * arg );

    protected:
};

bool testC11Thread();
