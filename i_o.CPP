#include<iostream>
void display();
int x,y;
using namespace std;
int main(){
    cout<<"Enter the numbers:";
    cin>>y>>x;
    x=x+y;
    cout<<"The sum is:\n"<<x;
display();
}

void display(){
    cout<<"Hi there myself Nitish";
}