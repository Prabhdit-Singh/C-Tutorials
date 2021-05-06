#include<iostream>
#include<stdio.h>

using namespace std;

int difference(int num1, int num2);

int main(){
    int a;
    int b;
    int result;
    cout<<"Enter two numbers"<<endl;
    
    cin>>a>>b;
    result = difference(a,b);
    cout<<"Difference is: "<<result;
}

int difference(int num1, int num2){
    int diff = 0;

    return (num1 - num2);

}

