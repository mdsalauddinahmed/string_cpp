#include<bits/stdc++.h>
using namespace std;
int main(){


int i,j=0;

char str1[100],str2[100]={0};

cout<<"Enter a string to get reverse of string : "<<" ";
gets(str1);

for(i=strlen(str1)-1;i>=0;i--){

    str2[j]=str1[i];
    j++;
}
str2[j]='\n';

cout<<"reverse string is " <<str2;




return 0;
}
