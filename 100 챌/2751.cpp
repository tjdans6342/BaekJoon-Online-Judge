#include <bits/stdc++.h>

using namespace std;

int check[2000001];

int main()
{
	int n;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		check[a+1000000]++;
	}	

	for(int i=0;i<2000001;i++)
		if(check[i]==1) printf("%d\n",i-1000000);


		

	return 0;
}