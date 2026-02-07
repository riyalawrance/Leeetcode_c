#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Function to generate a palindromic number from the left half
long genpal(long num, int even) {
    long n = num;
    if (even != 0) {
        num /= 10;
    }
    while (num > 0) {
        n = (n * 10) + (num % 10);
        num /= 10;
    }
    return n;
}

// Function to find the nearest palindromic number
char* nearestPalindromic(char* n) {
    char* res;
    long num = 0, lft = 0, fin[5], ele;
    int i, len = strlen(n);
    for (i = 0; i < len; i++) 
    {
        num = num * 10 + (n[i] - '0');
    }
    for (i = 0; i < (len + 1) / 2; i++) 
    {
        lft = lft * 10 + (n[i] - '0');
    }
    fin[0] = genpal(lft, len % 2);
    fin[1] = genpal(lft - 1, len % 2);
    fin[2] = genpal(lft + 1, len % 2);

    // Calculate edge cases
    long pow10_len_minus_1 = 1;
    for (i = 0; i < len - 1; i++) {
        pow10_len_minus_1 *= 10;
    }
    long pow10_len = pow10_len_minus_1 * 10;
    fin[3] = pow10_len_minus_1 - 1;
    fin[4] = pow10_len + 1;

    long diff = LONG_MAX;
    for (i = 0; i < 5; i++) {
        long df = labs(num - fin[i]);
        if (df == 0) continue;
        if (df < diff || (df == diff && fin[i] < ele)) {
            diff = df;
            ele = fin[i];
        }
    }
    int numDigits = snprintf(NULL, 0, "%ld", ele);
    res = (char*)malloc(numDigits + 1);
    snprintf(res, numDigits + 1, "%ld", ele);

    return res;
}
