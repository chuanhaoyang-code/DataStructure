#include<stdio.h>
#define count 5
void monkey(){
    int sum=0;
    int monkey[count];
    int i=0;
    for(int i=0;i<count;i++){
        monkey[i]=1;
    }
    int cet=count;
    int j=0;
    while(1){
        if(monkey[j]==1 && sum==3){
            sum=0;
            monkey[j]=0;
            cet--;
        }else if(sum < 3){
          sum++;
        }
        if(cet==1){
            for(int i=0;i<count;i++){
                if(monkey[i]==1){
                    printf("%d",i+1);
                }
            }
            break;
        }
        j++;
        j=j%count;
    }


}
void main(){
    monkey();
}