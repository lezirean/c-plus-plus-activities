//#include <iostream>
//using namespace std;

/*void print(int nums[]){
    for(int i = 0; i < nums.s)
return;
}*/

/*void swapp(int nums[], int left, int right){
    int temp;
    temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
return;
}

void permute(int nums[], int left, int right){
    if(left == right){
            cout << '\n';
            for(int k = 0; k < right; ++k) cout << nums[k] << " ";
    }
    else{
        for(int j = left; j < right; ++j){
            swapp(nums, j, right);
            permute(nums, j + 1, right);
        }

    }


return;
}
int main(){
    int nums[] = {1, 2, 3}, seiz = sizeof(nums)/sizeof(nums[0]);
    permute(nums, 0, seiz);
return 0;
}*/

// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* Function to print permutations of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */

void permute(char *a, int l, int r)
{
	int i;
	if (l == r)
		cout<<a<<endl;
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a+l), (a+i));
			permute(a, l+1, r);
			swap((a+l), (a+i)); //backtrack
		}
	}
}

/* Driver program to test above functions */
int main()
{
	char str[] = "ABCD";
	int n = strlen(str);
	permute(str, 0, n-1);
	return 0;
}
