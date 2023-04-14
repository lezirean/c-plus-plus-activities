#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int arr[]={0,1,3,4,5,6,7,8,10},sze;
    sze = sizeof(arr)/sizeof(arr[0]);
    int a=0, z=sze-1, i, arr1[sze], result = true;


    for(i=0; i<sze; i++){
       if(result)
        arr1[i] = arr[z--];
       else
        arr1[i] = arr[a++];
     result = !result;
    }

    for(i=0; i<sze; i++)
        cout<<arr1[i]<<" "; 


return 0;
}
