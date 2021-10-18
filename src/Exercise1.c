/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex1(int arr[], int n)
{
	//Your codes here
	int i,j;
	int check=1;
	for (i=0,j = n-1;i<n;i++,j--)
	{ 
		if(arr[i]==arr[j])
	      return check;
	}
    if (check!=1)
	printf("asymmetric");
	else
	printf("symmetric");
	return 0;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex1(testcase, argc);
	
	return 0;
}
