#include<pthread.h>
#include<stdio.h>
int numTH = 1; 
int inpt;
void *runner(void *param);
int main(int argc, char *argv[]) {
    pthread_t tid;  
    pthread_attr_t attr;
    int i;
    int x = (8%5)+1;
    int inpt = atoi(argv[1]);
    printf("hi this thread mmain");
    for(i=0 ; i<x ; i++){
        pthread_attr_init(&attr);
        pthread_create(&tid,&attr,runner,NULL);
        pthread_join(tid,NULL);  
    }
    
    printf("good bye");
}
void *runner(void *param) {
     int s[inpt];
     int i;
     s[0]=s[1]=1;
     s[2]=s[3]=2;
     numTH++;
     for(i=0;i<inpt;i++){
         if(i>3){
             if(i%3 ==0)
                s[i]=s[i-1];
             else
                s[i]=((s[i-1]+s[i-2])-1);
             printf("%d",s[i]);
         }
         else{
             printf("%d",s[i]);
         }
     }
        printf("\n");
    pthread_exit(0);

}