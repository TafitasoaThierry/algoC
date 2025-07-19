#include <stdio.h>

void prime_number(int number) {
    int i = 2;

    if(number < i) {
        printf("%d isn't a prime number\n", number);
    }else {
        if(number == i) {
            printf("%d is a prime number\n", number);
        }
        while(i < number) {
            if(number % i == 0) {
                printf("%d isn't a prime number\n", number);
                i = number;
            }else if((number % i != 0) && (i + 1 == number)) {
                printf("%d is prime number\n", number);
            }
            i = i + 1;
        }
    }
}

int main() {
    prime_number(5);
    prime_number(2);
    prime_number(10);
    return 0;
}