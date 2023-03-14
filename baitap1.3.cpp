#include <iostream>
using namespace std;
int main(){
	int sum = 0,j,i=1,n;
	cin >>n;
	while(i<=n){
		j = n-i;
		while(j<=i){
			sum = sum+j;
			j=j+1;
		}
		i=i+1;
	}
}
