#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the miniMaxSum function below.
 */
void miniMaxSum(vector<int> arr) {
     long int sum=0, val=0, min=0,max=0;                           
   
    sum= std :: accumulate (arr.begin(),arr.end(),sum);
    /*for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }*/
    for(int i=0;i<arr.size();i++){
         val = sum - arr[i];                                                                                             
     if(i==0){
         max=min=val;
     }
        else{       
        if(max<val) max=val;
        if(min>val) min=val;
        }
    }
    cout<<min<<" "<<max;
}

int main()
{
     int n;
    cin >> n;
   int val=0;

    vector<int> arr_itr(n);

    for (int i = 0; i < 5; i++) {
      cin>>val;
        arr_itr[i] = val;
    }

    miniMaxSum(arr_itr);

    return 0;
}
