#include <stdio.h>

// ID: 231A
// NAME: Team
// LINK: https://codeforces.com/contest/231/problem/A
// AUTHOR: https://codeforces.com/profile/SwarupP
// LAST EDITED: 11, 2025
// IDE: CLion

int main() {

    // a & b & c = 0 | 1
    unsigned short a, b, c;

    // 1 <= implement <= problems <= 1000
    unsigned short problems, implement = 0;

    scanf("%hd", &problems);

    for (;problems > 0; problems--) {
        scanf("%hd %hd %hd", &a, &b, &c);
        if ((a & b) | (b & c) | (a & c)) implement++;

    }
    printf("%hd", implement );
}

