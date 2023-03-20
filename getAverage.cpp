double getAverage(const int a[], int length) {
    double sum, average;
    int i;

    sum = 0;
    for (i = 0; i < length; i++) {
        sum += a[i];
    }
    average = (double)sum / length;

    return average;
}