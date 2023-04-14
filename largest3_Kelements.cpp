#include <iostream>
using namespace std;

void sorts(int arr[], int sze){
    for(int i=0; i<sze-1; i++){
     int minimum = i;
        for(int j=i+1; j<sze; j++){
         if(arr[j] < arr[minimum])
            minimum = j;

        }
      int temp = arr[i];
      arr[i] = arr[minimum];
      arr[minimum] = temp;
    }


}

int main(){
int sze, k, arr[]={7, 12, 9, 15, 19, 32, 56, 70};
sze = sizeof(arr)/sizeof(arr[0]);

    sorts(arr, sze);

    cin>>k;

    for(int i=sze-1; i>sze-k-1; i--)
        cout<<arr[i]<<" ";


return 0;
}
