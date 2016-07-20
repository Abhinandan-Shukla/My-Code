#include <stdio.h>
#include <math.h>

void swap(int *a,int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int leftChild(i)
{
    return 2*i+1;
}

int rightChild(i)
{
    return 2*i+2;
}

int parent(i)
{
    return (i-1)/2;
}

void fixHeap(int *a, int i, int heapSize)
{
    int min=i;
    if(leftChild(i)<heapSize && a[leftChild(i)]<a[i])
        min=leftChild(i);
    if(rightChild(i)<heapSize && a[rightChild(i)]<a[min])
        min=rightChild(i);
    if(min!=i)
    {
        swap(a,min,i);
        fixHeap(a,min,heapSize);
    }
}

void buildHeap(int *a,int n)
{
    int i;
    for(i=parent(n);i>=0;i--)
        fixHeap(a,i,n);
}

void deleteMinElement(int *a ,int heapSize)
{
    a[0]=a[heapSize-1];
    fixHeap(a,0,heapSize-1);
}

void insertElement(int *a,int heapSize, int x)
{
    a[heapSize]=x;
    heapSize+=1;
    int i=heapSize-1;
    while(i>0 && a[i]<a[parent(i)])
    {
        swap(a,i,parent(i));
        i=parent(i);
    }
}






