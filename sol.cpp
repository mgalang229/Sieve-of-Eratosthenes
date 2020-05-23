#include <bits/stdc++.h>

using namespace std;

void sieve(int n){
	bool p[n+1];
	memset(p, true, sizeof(p));
	for(int i = 2; i*i <= n; i++){
		if(p[i] == true){
			for(int j = i*i; j <= n; j += i){
				p[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(p[i]){
			cout << i << " ";
		}
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num;
	cin >> num;
	sieve(num);
	return 0;
}
