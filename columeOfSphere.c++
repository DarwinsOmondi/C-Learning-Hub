#include<iostream>
using namespace std;

//declear the volume function
float volume(float radius);

int main(){
    float radius;
    //ask the user for the radius value
    cout<<"Enter the radius"<<endl;
    cin>>radius;

    float answer = volume(radius);
    cout<<"The volume of the sphere with radius "<<radius<<" is "<<answer;
    return 0;
}

float volume(float radius){
    return ((4/3) * (22/7) * (radius*radius*radius));
}