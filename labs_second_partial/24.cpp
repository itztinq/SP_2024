#include <stdio.h>

bool divisibleByK (int number, int k) {
    if(number%k!=0) {
        return 0;
    }
    return 1;
}

int nextDivisibleByK (int number, int k) {
    if(divisibleByK(number+1, k)) {
        return number+1;
    } else {
        return nextDivisibleByK(number+1, k);
    }
}

int main() {

    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    for (int i = a; i <= b; i++) {
        printf("%d -> %d\n", i, nextDivisibleByK(i, k));
    }

    return 0;
}
