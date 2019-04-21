#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>target;
    sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==target)
                {
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
    }

	return 0;
}

/*
INPUT IS
9//number of elements
5
7
9
1
2
4
6
8
3
10//target sum

output
1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
*/
