#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of the triangle"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"";
            }
            for(int k = 1;k<=i;k++){
                cout<<"X ";
            }

        cout<<"\n";
    }
}