
/* ----------------------------------------------------------------- -----*/
/*  This program runs two processes, a parent and a child.               */
/*	The use of wait system call guarantees the child process will print */
/* 	its message before the parent proces                               */
/* ------------------------------------------------------------------ */

#include<stdio.h>
#include<sys/wait.h> /* Contains prototype for wait */
#include<stdlib.h>
#include<unistd.h>  /* contains prototype for fork */
int main(void)
{
	int pid;
	int status;
	printf("Hello World!\n");
	pid = fork( ); // creates a child process
	if (pid == -1) /* check for error in fork */
	{
		perror("bad fork");
		exit(1);
	}


	if (pid == 0){   // PID==0 --> child process 
		printf("I am the child process.\n");
		printf("PID = %d\n",getpid()); // gets processs id  of child process
	}
	else{
			wait(&status); /* parent waits for child to finish */
			printf("I am the parent process.\n");
		}

	return 0;
}
