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
    int randArrayInt, randArrayLength, randSearchItem, c, pos, j;


    // TODO: generate random integer number from 100 - 1000 - DONE
    /* initialize random seed: */
    srand (time(nullptr));
//    randArrayLength = rand() % 900 + 100;


    // random number in the range 1-10 for tests
    randArrayLength = rand() % 10 + 1;

    //    randSearchItem = rand() % 900 + 100;
    randSearchItem = rand() % 10 + 1;


    cout << "Array will hold " << randArrayLength << " integers. \n" << endl;


    // TODO: create a for loop to generate random numbers and push them to array - DONE
    int i;
    cout << "[ ";
    for (i = 0; i < randArrayLength - 1; i++)
    {
//        randArrayInt = rand() % 900 + 100;
        randArrayInt = rand() % 10 + 1; // generate random number for the array
        firstArray[i] = randArrayInt;   // insert into array position the generated random number
        cout << firstArray[i] << ", ";  // print out array element at current loop position
    }
    firstArray[randArrayLength] = randSearchItem;  // insert searchable number at end of array
    cout << firstArray[randArrayLength] << ", ";   // print searchable number as last element of array
    cout << "]\n" << endl;

    cout << "This is the random key to search for in array: " << randSearchItem << endl;

    j = 0;

    while (firstArray[j] != randSearchItem) {
        j++;
    }

    pos = j + 1;

    if (j == randArrayLength)
        cout << "Number not found";
    else
        cout << randSearchItem << " found at position "<< pos;


    return 0;
}
