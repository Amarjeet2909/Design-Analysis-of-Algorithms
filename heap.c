#include <stdio.h>
#define MAX 15

void swap(int *x,int *y);
void heap_Sort(int arr[],int n);
void build_heap(int arr[],int n);
void heapify(int arr[],int s,int n);

int main()
{
    int arr[MAX],n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Insert the elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    heap_Sort(arr,n-1);

    printf("After sorting with Heap Sort technique:\n{");
    for(int i=0; i<n; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\b}\n");
    return 0;
}

void swap(int *x,int *y)
{
    int a = *x;
    *x = *y;
    *y = a;
}

void heap_Sort(int arr[],int n)
{
    int N=n;
    for(int i=1;i<=n;i++)
    {
        build_heap(arr,N);
        swap(&arr[0],&arr[N]);
        N--;
    }
}

void build_heap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}

void heapify(int arr[],int s,int n)
{
    int l = 2*s+1;
    int r = 2*s+2;
    int max = s;

    if((l<=n) && arr[l]>arr[s])
    {
        max = l;
    }
    if((r<=n) && arr[r]>arr[max])
    {
        max = r;
    }

    if(max!=s)
    {
        swap(&arr[s],&arr[max]);
        heapify(arr,max,n);
    }
}
