#include <iostream>
using namespace std;

int main(){
//int arr[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
int arr[10];
for(int m=0; m<10; m++) cin>>arr[m];
int sze = sizeof(arr)/sizeof(arr[0]);

        for(int i=0; i<sze-1; i++){ int j;
            for(j=i+1; j<sze; j++){
                if(arr[j]==arr[i]){
                    cout<<arr[i];
                    break;
                }
            }
            if(arr[j]==arr[i])
                break;
        }



return 0;
}
