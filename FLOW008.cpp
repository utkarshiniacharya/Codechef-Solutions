#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;
		if(n<10)
		cout<<"What an obedient servant you are!"<<endl;
		else
		cout<<"-1"<<endl;
	}
	return 0;
}
