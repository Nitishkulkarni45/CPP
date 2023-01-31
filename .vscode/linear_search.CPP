#include<iostream>
using namespace std;
int main(){
    int n,key,flag=0;
    cout<<"Enter the value\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key that you want to search\n"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            flag = 1;
        }
        else{
    
            flag = -1;
        }
    }
    if(flag==1){
    cout<<"The entered key is present in the array\n";
    }
    else{
        cout<<"The entered key is not present in the array\n";

    }
    

}