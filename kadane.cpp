#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int cs=a[0],max=a[0];
    for(int i=1;i<n;i++)
    {
        if(cs+a[i]>a[i])
        {
            cs=cs+a[i];
        }
        else
        {
            cs=a[i];
        }
        max=max>cs?max:cs;
    }
    cout<<max;
}
/*
maximum sum contiguos subbaray sum
for eg
8 //n nof elements in array
-2
-3
4
-1
-2
1
5
-3
// 7 ans 4 -1 -2 1 5

4//n
-2
-3
-1
-2
// -1 ans
