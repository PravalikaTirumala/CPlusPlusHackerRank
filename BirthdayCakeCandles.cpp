#include <bits/stdc++.h>
#include<string>
using namespace std;



/*
 * Complete the birthdayCakeCandles function below.
 */
int birthdayCakeCandles(int n, vector<int> ar) {
    int val=0, counter=1;
    int index=0;
    
    for(int i=0;i<n;i++){
    
        if(ar[i] > val){
            val = ar[i];
            index = i;
            //counter =counter+1;;
        }
        
        if((ar[i] == val) && (index != i)){
            counter =counter+1;
        }
        
   }
    return counter;

}

int main()
{
  
   vector <int> arr;
    int n,val=0;
   //  getline(cin, n);
   cin >> n;
    for(int i=0;i< n;i++){
    	cin>>val;
    	arr[i]=val;
	}

	int res = birthdayCakeCandles(n,arr);
	cout<<res;
   return 0;
}

