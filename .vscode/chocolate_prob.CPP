#include<iostream>
using namespace std;
int main(){
    int n,m,p;
    cout<<"Enter the number of chocolates\n";
    cin>>n;
    m = n/3;
    if(m>=3){
     p=m/3;
    }
    cout<<"Total number of chocolates is"<<p+m+n;
}