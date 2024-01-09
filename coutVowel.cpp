#include<iostream>
using namespace std;
int main(){

 int i, cnt = 0;
    char s[100];

    cout << "Enter a string to count vowels: " << endl;
    cin >> s;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u') {
            cnt++;
        }
    }
if(cnt==0){
    cout<<"No vowels here "<<"";
}else{


    cout << "Number of vowels in \"" << s << "\" are: " << cnt << endl;

}
    return 0;

}
