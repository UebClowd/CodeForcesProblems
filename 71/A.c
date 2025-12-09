#include <stdio.h>

// ID: 71A
// NAME: Way Too Long Words
// LINK: https://codeforces.com/contest/71/problem/A
// AUTHOR: https://codeforces.com/profile/SwarupP
// LAST EDITED: 11, 2025
// IDE: CLion

unsigned short length (const char* str) {
    const char* end;
    end = str;
    while (*end != 0)  end++;
    return end - str;
}

void abbreviate_override (char* str) {
    unsigned short len = length(str);
    if (len == 11) {
        str[1] = 9 + '0';
        str[2] = str[10];
        str[3] = 0;
    }
    else if (len > 11) {
        sprintf(&str[1], "%d", len - 2);
        str[3] = str[len - 1];
        str[4] = 0;
    }
}

int main() {
    unsigned short count;
    char str[101];

    // 1 <= count <= 101
    if (scanf("%hd", &count) == 0) return 0;


    for (; count > 0; count--) {

        // 1 <= len(str) <= 100
        scanf("%s", str);

        abbreviate_override(str);

        puts(str);
    }
}




