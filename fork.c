#include<stdio.h>
#include<unistd.h>
void main(){
pid_t pid;
pid=fork();
if(pid==0){
printf("It is child process\n");
printf("Child Process Id is %d\n",getpid());
}
else if(pid>0) {
printf("It is Parent process\n");
printf("parent process id is %d\n",getppid());
}
else{
printf("Fork failed");
}
}


