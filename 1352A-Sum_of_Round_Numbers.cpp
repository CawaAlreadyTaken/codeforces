#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TANTO 1e9
#define poco -1e9

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> output;
		while(n>0) {
			if (!(n%1000)) {
				output.push_back(n);
				n=0;
			} else if (!(n%100)) {
				output.push_back(n%1000);
				n-=(n%1000);
			} else if (!(n%10)) {
				output.push_back(n%100);
				n-=(n%100);
			} else {
				output.push_back(n%10);
				n-=(n%10);
			}
		}
		cout << output.size() << "\n";
		for (int i = 0; i < output.size(); i++) {
			cout << output[i] << " ";
		}
		cout << "\n";
	}
}
