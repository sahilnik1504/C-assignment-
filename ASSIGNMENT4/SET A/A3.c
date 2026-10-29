#include <stdio.h>

int countOcc(int a[], int n, int key) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == key)
            count++;
    }
    return count;
}

int main() {
    int a[100], n, i, key;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Number to search: ");
    scanf("%d", &key);
    printf("Output: %d occurs %d times\n", key, countOcc(a, n, key));
    return 0;
}