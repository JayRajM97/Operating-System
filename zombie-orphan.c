//Write a C program to create two zombie processes and two orphan processes using system calls.

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
int n;
while(1)
{
printf("\n\nEnter choice: \n1.Zombie Process \n2.Orphan Process \n\n");
scanf("%d",&n);
switch(n)
{
case 1:
// Zombie Process
for(int i = 0; i < 2 ; i++)
{
	int pid_t = fork();
	if(pid_t>0){
		sleep(5);
		printf("\nPP Created \n");
	}
	else
	{
		printf("PP id is %d \n",getppid());
		exit(0);
	}
	return 0;
}
break;

case 2:
// Orphan Process
for(int i = 0; i < 2; i++)
{
	int pid_t2 = fork();
	if(pid_t2 > 0)
	{
		printf("\nParent Process");
	}
	else if(pid_t2 == 0)
	{
		sleep(5);
		printf("\nChild Process");
		printf("Parent Process ID is %d \n",getppid());
	}
}
break;
}//switchends

}//while ends

}//program ends

