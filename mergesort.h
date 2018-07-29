//
// Created by arjun on 1/31/18.
//

#ifndef MERGESORT_MERGESORT_H
#define MERGESORT_MERGESORT_H

#endif //MERGESORT_MERGESORT_H

void merge(int a[], int l, int m, int r){

    int i = 0, j = 0, k = l;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

    for (int b = 0; b < n1 ; ++b) {

        L[b] = a[l+b];

    }

    for (int c = 0; c < n2 ; ++c) {

        R[c] = a[m + 1 + c];

    }

    while (i < n1 && j < n2){

        if(L[i] < R[j]){

            a[k] = L[i];
            i++;

        } else{

            a[k] = R[j];
            j++;

        }

        k++;
    }

    while (i < n1){

        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){

        a[k] = R[j];
        j++;
        k++;
    }



}

void sort(int a[], int l, int r){


    if (l < r){

        int m = (l + r)/2;

        sort(a, l, m);
        sort(a, m + 1, r);

        merge(a, l, m, r);
    }
}
