#include<iostream>
using namespace std;
int main(){
    int n;
    int reverse = 0;
    cout<<"Enter the value of the number\n"<<endl;
    cin>>n;
    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10+lastDigit;
        n=n/10;
    }
    cout<<reverse<<endl;
}