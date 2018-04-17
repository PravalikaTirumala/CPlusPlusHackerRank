#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    
   
    int h_1half= (int)s[1] - '0';
    int h_2half = (int)s[0] - '0';
    int hour = (h_2half * 10 + h_1half % 10);
    
     if(s[8] == 'A'){
         if(hour == 12){
             /*s[0]=s[1]=0;
            s=s.substr(0,7);*/
             hour=0;                                            
             s= to_string(hour) + to_string(hour) +s.substr(2,6);
        }
         else
            s=s.substr(0,8); 
     }
    if(s[8] == 'P'){
         if(hour == 12)
            s=s.substr(0,8); 

        else{
            hour= hour+12;
            s= to_string(hour) +s.substr(2,6);
             
            }
        }
    return s;
     
}
    
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

