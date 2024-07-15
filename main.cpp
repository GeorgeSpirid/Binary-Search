#include <iostream>
#include "binsearch.h"

using namespace std;

int main()
{
    int key;
    cin>>key;
    int data[10]={1,2,3,4,5,6,7,8,9,10};
    BinarySearch bs;
    int pos=bs.search(data,0,9,key);
    if (pos==-1)
        cout<<endl<<"Key not found...";
    else
        cout<<"Position: "<<pos<<endl;
    return 0;
}
