#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if((a[i]<a[i+1]) && (a[n-1]>a[n-2])){
         cnt++;
        }
    }
    cout<<cnt<<endl;
    

}