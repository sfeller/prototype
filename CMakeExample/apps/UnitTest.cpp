#include <BaseData.h>
#include <iostream>

using namespace std;

#include <BaseData.h>

/**
 * Main test function
 **/
int main(void)
{
   if( !BaseDataTest() )
   {
      cout << "BaseDataTest Failed!" << endl;
      return 1;
   }
}
