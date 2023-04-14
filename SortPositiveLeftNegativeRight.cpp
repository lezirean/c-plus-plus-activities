#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int arr[7] = {0,9,-7,2,-12,11,-20}, arr1[7],ctr=0,i;

    for(i=0; i<7; i++){
       if(arr[i] >= 0)
         arr1[ctr++] = arr[i];
    }
    //if(ctr == 7 || ctr == 0) return; ***lagay mo to sa void function
    //^ kapag all elements of the array are positive OR all are negative

    for(i=0; i<7; i++){
        if(arr[i] < 0)
            arr1[ctr++] = arr[i];
    }

    for(i=0; i<7; i++)
        cout<<arr1[i]<<" ";
return 0;
}
