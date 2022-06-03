/* Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3 */


#include <bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) 
   { 
     
       sort(arr,arr+n);
       int min=1;
       for(int i=0;i<n;i++)
       {
        if(arr[i]==min)
           min++;
       }
      
       return min;
   }

int main()
{
    int arr[] = { 3, 4, -1, 1 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, arr_size);
    cout << "The smallest positive missing number is " << missing;
    return 0;
}