#include<iostream>
using namespace std;
int main(){
    int n,m,key;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
            cout<<"\n";
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                cout<<"found"<<endl;
            }
        }
    }
     
    
}