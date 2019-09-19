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
int hashFunctionArray [1000];



int main ()
{
    int randArrayInt, randArrayLength, randSearchItem, pos, j, randArrayRealLength;
    
    srand (time(nullptr));  //initialize random seed:
    //randArrayLength = rand() % 900 + 100;

    // TODO: generate random integer number from 100 - 1000 - DONE
    randArrayLength = rand() % 10 + 1; // random number in the range 1-10 for tests
    
    randArrayRealLength = randArrayLength - 1;

    randSearchItem = rand() % 10 + 1; //randSearchItem = rand() % 900 + 100;
    
    cout << "Array will hold " << randArrayLength << " integers. \n" << endl;

    cout << "randArrayRealLength is " << randArrayRealLength << endl << "\n";
    // TODO: create a for loop to generate random numbers and push them to array - DONE
    int i;
    cout << "[ ";
    for (i = 0; i < randArrayRealLength; i++)
    {
        //randArrayInt = rand() % 900 + 100;
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
        cout << "Number not found" << endl;
    else
        cout << randSearchItem << " found at position "<< pos << endl;
    
   cout << endl << "\n";
    
    //looping through first array to display it
    cout << "this is the first Array without the sentinel at the" << endl;
    for (int i = 0; i < randArrayRealLength; i++)
    {
        cout << firstArray[i] << " ";
        
    }
    
    cout << endl << "\n";
    
    //looping through hash table array to display it
    cout << "displaying modulo operations" << endl << endl;
    for (int i = 0; i < randArrayRealLength; i++)
    {
        cout << firstArray[i] << " modulo " << randArrayRealLength << " equals ";
        hashFunctionArray[i] = firstArray[i] % randArrayRealLength;
        cout << hashFunctionArray[i] << endl << "\n";
    }
    
    cout << "this is the Array with hash keys" << endl << endl;
    for (int i = 0; i < randArrayRealLength; i++)
    {
        hashFunctionArray[i] = firstArray[i] % randArrayRealLength;
        cout << hashFunctionArray[i] << " ";
    }


    // TODO: split program into logical functions
    // TODO: create empty array so hash function can insert content from current array into it - DONE
    // TODO: create associative array using hashing method
    // TODO: search for the given keey in new array 
    // h(x) = x mod n
    // x - element we insert into array
    // n - how many items are there in the array
    //

    return 0;


}
