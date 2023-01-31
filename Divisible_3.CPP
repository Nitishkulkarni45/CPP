#include<iostream>
using namespace std;

int main(){
cout<<"The multiples of 3 are as follows\n";
for(int i=0;i<100;i++){
 if(i%3==0){
    continue;
 }
 cout<<i<<endl;
}

}