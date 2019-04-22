#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j){
				int temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] =temp;
			}
		}
	}
	int f,k;
	//anti_clock wise rotation reverse the col
	//clockwise rotation reverse the row
	for(int j=0;j<n;j++){
		f=0;
		k=n-1;
		while(f<=k)
		{
			int t = a[f][j];
			a[f][j] = a[k][j];
			a[k][j]=t;
			f++;
			k--;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}

/*

input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

output
4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13

*/
