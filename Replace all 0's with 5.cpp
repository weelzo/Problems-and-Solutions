#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}

int convert0To5Rec(int num) 
{ 
    // Base case for recursion termination 
    if (num == 0) 
        return 0; 
  
    // Extraxt the last digit and  
    // change it if needed 
    int digit = num % 10; 
    if (digit == 0) 
        digit = 5; 
  
    // Convert remaining digits and  
    // append the last digit 
    return convert0To5Rec(num/10) *  
                       10 + digit; 
} 
  

int convertFive(int n)
{
if (n == 0) 
    return 5; 
    else return convert0To5Rec(n); 
}
