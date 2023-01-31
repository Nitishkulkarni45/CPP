#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"The number is divisible by both 2 and 3\n";
    }
    else if(n%2==0 || n%3==0){
        cout<<"The number is divisible by any one among the two\n";
    }
}