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

int main(){
	ll x;
	cin >> x;
	ll count = 0;
	for (ll i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			if (i * i == x)
				count += 1;  
			else
				count += 2; 
		}
	}

	if (count % 2 == 0) {
		cout << "NO" << endl;
	}
	else
		cout << "YES";
	system("pause");
	return 0;
}