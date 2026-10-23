// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// -1000 <= V <= 1000
// Output Format

// Output the sum of positive numbers first, then sum of negative numbers.
// Sample Input 0

// 6
// 5 -3 9 -10 2 8 
// Sample Output 0

// 24 -13
// Sample Input 1

// 4
// 1 0 -5 3
// Sample Output 1

// 4 -5


#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int V;
    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V);

        if (V > 0)
        {
            positiveSum += V;
        }
        else if (V < 0)
        {
            negativeSum += V;
        }
    }

    printf("%d %d\n", positiveSum, negativeSum);

    return 0;
}
