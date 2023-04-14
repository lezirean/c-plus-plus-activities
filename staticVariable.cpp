#include <iostream>

using namespace std;

void fun();

int main(){

for(int i = 0; i < 5; ++i){
    fun();
}

return 0;
}

void fun(){
static int hi = 0;
++hi;

cout<< '\n' << hi;
}
