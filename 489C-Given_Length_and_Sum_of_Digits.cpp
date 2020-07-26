#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int m, s; cin >> m >> s;
	string poco = "1";
	string tanto = "";
	if (m==1) {
		if (s<10) cout << s << " " << s << "\n";
		else cout << "-1 -1" << "\n";
		return 0;
	}
 
	if (s==0||s>9*m) {
		cout << "-1 -1" << "\n";
		return 0;
	}
	
	int rimanenteP = s-1;
	for (int i = 1; i < m; i++) {
		poco+="0";
	}
	int t = m;
	if (s==1) {
		cout << poco << " " << poco << "\n";
		return 0;
	}
	while(--t>0&&rimanenteP>0) {
		if (rimanenteP<10) {
			poco[t]=(char)(rimanenteP+48);
			rimanenteP=0;
		}
		else {
			poco[t]='9';
			rimanenteP-=9;	
		}
	}
	if (rimanenteP>0) poco[0]=(char)(rimanenteP+49);
	for (int i = poco.length()-1; i>=0; i--) {
		tanto+=poco[i];
	}
	if (poco[0]=='1'&&poco[1]!='9'){
		int ultimoI;
		for (int i = 0; i < poco.length(); i++) {
			if (tanto[i]!='9') {
				ultimoI = i;
				break;
			}
		}
		if (poco[poco.length()-1]!='0') {
			tanto[ultimoI]++;	
			tanto[tanto.length()-1]='0';
		}
	}
	cout << poco << " " << tanto << "\n";
	return 0;
}
