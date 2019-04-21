#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;//NO of testcases
    while(t--)
    {
        cin>>n;//No of elements in array
        int a[n],left[n],right[n];//left and right array to calculate left and right max for that particular element at that index
        for(int i=0;i<n;i++)
        cin>>a[i];
        left[0]=a[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],a[i]);
        }
        right[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(a[i],right[i+1]);
        }
        int totalWaterCollected = 0;
        for(int i=0;i<n;i++)
        {
            totalWaterCollected = totalWaterCollected+min(left[i],right[i])-a[i];
        }
        cout<<totalWaterCollected<<endl;
    }
}
