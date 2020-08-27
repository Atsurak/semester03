//  code for assignment 4
//  Created by Bibhas Ghoshal on 26/08/20.
#include <stdio.h>
#include <unistd.h>

#define ITR 100000

int main()
{
    int i,j,pid;
    
    pid = fork(); // creates two processes parent and child
    
    if( pid == 0 ){
        
        for ( i=0;i<20;i++){
           for (j=0;j<ITR;j++); // takes cpu time and makes the process wait
           printf("Child:%d\n",i);
           
            
        }
        
    }
    else{
        
        for ( i=0;i<20;i++){
            for (j=0;j<ITR;j++); // takes cpu time and makes the process wait 
            printf("Parent:%d\n",i);
            
        }
    }
    
}
