// print 2d array in wave form
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    int arr[3][2]= {{2,9},{8,1},{10,3}};
    cout<<"Enter number of row: ";
    cin>>r;
    cout<<"Enter number of col: ";
    cin>>c;
    cout<<"enter array of elements: ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0; j<c; j++){
        // for printing array from top to bottom
        if(j%2==0){
            for(int i=0; i<r; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        // for printing from bottom to top
        else{
            for(int i=r-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
        } 
    }
    }
    return 0;
}