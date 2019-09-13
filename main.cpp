//v1 = rand() % 100;         // v1 in the range 0 to 99
//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
//v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
//v4 = rand() % 1001 + 101;   // v3 in the range 1985-2014

// arrays example
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
  
// TODO: declare empty array which will hold the random numbers - DONE
int firstArray [1000];

int main ()
{
  int firstRand, secondRand;
  
  
  // TODO: generate random integer number from 100 - 1000 - DONE
  /* initialize random seed: */
  srand (time(nullptr));
  secondRand = rand() % 900 + 100;
  
  
  // random number in the range 1-10 for tests
  //secondRand = rand() % 10 + 1;  
  
  
  cout << "Array will hold " << secondRand << " integers." << endl;
  
  
  // TODO: create a for loop to generate random numbers and push them to array - DONE
  int i;
  cout << "[ ";
  for (i = 0; i < secondRand; i++) 
  {
      firstRand = rand() % 900 + 100;
      firstArray[i] = firstRand;
      cout << firstArray[i] << ", ";
  }
  cout << "]";
  
  
  return 0;
} 
