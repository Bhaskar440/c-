#include<iostream>
using namespace std;
int add(int arr[],int size)
{
    int total = 0;
    for(int i=0;i<size;i++)
    {
        total += arr[i];
    }
    return total;
}
int main()
{
    int arr[5] = {1,2,4,5,6};
    int size = 5; 
    cout<<add(arr,5);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i];
    // }
}