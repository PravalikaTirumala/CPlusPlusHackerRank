#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the staircase function below.
 */
void staircase(int n) {
   int i=0,j,k;
    for(i=0;i<n;i++){
        j=0;k=0;
        while (j < ( n-(i+1) ) ){
            cout<<" ";
            j++;
        }
    while (k<(i+1)){
         cout<<"#";
            k++;
        }
        
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

