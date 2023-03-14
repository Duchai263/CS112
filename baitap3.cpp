#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	int i = 1;
	int j,n;
	cin >> n;
	while(i<=n){
		j = n-i*i;
		while(j<=i*i){
			sum = sum +i*j;
			j=j+1;
			}
			i=i+1;
			}
			}
