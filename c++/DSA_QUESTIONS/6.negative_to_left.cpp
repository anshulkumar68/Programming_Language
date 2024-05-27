// Move all negative numbers to beginning and positive
//  to end with constant extra space
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void shiftall(int arr[], int size)
{
  int left = 0, right = size - 1;
  while (left <= right)
  {
    if (arr[left] < 0)
    {
      left++;
    }
    else if (arr[right] > 0)
    {
      right--;
    }
    else
    {
      swap(arr[left], arr[right]);
    }
  }
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  shiftall(arr, size);
  printArray(arr, size);
  return 0;
}