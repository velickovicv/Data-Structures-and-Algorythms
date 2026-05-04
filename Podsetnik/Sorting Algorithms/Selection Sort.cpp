int i, j, minIndex, temp;

for (i = 0; i < n - 1; i++) {

    minIndex = i;

    for (j = i + 1; j < n; j++) {
        if (A[j] < A[minIndex]) {
            minIndex = j;
        }
    }

    temp = A[i];
    A[i] = A[minIndex];
    A[minIndex] = temp;
}
