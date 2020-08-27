/* here after each read operation from file the fptr moves to a new line*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){

	FILE *fptr=fopen("my_file.txt","r");
	
    int pid;
	pid=fork();

	if(pid==0){
		char str[100];
		fgets(str,1000,fptr);
		printf("%s",str);
	}
	else{
		wait(NULL);
		
		pid=fork();

		if(pid==0){
			char str[100];
			fgets(str,1000,fptr);
			printf("%s",str);
		}
		else{
			wait(NULL);
			
			pid=fork();

		        if(pid==0){

			    char str[100];
			    fgets(str,1000,fptr);
			    printf("%s",str);
		        }
		        else{ 

			    wait(NULL);
			
			    pid=fork();

		            if(pid==0){

			        char str[100];
			        fgets(str,1000,fptr);
			        printf("%s",str);
		            }
		            else{

			        wait(NULL);
			
		        }

		   }
		}
	}
	return 0;
}