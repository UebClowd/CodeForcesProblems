#include <stdio.h>

/// ID: 1B
/// NAME: Spreadsheet
/// LINK: https://codeforces.com/contest/1/problem/B
/// AUTHOR: https://codeforces.com/profile/SwarupP
/// LAST EDITED: 11, 2025
/// IDE: CLion

/// macros for easy use
#define MAX_LEN 32


static int parseInt(const char *str) {
    int result = 0, i = 0;

    while (str[i]) {
        // '0' <= str[i] <= '9'
        result = result * 10 + (str[i++] - '0');
    }
    return result;
}

static int A1ToNumber(const char *str) {
    int col = 0;
    for (int i = 0; str[i] >= 'A'; i++) {
        col = col * 26 + (str[i] - 'A' + 1);
    }
    return col;
}


static void NumberToA1(int col, char *tmp, char *result) {
    int i = 0;

    while (col > 0) {
        tmp[i++] = 'A' + --col % 26;
        col /= 26;
    }

    result[i] = 0;

    while (col < i) {
        result[col] = tmp[i - col - 1];
        col++;
    }
}


int main() {
    char str[MAX_LEN];
    char tmp_str_1[MAX_LEN];
    char tmp_str_2[MAX_LEN];

    int Lines;
    scanf("%d", &Lines);
    // 1 <= Lines <= 100_000

    while (Lines--) {


        // 1 <= row, col <= 1_000_000
        // 1 <= len(row), len(col) <= 7
        // 1 <= len(str) <= len('R') + len(row) + len('C') + len(col) + len('\0') <= 17
        // 1 <= len(str) <= len(A1col) + len(row) + len('\0') <= len(col) + len(row) + len('\0') <= 15
        // thus..
        // 1 <= len(str) <= 17
        // use 32 as int size is 32 and is closest power of 2
        // 16 could be used but too much work
        scanf("%s", &str);

        // len = len(str) - 1 <= 16
        int len = 0;
        while (str[++len]) {}
        // index of first \0
        // len of str

        int lastAlphaInd = len - 1;
        while ('9' - str[--lastAlphaInd] >= 0) {} // while string is below '9'
        // last alphabetic character
        // a 'C' if in RC format, last char of col if in A1 format
        // printf("middle: %d\n", lastAlpha);

        // if last alpha is first char or the previous char is alpha, then it is in A1 format
        int isA1 = (lastAlphaInd == 0 || (str[lastAlphaInd - 1] - '9') > 0);

        if (isA1) {
            int firstDigitInd = lastAlphaInd + 1;

            int col = A1ToNumber(str);
            printf("R%sC%d\n",&str[firstDigitInd], col);
        }
        else {
            int firstIntInd = 1;
            int secondIntInd = lastAlphaInd + 1;

            NumberToA1(parseInt(&str[secondIntInd]), tmp_str_1, tmp_str_2);
            str[lastAlphaInd] = 0;
            printf("%s%s\n", tmp_str_2, &str[firstIntInd]);
        }

    }
    return 0;
}