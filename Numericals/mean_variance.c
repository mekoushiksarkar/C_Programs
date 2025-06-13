/* Mean Variance */

#include <stdio.h>
#include <math.h>

// Function to calculate the mean
double calculateMean(int arr[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

// Function to calculate the variance
double calculateVariance(int arr[], int n, double mean)
{
    double variance = 0.0;
    for (int i = 0; i < n; i++)
    {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / n;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    double mean = calculateMean(arr, n);
    double variance = calculateVariance(arr, n, mean);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);

    return 0;
}
