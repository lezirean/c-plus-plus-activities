#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string t; cin >> t;

    pair<int, int> p = make_pair(0, 0);
    int angle = 0;

    for(auto i : t){
        if(i == 'S'){
            if(angle == 0){ // face right, +x
                p.first += 1;
            } else if(angle == 90){ // face up, +y
                p.second += 1;
            } else if(angle == 180){ // face left, -x
                p.first -= 1;
            } else if(angle == 270){ // face down, -y
                p.second -= 1;
            }
        } else { // determining where to face
            angle = (angle + 270) % 360;
        }
    }

    cout << p.first << " " << p.second << endl;
    return 0;
}
