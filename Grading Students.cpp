#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    int pass=40;
    for(int i=0; i<grades.size();i++){
        if(grades[i] < pass){
            if((pass - grades[i]) < 3 )
                grades[i] = pass;
        }
        else {
            if(grades[i] % 5 != 0 ){
                if(( (grades[i]+ (5 - grades[i]%5 )) - grades[i]) < 3){
                    grades[i] = (grades[i]+ (5 - grades[i]%5 ));
                }
                
                else{
                    grades[i] = grades[i];
                }
            }
               
        }
    }
return grades;
}

int main()
{
   

    int n;
    cin >> n;
   int grades_item=0;

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        
        cin >> grades_item;
        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        cout << result[result_itr]<<" ";

       
    }

  //  fout << "\n";

   // fout.close();

    return 0;
}

