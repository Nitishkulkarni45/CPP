#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of test cases\n";
    cin>>t;
    while(t--){
        int n,cnt=0;
         cout<<"Enter the length of an array\n";
    cin>>n;
    int a[n];
    int b[n-1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        b[i] = abs(a[i]-a[i+1]);
        cout<<b[i];
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        if(b[i]==b[i+1]){
            cnt++;
            // cout<<cnt<<endl;
        }
    }
    cout<<"longest arithmetic subarray is:"<<cnt;
}
    }
   