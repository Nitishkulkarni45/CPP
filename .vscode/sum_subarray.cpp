#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
         cnt=0;
        for(int j=i;j<n;j++){
            cnt+=a[j];
            cout<<cnt<<endl;
        }

    }
}