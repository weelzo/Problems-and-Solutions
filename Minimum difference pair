#include <iostream> 
#include<cmath>
using namespace std; 
  
int main() 
{ 
	 
	 int t,n;
	 cin>>t;
	while(t--)
	{
		int min=100001;
		cin>>n;
		int *a= new int[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i]-a[j])<min)min=abs(a[i]-a[j]);}
		}

		cout<<min<<endl;
	}

	return 0; 
} 
