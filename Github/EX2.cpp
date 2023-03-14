#include <iostream>
using namespace std;

//6
float Alpha(float x,long n){
	long i=1; float z=0;
	while(i<=n) {
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

int main()
{	
    int n, s, i, j, sum, k;
    
	//1
    sum = 0;  				
    i = 1;					
    while (i <= n) {
        j = 1;				
	    while (j <= n)						
	    { 	sum = sum + i*j;
		    j = j + 1;		
	    }
	    i = i + 1;	
    }

    //2
    sum = 0;
    i = 1;
    while (i  <=  n)
    {	j = 1;
	    while (j  <=  i)
	    { 	sum = sum + i*j;
		    j = j + 1;
	    }
	    i = i +1;
    }

    //3
    sum = 0;
    i = 1;
	while(i<=n) {
		j = n-i;
		while(j<=i) {
			sum = sum+j;
			j=j+1;
		}
		i=i+1;
	}

    //4
	s = 0;
	i =1;
	while(i<=n){
        j = 1;
		while(j<=i*i) {
			s = s + 1;
			j = j + 1;
		}
	    i = i + 1;
	}

	//5
	sum = 0;
	i = 1;
	while (i<=n) {
		j = n - i*i;
		while (j<=i*i) {
			sum = sum + i*j;
			j=j+1;
		}
		i=i+1;
	}

	//7
	sum = 0,i=1;
	while(i<=n) {
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