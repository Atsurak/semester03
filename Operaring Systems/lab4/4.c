#include<stdio.h>
int main(){
    int a;
    while(1){
        printf ("Varaible Address : %p\n",&a);
    }
    return 0;
}
/* Four copies of the same program when executed simultaneously
   printed same address values as if each running program has its
   own private memory instead of sharing same physical memory with other
   running programs. This is called Memory Virtualization */