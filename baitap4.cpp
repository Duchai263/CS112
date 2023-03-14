#include <iostream>
using namespace std;
float Alpha(float x,long n){
	long i=1;float z=0;
	while(i<=n){
		long j=1;float t=1;
		while(j<=i)
		{
			t=t*x;
			j=2*j;
		}
		z = z+i*t;
		i++;
	}
	return z;
}
int main(){
	float x;long n;
	cin >> x >> n;
	float a = Alpha(x,n);
}
