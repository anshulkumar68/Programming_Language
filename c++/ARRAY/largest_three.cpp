// #include<iostream>
// using namespace std;
// int arr[100], i, n, first, second, third;
// int main()
// {
//     cout<<"Enter number:";
//     cin>>n;
//     if(n<3)
//         cout<<"Invalid output!";
//     for(i=0; i<n; i++)
//         cin>>arr[i];
//     first = arr[0];
//     for(i=0; i<n; i++)
//     {
//         if(arr[i]>first)
//         {
//             third=second;
//             second=first;
//             first=arr[i];
//         }
//         else if(arr[i]>second)
//         {
//             third= second;
//             second=arr[i];
//         }
//         else if(arr[i]>third)
//             third=arr[i];
//     }
//      cout<<"Three largest number:"<<first<<"  "<<second<<"  "<<third;    
// }

#include<iostream>
using namespace std;
int arr[100], i, n, first, second, third;
int three(int arr[100], int n)
{
    first = arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third= second;
            second=arr[i];
        }
        else if(arr[i]>third)
            third=arr[i];
    }
     cout<<"Three largest number:"<<first<<"  "<<second<<"  "<<third;    
}

int main()
{
    cout<<"enter number of elements:";
    cin>>n;
    if(n<3)
        cout<<"Invalid output!";
    // first = arr[0]; 
    for(i=0; i<n; i++)
        cin>>arr[i];
    three(arr,3);
    return 0;
}