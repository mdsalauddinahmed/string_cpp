#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;

    char str1[100], str2[100] = {0};

    cout << "Enter a sentence to convert Upper to lower and vice versa: ";
    gets(str1);

    for (i = 0; i < strlen(str1); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str2[i] = str1[i] - 32;
        } else if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str2[i] = str1[i] + 32;
        } else {
            str2[i] = str1[i];
        }
    }

    cout << str2 << " ";

    return 0;
}
