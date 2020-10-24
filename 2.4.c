#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

char name[50];
void childTask()
{
	printf("Please enter your name:\n");
	scanf("%50s", name);
	printf("Name:%s\n", name);
}

void parentTask()
{
	printf("Job is done\n");
}

int main(void) 
{
	
	for(int i=1; i < 5; i++)
   {
	 pid_t pid = fork();

	if(pid ==0)
	{
		childTask();
		exit(EXIT_SUCCESS);
	}

	
	else 
	{	
		wait(NULL);

			
	}

   }

	parentTask();
	return EXIT_SUCCESS;
	

}


