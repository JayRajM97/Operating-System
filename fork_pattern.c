/*Question 1 : Write a C program using the fork() system call that generates this sequence in the child
process. The starting number will be provided from the user. For example, if 8 is passed
as a parameter on the command line, the child process will output 8, 4, 2, 1. Because the
parent and child processes have their own copies of the data, it will be necessary for the
child to output the sequence. Have the parent invoke the wait() call to wait for the child
process to complete before exiting the program. Perform necessary error checking to
ensure that a positive integer is passed on the command line. */



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

