#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		sort(a,a+n);
		printf("%d\n",a[0]+a[1]);
    }
    return 0;
}

