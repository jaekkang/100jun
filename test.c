#include <stdio.h>
#include <stdlib.h>

void    merge(int **arr, int left, int mid, int right)
{
    int i, j, k;
    int *tmp[right + 2];

    k = 1;
    i = left;
    j = mid + 1;
    while (i <= mid && j <= right)
    {
        if ((arr[i][0] <= arr[j][0]) && (arr[i][1] < arr[j][1]))
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    while (i <= mid)
        tmp[k++] = arr[i++];
    while (j <= right)
        tmp[k++] = arr[j++];
    i = left;
    k = 1;
    while (i <= right)
        arr[i++] = tmp[k++];
}

void    merge_sort(int **arr, int left, int right)
{
    int mid;

    while (left < right)
    {
        mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(void)
{
    int num;
    int i=0;
    int **arr;

    scanf("%d", &num);
    arr = (int **)malloc(sizeof(int *) * (num + 1));
    while (i < num)
    {
        arr[i] = (int *)malloc((sizeof(int) * 3));
        scanf("%d%d", &arr[i][0], &arr[i][1]);
        i++;
    }
    while (i<num)
    {
        printf("%d %d\n", arr[i][0], arr[i][1]);
        i++;
    }
    merge_sort(arr, 0, num-1);
    i=0;
    while (i<num)
    {
        printf("%d %d\n", arr[i][0], arr[i][1]);
        i++;
    }
    return (0);
}