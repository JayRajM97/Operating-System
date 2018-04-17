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


}//switchends

}//while ends

}//program ends

