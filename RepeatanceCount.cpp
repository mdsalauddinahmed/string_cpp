#include<iostream>
#include<cstring>

using namespace std;

int main(){

int i,cnt=0;

char c,str[100];
gets(str);

cout<<"Enter a string number "<< " ";

cin>>c;
for(i=0;i<strlen(str);i++){
    if(str[i]== c){
        cnt++;
    }

}
cout<<cnt;


return 0;
}
