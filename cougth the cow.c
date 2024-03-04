#include <stdio.h>

int minTime(int N, int K) {
    int time = 0;

    while (N != K) {
        if (K < N) {
            N--;
        } else {
            if (K % 2 == 0) {
                K /= 2;
            } else {
                K++;
            }
        }

        time++;
    }

    return time;
}

int main() {

    int N, K;
    scanf("%d %d", &N, &K);
ime
    printf("%d\n", minTime(N, K));

    return 0;
}

