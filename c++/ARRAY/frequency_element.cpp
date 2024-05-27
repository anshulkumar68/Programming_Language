// Count frequency of each element in array
#include<iostream>
#include<vector>
using namespace std;
void freq(int arr[], int n){
     // Mark all array elements as not visited
    vector<bool> visited(n, false);
    // Traverse through array elements and
    // count frequencies
    for(int i=0; i<n; i++){
        // Skip this element if already processed
        if(visited[i]==true)
            continue;
        // Count frequency
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" --> "<<count<<endl;
    }
}
int main(){
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++) cin>>arr[i];

    freq(arr, n);
}