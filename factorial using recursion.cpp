#include<iostream>
#include<stdio.h>

using namespace std;

int fact(int n);

int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    int result = fact(a);
    cout<<"Factorial of "<< a <<" is: "<<result;
    return 0;
}

int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}