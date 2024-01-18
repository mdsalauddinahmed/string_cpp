#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j=0;

    char str1[100], str2[100] = {0};

    cout << "Enter a sentence to convert Upper to lower and vice versa: ";
    gets(str1);

    for(i=strlen(str1)-1;i>=0;i--){
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    cout<<"The Reverse of the given string is :" <<str2<<endl;
    if(strcasecmp(str1,str2)==0){
        cout<<"this is palindrome"<<" ";

    }else{
     cout<<"Its not palindrome"<<" ";

    }

    return 0;
}

