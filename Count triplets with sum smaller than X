#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int three_sum(int a[], int n, int x)
{
	sort(a,a+n);

	int c=0;

	for(int i=0;i<n-2;i++)
	{
		int j=i+1, k=n-1;

		while(j<k)
		{

			if (a[i] + a[j] + a[k] >= x) 
                k--;
			else 
			{
				c += (k - j); 
                j++; 
			}

		}
		
	}

	return c;
	
}

int  main()
{

	int t,n,x,c;
	cin>>t;
	while (t!=0)
	{
		c=0;
		cin>>n>>x;
	int *a = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		c=three_sum(a,n,x);
	

	cout<<c<<endl;
	t--;
	}

	return 0;
}
