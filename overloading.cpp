#include <iostream>
#include <stdlib.h>
using namespace std;

void sortvalue(int intArray[]);
void sortvalue(long longArray[]);
void sortvalue (double doubleArray[]);

int main(){
system ("cls");
int option, intArray[10];
long longArray[10];
double doubleArray[10];


        cout<<"What values do you want to sort? \n";
        cout<<"1 - Integer"<<endl;
        cout<<"2 - Long"<<endl;
        cout<<"3 - Double"<<endl;
        cout<<"Enter choice: "; cin>>option;

        switch(option){
            case 1: system ("cls");
                    cout<<"Enter 10 integer values: ";
                    for(int i=0; i<10; i++)
                      cin>>intArray[i];
                        sortvalue(intArray);
            break;
            case 2: system ("cls");
                    cout<<"Enter 10 long values: ";
                        for(int i=0; i<10; i++)
                            cin>>longArray[i];
                              sortvalue(longArray);
            break;
            case 3: system ("cls");
                    cout<<"Enter 10 double values: ";
                        for(int i=0; i<10; i++)
                         cin>>doubleArray[i];
                          sortvalue(doubleArray);

        }

return 0;
}

void sortvalue(int intArray[]){
int temp;

    for(int i=0; i<9; i++){
        for(int m=i; m<10; m++){
            if(intArray[m] < intArray[i]){
               temp = intArray[m];
                intArray[m] = intArray[i];
                intArray[i] = temp;
            }
        }
    }

cout<<"Sorted order: ";
        for(int s=0; s<10; s++)
            cout<<intArray[s]<<" ";
}

void sortvalue(long longArray[]){
long temp;

    for(int i=0; i<9; i++){
        for(int m=i; m<10; m++){
            if(longArray[m] < longArray[i]){
               temp = longArray[m];
                longArray[m] = longArray[i];
                longArray[i] = temp;
            }
        }
    }

        cout<<"Sorted order: ";
            for(int j=0; j<10; j++)
             cout<<longArray[j]<<" ";
}

void sortvalue (double doubleArray[]){

   double temp;

    for(int i=0; i<9; i++){
        for(int m=i; m<10; m++){
            if(doubleArray[m] < doubleArray[i]){
               temp = doubleArray[m];
                doubleArray[m] = doubleArray[i];
                doubleArray[i] = temp;
            }
        }
    }

        cout<<"Sorted order: ";
            for(int j=0; j<10; j++)
             cout<<doubleArray[j]<<" ";
}
