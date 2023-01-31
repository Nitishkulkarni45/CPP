#include<iostream>
using namespace std;
int main(){
    int n,key,s,e,mid;
    int arr[n];
    cout<<"Enter the value of n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of key\n";
    cin>>key;
    mid = (s+e)/2;
    for(int i=0;i<n;i++){
    if(arr[mid]==key){
    return mid;
    }
    else if(arr[mid]>key){
     e = mid-1;
    }
    else{
        s = mid+1;
    }
    return -1;
    }
    cout<<mid;
    
}