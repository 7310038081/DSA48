// #include<iostream>
// using namespace std;


// int main(){
//     int n;

//     int a = cin.get(); // it gives the ascii values for the characters values not for the integers
//     cout<<"the value of n is "<<a;

// }

// write a program to check whether the number is +ve or -ve or 0
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>0){
        cout<<"Positive"<<endl;
    }

    else if(n==0){
        cout<<"Zero"<<endl;
    }

    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}