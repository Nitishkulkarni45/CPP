#include<iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cnt++;
        cout<<arr[j];
    }
    

}