#include <iostream>
#include <stdlib.h>

using namespace std;

/*void sumofnegative(){ system("cls");
  int i, sum = 0;
  float arr[5];
   for(i = 0; i<5; i++) cin>>arr[i];

    for(i = 0; i<5; i++){
        if(arr[i] < 0)
            sum += arr[i];
    }

    cout<<"The sum of the negative numbers in the array is: "<<sum;

}*/

/*void displayprime(){
 int arr[5], i;
 for(i = 0; i<5; i++) cin>>arr[i];

  for(i = 0; i<5; i++){
    for(int j=2; j<i; j++){
      if(arr[i]/j != 0)
            cout<<arr[i]<<" ";
    }

  }

}//end of void */

int main(){
 char choice;

    do{ system("cls");
      cout<<"MAIN MENU"<<endl;
      cout<<"A - sum of all negative numbers in the array "<<endl;
      cout<<"B - display all prime numbers in the array "<<endl;
      cout<<"C - count and display the number of vowels in the array "<<endl;
      cout<<"D - count and display the number of odd numbers and the number of even numbers in the array. "<<endl;
      cout<<"E -  exit"<<endl;
      cout<<"Enter your choice:  "; cin>>choice;

        switch(choice){
            case 'A':
                        //sumofnegative();
                        int i, sum = 0;
                        float arr[5];
                        for(i = 0; i<5; i++) cin>>arr[i];

                            for(i = 0; i<5; i++){
                                if(arr[i] < 0)
                                    sum += arr[i];
                            }

                            cout<<"The sum of the negative numbers in the array is: "<<sum;
            break;
            case 'B':
                        //displayprime();
                        int arr[5], i;
                            for(i = 0; i<5; i++) cin>>arr[i];

                                for(i = 0; i<5; i++){
                                    for(int j=2; j<i; j++){
                                        if(arr[i]/j != 0)
                                        cout<<arr[i]<<" ";
                                    }

                                }
            //break;

        }
     }while(choice == 'A');




return 0;
}
