#include<bits/stdc++.h>
int bin_recu(int arr[], int tar, int h, int l)
{
    if (l > h)
        return -1;
    else
    {
        int mid = (l + h) / 2;
        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] > tar)
        {
            return bin_recu(arr, tar, mid - 1, l);
        }
        else
        {
            return bin_recu(arr, tar, h, mid + 1);
        }
    }
}
int main()
{
    int arr[10] = {23, 56, 89, 90, 103, 309, 349, 467, 899, 2038};
    int tar = 4670;
    int mmi = bin_recu(arr, tar, 10, 0);
    std::cout << mmi << "\n";
}