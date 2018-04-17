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

	pid_t ch = fork();

	if(ch == 0) {
		while(n > 0) {
			printf("  %d  ", n);
			n /= 2;
		}
		printf("\n");
		exit(0);
	}
	wait(NULL);
	return 0;
}

