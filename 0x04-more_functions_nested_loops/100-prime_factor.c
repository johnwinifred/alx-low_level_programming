#include <stdio.h>
#include "main.h"

int main(void) {
    long long num = 612852475143;
    long long largest_factor = 0;

    
    while (num % 2 == 0) {
        largest_factor = 2;
        num /= 2;
    }
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest_factor = i;
            num /= i;
        }
    }

  
    if (num > 2) {
        largest_factor = num;
    }

    printf("%lld\n", largest_factor);
    return 0;
}

