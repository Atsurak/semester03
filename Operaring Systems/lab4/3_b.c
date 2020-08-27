//  code for assignment 4
//  Created by Bibhas Ghoshal on 26/08/20.
/*When both for loops are commented the parent process doesn't wait 
 for the child process to finish it's execution*/
#include <stdio.h>
#include <unistd.h>

#define ITR 100000

int main()
{
    int i,j,pid;
    
    pid = fork();
    
    if( pid == 0 ){
        
        for ( i=0;i<20;i++){
           //for (j=0;j<ITR;j++);
           printf("Child:%d\n",i);
        
            
        }
        
    }
    else{
        
        for ( i=0;i<20;i++){
            //for (j=0;j<ITR;j++);
            printf("Parent:%d\n",i);
            
        }
    }
    
}
