#include<bits/stdc++.h>
using namespace std;

int main(){

int area,ans,l;

cout<<"Enter The area of a ractangle :"<<" ";

cin>>area;

l=sqrt(area);

while(area%l!=0){
    l--;
}
cout<<l <<" "<<area/l<<" ";





}
