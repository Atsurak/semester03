//  code for assignment 4
//  Created by Bibhas Ghoshal on 26/08/20.
// we use the wait system call to make the child finish before the parent process starts

#include <stdio.h>
#include <unistd.h>

#define ITR 100000

int main()
{
    int i,j,pid;
    
    pid = fork();
    
    if( pid == 0 ){
        
        for ( i=0;i<20;i++){
           for (j=0;j<ITR;j++);
           printf("Child:%d\n",i);
           
            
        }
        
    }
    else{
        
        for ( i=0;i<20;i++){
            for (j=0;j<ITR;j++);
            wait(NULL); // waits for the child process to complete
            printf("Parent:%d\n",i);
            
        }
    }
    
}
