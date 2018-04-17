#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the plusMinus function below.
 */
void plusMinus(vector<int> arr) {
    double posi=0,neg=0,zeros=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0)
            zeros++;
        else if(arr[i]<0)
            neg++;
        else
            posi++;
    }
    int size=arr.size();
    std::cout<<std::setprecision(6)<<posi/size<<endl;
    cout<<setprecision(6)<<neg/size<<endl;
    cout<<setprecision(6)<<zeros/size<<endl;
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


    plusMinus(arr_itr);

    return 0;
}
