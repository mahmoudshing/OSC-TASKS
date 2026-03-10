#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<climits>
#include<vector>
# define ll long long
using namespace std;
void sum(int a,int b) {
	ll sum = 0;
	for (int i = min(a, b);i <= max(a, b);i++) {
		sum += i;
	}
	cout << sum << endl;
}
void sume(int a, int b) {
	ll sum = 0;
	for (int i = min(a, b);i <= max(a, b);i++) {
		if(i%2==0)
		sum += i;
	}
	cout << sum << endl;
}
void sumo(int a, int b) {
	ll sum = 0;
	for (int i = min(a, b);i <= max(a, b);i++) {
		if (i % 2 == 0)
			continue;
		sum += i;
	}
	cout << sum << endl;
}
int main(){
	ll a, b;
	cin >> a >> b;
	sum(a, b);
	sume(a, b);
	sumo(a, b);
	system("pause");
	return 0;
}