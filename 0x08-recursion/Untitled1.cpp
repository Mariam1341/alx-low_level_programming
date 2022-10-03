#include <bits/stdc++.h>
using namespace std;
const int AKA=5e5+5;
double arr[AKA];
int main()
{
	int a, b, c;
	double r1, p1, A, B, p2;
	
	cin>>a;
	for(int i = 0; i < a; i++)
		cin>>arr[i];
	sort(arr, arr + a);
	r1 = arr[a - 1];
	
	cin>>a;
	for(int i = 0; i < a; i++)
		cin>>arr[i];
	sort(arr, arr + a);
	p1 = arr[a - 1];
	
	cin>>a;
	for(int i = 0; i < a; i++)
		cin>>arr[i];
	sort(arr, arr + a);
	p2 = arr[0];
	
	cin>>A>>B;
	double ans = ((double) B * p1 * r1 * r1) / ((double) A * p2 + B * p1);
	cout<<fixed<<setprecision(8)<<sqrt(ans);

}
