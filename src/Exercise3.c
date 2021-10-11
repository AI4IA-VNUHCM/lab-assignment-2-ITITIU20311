/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int n ;
	n=testcase; 
	int i;
	i=2;
	while(n!=i)
	{
		if(n%i==0)
		{
			printf(" %d *",i);
			n=n/i;
		}
		else
		{
			i=i+1;
		}
	}
	printf(" %d",i);
	return 0;
}
