#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3,average;
    
   

    cout << "Enter your grades for three subjects: " << endl;
    cin >> sub1 >> sub2 >> sub3;

    average = (sub1 + sub2 + sub3) / 3;
    

    cout << "Your average grade is: " << average << endl;



    if (average >= 70 && average <= 100)
    {
      cout << "A " <<endl;
    }else if(average >= 60 && average <= 69)
    {
         cout << "B" <<endl;
    }else if(average >= 50 && average <= 59){
 cout << "C" <<endl;
    }else if(average >= 40 && average <= 49){
 cout << "D" <<endl;
    }else
    {
         cout << "Fail" <<endl;
    }
    
    

    return 0;
}