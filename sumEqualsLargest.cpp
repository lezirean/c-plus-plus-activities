#include <iostream>
using namespace std;
int main(void){
     int arr[6] = {3, 5, 22, 10, 1, 3}, i, temp,sum=0;

     for(i=0; i<6-1; i++){
         int minimum = i;
         for(int j=i+1; j<6; j++)
          if(arr[j]<arr[minimum])
           minimum = j;

       temp = arr[i];
       arr[i] = arr[minimum];
       arr[minimum] = temp;
     }

      for(i=0; i<6; i++)
     cout<<arr[i]<<" "; cout<<"\n\n";

     for(i=0; i<5; i++){
        sum = sum + arr[i];
        if(sum == arr[5])
      cout<<sum<<" = "<<arr[5];
     }

}
