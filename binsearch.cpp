#include "binsearch.h"
#include <iostream>

using namespace std;

int BinarySearch::search(int data[],int low,int high,int key)
{
    int mid;
    if (low<=high)
    {
        mid=(high+low)/2;
        if (key<data[mid])
            return search(data,low,mid-1,key);
        else if (key>data[mid])
            return search(data,mid+1,high,key);
        return mid;
    }
    return -1;
}
