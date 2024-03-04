#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {

    int N, W;
    scanf("%d %d", &N, &W);

    int weights[N], values[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    int dp[N + 1][W + 1];


    for (int i = 0; i <= N; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = MAX(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }


    printf("%d\n", dp[N][W]);

    return 0;
}

