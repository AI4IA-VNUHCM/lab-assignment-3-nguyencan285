/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int testcase[], int n)
{
	//Your codes here
	int i,j;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if (testcase[j]>testcase[i])
	{
		int temp;
		temp=testcase[i];
		testcase[i] =testcase[j];
		testcase[j]=temp;
	}
	for (i=0;i<n;i++)
	printf("%d ",testcase[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
