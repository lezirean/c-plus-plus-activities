/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // assuming the array is sorted
    const int arraySize = 10;
    int arr[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    double median;
    
    if(arrSize % 2 == 0){
        median = (double)(arr[(arrSize-1) / 2] + arr[arrSize/2]) / 2.0;
    }
    else{
        median = (double)arr[arrSize/2];
    }
    
    cout << "Median: " << median;

    return 0;
}

