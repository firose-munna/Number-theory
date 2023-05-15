#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    	int x = a, y = b;

    	if(y == 0)
       		return x;
    	else
        		return gcd(y, x%y);}

int main()
{
    	int n, m;
    	cin>>n>>m;

    	int r = gcd(n, m);
    	cout<<r<<endl;
    	return 0;
}

