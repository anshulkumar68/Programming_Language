#include<bits/stdc++.h>
using namespace std;
// print row-wise sum
void rowsum(int arr[][2])
{
     for(int i=0; i<3; i++){
        int sum=0; 
        for(int j=0; j<2; j++){
          sum+=arr[i][j]; 
        }
        cout<<"Sum of "<<i+1<<" row: "<<sum<<endl;
    }
}
// find maximum row-wise sum
void max(int arr[][2])
{
    int max=0, rowIndex, sum;
    for(int i=0; i<3; i++){
        sum=0; 5 8 2 12 30 6 
        for(int j=0; j<2; j++){
            sum+=arr[i][j]; 
            if(max<sum){
                max=sum;
                rowIndex=i+1;
            }
        }
    }
    cout<<"Maximum sum "<<max<<" occured at "<<rowIndex<<" row";
    // return max;
}
int main()
{
    int r, c;
    int arr[3][2]= {{2,9},{8,1},{10,3}};
    cout<<"enter array of elements: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    rowsum(arr);
    max(arr);
    return 0;
}