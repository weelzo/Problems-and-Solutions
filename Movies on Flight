
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int  main()
{

	int t,n,x,c;
	cin>>t;
	while (t!=0)
	{
		c=0;
		cin>>n>>x;
	int *a = new int[n];
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

		
		int l=0,r=n-1,f=0,s=0,sum=0;
		while(l<r)
		{
			if (a[l]+a[r]<= (x-30))
				{
					if(a[l]+a[r]>sum)
					{
						f=a[l];
						s=a[r];
						sum= a[l]+a[r];
					}
		    	}
			else if (a[l]+a[r]> (x-30))r--;
			 l++;
		}


		cout<<f<<" "<<s<<endl;

	t--;
	}

	return 0;
}
