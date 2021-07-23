#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
        int y=atoi(argv[1]);
        int s[y];
        int i=0;
        s[0]=s[1]=1;
        s[2]=s[3]=2;
        int x=(((8%5)+1));
        for(i=0;i<4;i++){
        pid_t pid;
        pid = fork();
        if(pid < 0) {
        fprintf(stderr,"Fork Failed");
        exit(-1);
        }
        else if(pid == 0) {
        printf("Child ID : %d :",getpid());
        for(i=0;i<y;i++){
                if(i > 3){
                  if(i % 3 == 0)
                  s[i]=s[i-1];
                  else
                  s[i]=((s[i-1]+s[i-2])-1);
                  printf(" %d",s[i]);
        }
                else{
                printf(" %d",s[i]);
        }
}
    printf("\n");
}
        else{
                printf("My Process id : %d, Parent Process id : %d\n",pid,getpid());
                wait(NULL);
}
}
  if(i==x)
  printf("goodbye");
  exit(0);
}