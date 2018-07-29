#include <stdio.h>
#include "mergesort.h"

int main() {


    int a[10];
    int n;

    printf("enter size = ");
    scanf("%d", &n);

    printf("enter no. = ");

    for (int i = 0; i < n ; ++i) {

        scanf("%d", &a[i]);

    }

    //sort(a, n);
    sort(a, 0, n-1);

    printf("sorted list = ");

    for (int i = 0; i < n ; ++i) {

        printf("%d ", a[i]);

    }
    return 0;
}