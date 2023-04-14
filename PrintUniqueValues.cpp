#include <iostream>
using namespace std;

int main(){
int arr[]={1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
int n = sizeof(arr)/sizeof(arr[0]);

        for(int i=0; i<n; i++){    // iterate over every element in the array
            int j;
            for(j=0; j<i; j++){     // start with first element up to current i
                if(arr[i]==arr[j])  // 'pag equal ang arr[j] sa arr[i], titigil na sa pagcheck
                 break;
            }

            if(i==j) cout<<arr[i]<<" "; // 'pag nakaabot yung j sa i nang walang kaparehas, ipprint yung value
        }

return 0;
}
