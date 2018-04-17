#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    //as x2 is always > than x1, it is enough to compare only v values
   string res="";
    if ( v2 >= v1) {
            res="NO";
        } 
    else {
        //time =distance/speed, if the avg time is 0 then they can meet
            if ((x2 - x1) % (v1 - v2) == 0) {
               res="YES";
            } else {
                res="NO";
            }
        }
    return res;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

