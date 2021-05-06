#include<iostream>
#include<stdio.h>

using namespace std;

int sum(int num1, int num2);

int main(){
    int a = 5;
    int b = 10;
    int result;

    result = sum(a,b);
    cout<<"Sum is: "<<result;

    return 0;
}
int sum(int num1, int num2){
    int sum=0;

    sum = num1 + num2;
    return sum;

}


