#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value of n\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    // if(arr[i]==1 || arr[i]==2 || arr[i]==0){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i]= arr[j];
                    arr[j]=arr[i];
                    arr[j]=arr[i];
                }
            }
        }
        cout<<arr[i];
    }
    // else{
    //     return -1;
    // }
// }