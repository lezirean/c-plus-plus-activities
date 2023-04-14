#include <iostream>
using namespace std;

int main(){
int arr[]={1,5,7,5,8,9,11,12}, sze, num,i,j, ctr=0;
sze=sizeof(arr)/sizeof(arr[0]);

    cin>>num;
    for(i=0; i<sze; i++){
        for(j=i; j<sze; j++){
            if(arr[i]+arr[j] == num){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
            ++ctr;
            }
        }

    }

    cout<<"\nNumber of pairs: "<<ctr;

return 0;
}
