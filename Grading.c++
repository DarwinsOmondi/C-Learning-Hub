#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3,average,grade;
    
   

    cout << "Enter your grades for three subjects: " << endl;
    cin >> sub1 >> sub2 >> sub3;

    average = (sub1 + sub2 + sub3) / 3;
    

    cout << "Your average grade is: " << average << endl;



    if (average >= 70 && average <= 100)
    {
      grade = 1;
    }else if(average >= 60 && average <= 69)
    {
          grade = 2;
    }else if(average >= 50 && average <= 59){

  grade = 3;

    }else if(average >= 40 && average <= 49){

  grade = 4;
  
    }else
    {
         cout << "Fail" <<endl;
    }
    

    switch (grade) {
        case 1:
            cout << "Grade: A" << endl;
            break;
        case 2:
            cout << "Grade: B" << endl;
            break;
        case 3:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
            break;
    }
    return 0;
}