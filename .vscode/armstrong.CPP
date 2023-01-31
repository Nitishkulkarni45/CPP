#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    int sum=0;
    int original =n;
    cout<<"Enter the number \n";
    cin>>n;
    while(n>0){
       int lastDigit = n%10;
       sum += pow(lastDigit,3);
       n=n/10;
    }
  
    if(sum==original){
        cout<<"The number is an armstrong number\n";
    }
    else{
        cout<<"IT is not\n";
    }

}