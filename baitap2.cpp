#include <iostream>
using namespace std;
int main()
{	int n;
	cin >> n;
	int s = 0;
	int i =1;
	while(i<=n){
    int j = 1;
		while(j<=i*i) {
			s = s +1;
			j = j+1;
		}
	i = i+1;
	}
}
