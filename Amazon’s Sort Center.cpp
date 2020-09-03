#include <iostream> 
#include <limits> 
#include <vector> 

using namespace std; 

vector<int> getresult (vector <int>vv, int tt)
{
	int l=0, r=vv.size()-1;
	int sum=0, f, s;
	vector<int> result;
	while(l<r)
	{
		if((vv[l]+vv[r]==tt-30)&& (vv[l]+vv[r])>sum)
		{
			f=l;
			s=r;
			sum = vv[l]+vv[r];
		}
		else if (vv[l]+vv[r]>tt-30) r--;
		else l++;
	}

	result.push_back(f);
	result.push_back(l);

	return result;

}

int main() 
{ 

	int x,t,n,in;

		cin>>t>>n;
	vector<int>v;
	vector<int>vr;



	for(int i=0; i<n;i++)
	{
		cin>>in;
		v.push_back(in);
	}

	//cout<<v.size()<<endl;

	/*for (int i = 0; i < v.size(); i++) {
		cout << v.at(i) << ' ';
	}*/

	vr=getresult(v,t);



	cout<<vr[0]<<" "<<vr[1]<<endl;

return 0; 
} 
