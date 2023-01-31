#include<iostream>
using namespace std;
int main()
{
int n,min,max;
cout<<"Enter the length of an array\n";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}


max = arr[0];
min = arr[0];

for(int i=0;i<n;i++)\
{
    if(max<arr[i]){
        max = arr[i];
    }
    if(min>arr[i]){
        min = arr[i];
    }
}
cout<<"******************************************\n";
cout<<max<<endl;
cout<<min<<endl;

}