#include<iostream>
#include<cstring>

using namespace std;

int main(){

int i,cnt=0;

char str[100];
gets(str);


for(i=0;i<strlen(str);i++){
    if(str[i]==' '){
        cnt++;
    }

}
cout<<cnt;


return 0;
}
