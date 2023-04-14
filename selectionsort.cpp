#include <iostream>
using namespace std;

int main(){
 int arr[5], temp;

 cout<<"Enter 5 ints: ";
 for(int j=0; j<5; j++)
    cin>>arr[j];

    for(int ele=0; ele<5-1; ele++){
        int indexofminimum = ele;
          for(int i=ele+1; i<5; i++){
            if(arr[i] < arr[indexofminimum])
             indexofminimum = i;
          }
      temp = arr[ele];
      arr[ele] = arr[indexofminimum];
      arr[indexofminimum] = temp;
    }


 for(int j=0; j<5; j++)
    cout<<arr[j]<<" ";


return 0;
}
