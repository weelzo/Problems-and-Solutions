#include<iostream>
#include<algorithm>

using namespace std;

int  main()
{

	int t,n,x;
	cin>>t;
	while (t!=0)
	{

		cin>>n>>x;
	int *a = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	for(int i=n-1;i>n-1-x;i--)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	t--;
	}

	return 0;

}
