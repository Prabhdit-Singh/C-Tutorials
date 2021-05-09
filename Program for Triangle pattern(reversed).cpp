#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of the triangle"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"X ";
            }
        cout<<"\n";
    }
}