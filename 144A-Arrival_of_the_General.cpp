#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
int main() {
	int n; cin >> n;
	int a;
	int m = TANTO;
	int M = poco;
	int indM, indm;
	int ris = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a<=m) {
			m=a;
			indm=i;
		}
		if (a>M) {
			M=a;
			indM=i;
		}
	}
	ris+=indM;
	ris+=(n-indm-1);
	if (indm<indM) ris--;
	cout << ris << "\n";
	return 0;
}
