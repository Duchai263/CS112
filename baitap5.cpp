#include <iostream>
using namespace std;
int main(){
	int sum = 0,i=1,j,k;
	int n;
	cin >>n;
	while(i<=n){
		j=n-i;
		while(j<=2*i){
			sum = sum+i*j;
			j=j+2;
		}
		k=i;
		while(k>0)
		{
			sum = sum+1;
			k=k/2;
		}
		i=i+1;
	}
}
