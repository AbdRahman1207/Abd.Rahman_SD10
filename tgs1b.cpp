#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp =*yp;
    *yp =temp;
}
void selectionSort(int arr[0],int n)
{
    int i,j,min_idx;

    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_idx])
            min_idx=j;
        swap(&arr[min_idx],&arr[i]);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int z;
    cout<<"SELECTION SORTING---Ascending"
    cout<<"Masukkan panjang nilai : ";
    cin>>z;

    int arr[z];
    int i;
    for(i=0;i<z;i++)
    {
        cout<<" Masukkan Nilai ["<<i<<"]: ";
        cin>>arr[i];
    }
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Sorted array: \n";
    printArray(arr,n);
    return 0;
}

