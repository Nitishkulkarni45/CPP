#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter the values of a and b";
    cin>>a,b;
    for(j=a;j<b+1;j++){
        for(i=2;i<j;i++){
            if(j%i==0){
                break;
            }
        }
        if(i==j){
            cout<<j<<endl;
        }
    }


}