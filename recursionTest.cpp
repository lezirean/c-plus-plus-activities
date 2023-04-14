#include <iostream>
using namespace std;

/*void print(int a[], int sizeArr){     // print the elements in array using recursion (problem was with sizeArr in main lol + other tingz )
    static int i = 0;                 // like the base case
    if( i == sizeArr ) return;
    else{
        cout << a[i] << " "; ++i; print(a, sizeArr);
    }

} */

/*void print(int a[], int sizeArr){     // like the function above, but peint it in reverse order
    static int i = sizeArr;
    if( i == 0 ) return;
    else{
        cout << a[i-1] << " "; --i; print(a, sizeArr);  // the 'i' in a[i-1] does not modify 'i'. '--i' does.
    }

}*/

/*int sumD(int n){      // sum of the digits in a number
    if( n < 0 ) n*= -1;
    if ( n == 0) return n;
    else
        return (n%10) + sumD(n/10);

}*/

/*int sum1ToN( int S, int N ){      // sum from 1 to n
    if ( S == N ) return S;
    else
        return S + sum1ToN( S+1, N );
}*/

/*int countZero(int arr[], int sze){      // count the number of zeroes in array
    static int i = 0, cnt = 0;
     if( i == sze ) return cnt;
    else{
        if (arr[i] == 0) ++cnt; ++i; return countZero(arr, sze);
    }
}*/

/*void largestEle(int arr[], int sizee){ // Largest element in an array using recursion
    static int i = 1;
    if( i == sizee ){ return; }
    else{
        if (arr[0] < arr[i]){
        arr[0] = arr[i];
        ++i; cout << "\b" << arr[0]; largestEle(arr, sizee);
        }
        else{
            ++i; cout << "\b" << arr[0]; largestEle(arr, sizee);
        }
    }
}*/

int main (){
    /*int a[] = {2, 7, 9, 4, 6}; int sizeArr = sizeof(a)/ sizeof(a[0]);     // print the elements in array using recursion (not solved yet)
    print(a, sizeArr); */

    /*int n; cin >> n;      // sum of the digits in a number
    cout << sumD (n); */

   /* int S = 1, N; cin >> N;      // sum from 1 to N
    cout << sum1ToN (S, N); */

    /*int arr[] = {0, 3, 2, 0, 5, 0}, sze = sizeof(arr)/sizeof(arr[0]);     // count the number of zeroes in array
    cout << countZero(arr, sze); */

    /*int arr[] = {6, 4, 2, 9, 1}, sizee = sizeof(arr)/sizeof(arr[0]);  // Largest element in an array using recursion
    largestEle(arr, sizee); */


return 0;
}


