#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	int n;
	scanf("%d",&n);
	if ( n <= 0 ) {
		printf("Enter a positive integer\n");
		exit(-1);
	}

	
}

