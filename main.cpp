// TODO: generate random integer number from 100 - 1000

// arrays example
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;


int main ()
{
  int firstRand, secondRand;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  firstRand = rand() % 10 + 1;
  secondRand = rand() % 1001 + 101;   // v3 in the range 1985-2014
  
 // v1 = rand() % 100;         // v1 in the range 0 to 99
  //v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
  //v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
  //v4 = rand() % 1001 + 101;   // v3 in the range 1985-2014
  
  cout << secondRand;
  
  return 0;
} 