/**Step 1
{21, 34, 11, 9, 1, 0, 22};
{21, 34, 11, 9, 1, 0, 22};
{21, 11, 34, 9, 1, 0, 22};
{21, 11, 9, 34, 1, 0, 22};
{21, 11, 9, 1, 34, 0, 22};
{21, 11, 9, 1, 0, 34, 22};
{21, 11, 9, 1, 0, 22, 34};

Step 2
{21, 11, 9, 1, 0, 22, 34};
{11, 21, 9, 1, 0, 22, 34};
{11, 9, 21, 1, 0, 22, 34};
{11, 9, 1, 21, 0, 22, 34};
{11, 9, 1, 0, 21, 22, 34};
{11, 9, 1, 0, 21, 22, 34};

Step 3
{11, 9, 1, 0, 21, 22, 34};
{9, 11, 1, 0, 21, 22, 34};
{9, 1, 11, 0, 21, 22, 34};
{9, 1, 0, 11, 21, 22, 34};

Step 4
{9, 1, 0, 11, 21, 22, 34};
{1, 9, 0, 11, 21, 22, 34};
{1, 0, 9, 11, 21, 22, 34};

Step 5
{1, 0, 9, 11, 21, 22, 34};
{0, 1, 9, 11, 21, 22, 34};

Step 6
{0, 1, 9, 11, 21, 22, 34};

*/

#include <stdio.h>
void Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {21, 34, 11, 9, 1, 0, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
