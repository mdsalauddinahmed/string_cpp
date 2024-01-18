 #include<bits/stdc++.h>
using namespace std;

int main() {
    int i, k = 0;
    int cnt[26] = {0};
    int x;
    char str[100];

    cout << "Enter a sentence :" << endl;
    gets(str);

    while (str[k] != '\0') {
        if (str[k] >= 'a' && str[k] <= 'z') {
            x = str[k] - 'a';
            cnt[x]++;
        }
        if (str[k] >= 'A' && str[k] <= 'Z') {
            x = str[k] - 'A';
            cnt[x]++;
        }
        k++;
    }

    for (i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            cout << static_cast<char>(i + 'a') << " " << cnt[i] << endl;
        }
    }

    return 0;
}
