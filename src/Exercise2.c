/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Increse(int A[], int n)
{
    for (int i = 0; i < n / 2 - 1; i++)
        for (int j = i + 1; j < n / 2; j++)
            if (A[i] > A[j])
            {
                int temp;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
}
void Decrese(int A[], int n)
{
    for (int i = n / 2; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] < A[j])
            {
                int temp;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
}
void Kiemtra(int a[],int n)
{
    int odd[100],even[100];
    int h=0,k=0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            odd[h] = a[i];
            h++;
        }
        else {
            even[k] = a[i];
            k++;
        }
    }
    Increse(even,k);
    Decrese(odd, h);
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            a[i] = odd[h];
            h++;
        }
        else {
            a[i] = even[k];
            k++;
        }
    }
   
}
void Ex2(int arr[], int n){
	//Your codes here
	
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	Kiemtra(testcase, argc);
	for (int i =0;i<argc-1;i++ )
	printf("%d",testcase[i]);
	//Ex2(testcase, argc);
	
	return 0;
}
