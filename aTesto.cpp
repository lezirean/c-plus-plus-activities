//#include <iostream>
//#include <math.h>
//using namespace std;
//
////int main(){
//   /* int start, ending; bool isPrime;              // prime number w/i a range
//    cout<<"Enter starting number: "; cin >> start;
//    cout<<"\nEnter ending number: "; cin >> ending;
//    for(int range = start; range <= ending; ++range){
//        isPrime = true;
//        for(int i = 2; i < range; ++i){
//            if( range % i == 0){ // then it is not a prime number
//                isPrime = false;
//                break;
//            }
//        }
//       if(isPrime && range != 1) cout << range << " ";
//    }*/
//
//    /*int num; bool isPrime;                // check last occured prime number
//    cout << "Enter a number: "; cin >> num;
//
//    for(int check = num-1; check > 1; --check){
//        isPrime = true;
//        for(int i = 2; i < check; ++i){
//            if(check % i == 0){ // then 'check' is not a prime number
//                isPrime = false;
//                break;
//            }
//        }
//        if(isPrime){ cout << endl << check; break; }
//    } */
//
//    /*int num1, num2, gcd;                  // Check GCD of two numbers
//    cout << "Enter two nums: "; cin >> num1 >> num2;
//
//    for(int i = 1; i <= num1/2 && i <= num2/2; ++i){  // Start from 1 and increment by 1 until 'i' is <= num1 AND num2
//            if(num1 % i  == 0 && num2 % i == 0){  // Checks if the num1 and num2 is sivisible by current 'i'
//                gcd = i;                          // Assigns to gcd if the 'if-statement' is fulfilled
//            }
//
//    } cout << gcd; */
//
//    /*int nTerm; float sum = 0; cin >> nTerm;       // Sum of the series taking the form of: 1/n^n
//
//    for (int i = 1; i <= nTerm; ++i){  // For the denominator part.
//
//        cout << "1/" << pow(i, i) << " "; // Pow function. First argument is the base, the second one is the exponent.
//        sum += 1 / pow(i, i);             // Takes the sum
//    }
//        cout << "\n" << sum; */
//
//   /* int term, sum, total = 0; cin >> term;
//
//    for (int i = 1; i <= term; ++i){ sum = 0;
//        for (int j = 1; j <= i; ++j){ // Get the sum up until the current 'i'
//             sum += j; total += j;
//             cout << j;
//             if (j < i) cout << " + ";
//             else cout << " = " << sum;
//
//        }
//        cout << '\n';
//    }
//
//    cout << "\nThe total is: " << total;
//
//return 0;
//}*/
//
//void rightsidedtriangle(){
//    int rows, mid; cin >> rows;
//
//    mid = (rows % 2 == 0) ? rows/2 : (rows/2) + 1;
//
// for (int row = 1; row <= rows; ++row){
//    for (int hashh = 1; hashh <= mid - abs(mid - row); ++hashh){
//        cout << "#";
//    }
//    cout << '\n';
// }
//
//}
//
///*void nonPrime(int upperBound){    // List non-prime numbers from one to an upperbound
//
// if(upperBound >=1 && upperBound < 4) cout << "No non-prime numbers in that range." << "\n";
//
// for(int num = 1; num <= upperBound; ++num){
//    for(int notprime = 2; notprime < num; ++notprime){ // if divisible then it is not prime
//        if (num % notprime == 0){
//            cout << num << " ";
//            break;
//        }
//    }
//
// }
//
//}*/
//
//void oddNums(int noOfTerms){
//int sum = 0;
//
//    for(int i = 1; i <= noOfTerms; ++i){
//        if(i % 2 != 0){     // condition for checking odd numbers
//            cout << i << " ";
//            sum += i;
//        }
//    }
//
//    cout << '\n' << "The sum is: " << sum;
//}
//
//int main(){
// /*int upper; cin >> upper;
// nonPrime(upper); */
//
//int terms; cin >> terms; oddNums(terms);
//
//return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef long double ld;
//
//int main()
//{
//  ll N;
//  cin >> N;
//  vector<ll> X(N), Y(N);
//  for (ll i=0; i<N; i++) cin >> X[i] >> Y[i];
//  string S;
//  cin >> S;
//
//  map<ll, ll> Rmin;
//  map<ll, ll> Lmax;
//
//  for (ll i=0; i<N; i++) {
//    if (S[i] == 'R') {
//      if ((Lmax.count(Y[i])) && (X[i] < Lmax[Y[i]])) {
//        cout << "Yes" << endl;
//        return 0;
//      }
//      if (Rmin.count(Y[i])) {
//        if (X[i] < Rmin[Y[i]]) Rmin[Y[i]] = X[i];
//      }
//      else Rmin[Y[i]] = X[i];
//    }
//    else {
//      if ((Rmin.count(Y[i])) && (X[i] > Rmin[Y[i]])) {
//        cout << "Yes" << endl;
//        return 0;
//      }
//      if (Lmax.count(Y[i])) {
//        if (Lmax[Y[i]] < X[i]) Lmax[Y[i]] = X[i];
//      }
//      else Lmax[Y[i]] = X[i];
//    }
//  }
//  cout << "No" << endl;
//}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N; // moves
  long long X; cin >> X; // starting vertex
  string S; cin >> S; // LRU moves

  vector<char> vect;
  vect.reserve(N);

  for(int i = 0; i < N; ++i){
    if(vect.size() == 0){
        vect.emplace_back(S[i]);
        continue;
    }
    if(S[i] == 'U'){
        if(vect.back() == 'U') vect.emplace_back(S[i]);
        else vect.pop_back();
    }
    else vect.emplace_back(S[i]);
  }

  N = (int)vect.size();

  for(int i = 0; i < N; ++i){
    if(vect[i] == 'U') X /= 2;
    else if(vect[i] == 'L') X *= 2;
    else X = X * 2 + 1;
  }

  cout << X << "\n";

  return 0;
}
