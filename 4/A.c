#include <stdio.h>

// ID: 4A
// NAME: Watermelon
// LINK: https://codeforces.com/contest/4/problem/A
// AUTHOR: https://codeforces.com/profile/SwarupP
// LAST EDITED: 11, 2025
// IDE: CLion

int main() {
    unsigned short number;
    scanf("%hd", &number);
    if (!( (number & 1) || number == 2 ) ) {
        puts("YES");
    } else {
        puts("NO");
    }
}



