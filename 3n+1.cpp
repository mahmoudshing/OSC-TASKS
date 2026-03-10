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
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << endl;
	}
	else {
		int length = 1;
		while (n != 1) {
			if (n % 2 == 0) {
				n = n / 2;
			}
			else
				n = (n * 3) + 1;
			length++;
		}
		cout << length;
	}
	system("pause");
	return 0;
}