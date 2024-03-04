#include<stdio.h>

int main() {
    int i, j, n, a[1000], min, minI, temp;

    printf("Enter element number:  \n");
    scanf("%d", &n);

    printf("Enter the elements:  \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        min = a[i + 1];
        minI = i + 1;

        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                minI = j;
            }
        }

        if (a[i] > a[minI]) {
            temp = a[i];
            a[i] = a[minI];
            a[minI] = temp;
        }
    }

    printf("Elements are sorted: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

