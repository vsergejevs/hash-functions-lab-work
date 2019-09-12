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
  firstRand = rand() % 900 + 100;    // v1 in the range 100-1000
  secondRand = rand() % 900 + 100;   // v2 in the range 100-1000

  // TODO: push random generated number into array
//  firstArray[0] = secondRand;

  // TODO: create a for loop to generate random numbers and push them to array
  int i;
  for (i = 0; i < secondRand; i++)
  {
      firstArray[i] = firstRand;
  }

  cout << "this is a random number ranging from (100 - 1000) - " << secondRand << endl;
  cout << "this is the array holding random numbers: " << "[" << firstArray[6] << "]" << endl;
  
  return 0;
} 
