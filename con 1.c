#include <stdio.h>

int main() {
    long long T, P;
    scanf("%lld %lld", &T, &P);

    long long change = P - T;

    if (change & (1LL << 22)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
