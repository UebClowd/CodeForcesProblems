#include <stdio.h>

// ID: 1A
// NAME: Theatre Square
// LINK: https://codeforces.com/contest/1/problem/A
// AUTHOR: https://codeforces.com/profile/SwarupP
// LAST EDITED: 11, 2025
// IDE: CLion

// given integers a, b; find minimum integer m such that ma >= b
unsigned int overfill(unsigned int a, unsigned int b) {
    if (b < a) return 1;

    unsigned int m = 1;

    while (m*a < b) m++;

    return m;
}


int main() {
    // 1 <= n, m, a <= 10^9
    unsigned int n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);


    printf("%llu", (unsigned long long)overfill(a, n) * overfill(a, m));


    // size = n*m;
    // Flagstone = a*a;
    // min_flagstones = ?
    // fill all the surface, no undercover, no breaking (you can overcovers)
    // round up to integer multiple of a.
    // then, (n2 / a) * (m2 / a)

}




