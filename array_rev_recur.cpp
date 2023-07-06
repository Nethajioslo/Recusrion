/// Array reversing using recursion
#include<iostream>
void arr_rec(int i,int arr[],int n)
{
    if(i>=n/2)
    return;
    else
    {
        std::swap(arr[i],arr[n-i-1]);
        arr_rec(i+1,arr,n);
    }


}
int main()
{
    int arr[5]={1,2,3,4,5};
    arr_rec(0,arr,5);
    for(int i=0;i<5;i++)
    std::cout<<arr[i]<<" ";
    std::cout<<"\n";
}