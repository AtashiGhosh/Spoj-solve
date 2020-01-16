#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n<=1)
	{
		return false;
	}
	if(n<=3)
	{
		return true;
	}
	if(n%2==0||n%3==0)
	{
		return false;
	}
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b;
		cin>>a>>b;
		vector<long>p;
		for(long i=a;i<=b;i++)
		{
			if(isprime(i))
			{
				p.push_back(i);
			}
		}
		for(long i=0;i<p.size();i++)
		{
			cout<<p[i]<<endl;
		}
	}
}
