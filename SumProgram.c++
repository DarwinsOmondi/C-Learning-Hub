#include<iostream>
using namespace std;

int main(){
     int i = 0,sum =0;  
    // //for loop that prints all the numbers from 1 to 100 and gets the sum of the numbers

    // for (i; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    //     sum += i; 
    // }

    // cout << "The total sum is: " << sum << endl; 




//   while (i <= 99) {
//         cout << i++ << endl; 
//         sum += i;  

//         cout << "The total sum is: " << sum << endl;
    
//     }

    do
    {
                cout << i++ << endl; 
        sum += i;  

        cout << "The total sum is: " << sum << endl;
    } while (i <= 99);
    

    return 0;
}
