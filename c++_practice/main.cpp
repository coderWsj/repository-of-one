#include <algorithm>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
   int a,b,m,n,j,j1;
   int i=0;
   int k[7];
   while(~scanf("%d%d",&a,&b))
   {
	if(a>=0)
	cout<<0<<a/64%2<<a/32%2<<a/16%2<<a/8%2<<a/4%2<<a/2%2<<a%2;
	if(a<0)
	{
		a=-a;
		m=1;
		for(int j=6;j>=0;j--)
		{
			k[j]=!(a/m%2);
			m<<=1;
		}
		n=5;
		k[6]=k[6]+1;
		if(k[6]==2)
		{
			while(n>=0 && k[n]!=0)
			{
				k[n]=0;
				n--;
			}
			if(n!=-1)
			k[n]=1;
			k[6]=0;
		}
		cout<<1;
		for(int j1=0;j1<=6;j1++)
			cout<<k[j1];
	}
	if(b>=0)
	cout<<0<<b/64%2<<b/32%2<<b/16%2<<b/8%2<<b/4%2<<b/2%2<<b%2<<endl;
	if(b<0)
	{
		b=-b;
		m=1;
		for(j=6;j>=0;j--)
		{
			k[j]=!(b/m%2);
			m<<=1;
		}
		n=5;
		k[6]=k[6]+1;
		if(k[6]==2)
		{
			while(n>=0 && k[n]!=0)
			{
				k[n]=0;
				n--;
			}
			if(n!=-1)
			k[n]=1;
			k[6]=0;
		}
		cout<<1;
		for(j1=0;j1<=6;j1++)
			cout<<k[j1];
		cout<<endl;
	}
	i++;
	if(i%16==0)
		cout<<endl;
   }
	return 0;
}
