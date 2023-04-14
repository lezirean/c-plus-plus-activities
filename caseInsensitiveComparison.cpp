#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//It accepts two range and compares all elements in the given range [startOfRange1,endOfRange1) with elements in
//the range beginning at startOfRange2 and returns true if all of the elements in both ranges are equal.
//It uses binary predicate as callback to compare the elements of range.
// ctrl + shift + c
// ctrl + shift + x

bool compareChar(char& c1, char& c2){

    if (c1 == c2)
        return true;
    else if (toupper(c1) == toupper(c2))
        return true;
    return false;
}

 // Case Insensitive String Comparision

bool caseInSensStringCompare(string& str1, string& str2){
    return ( (str1.size() == str2.size() ) && equal(str1.begin(), str1.end(), str2.begin(), &compareChar) );
}

int main(){
    string str1 = "Hi This is SamPle";
    string str2 = "hi this is sample";

    // Check if both strings are equal
    bool result = caseInSensStringCompare(str1, str2);
    // caseInSensStringCompare()  returns true if both strings are equal in case insensitive manner
    if (result)
        cout << "Both Strings are equal" << endl;
    else
        cout << "Both Strings are not equal" << endl;

  return 0;
}
