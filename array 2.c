#include<stdio.h>
int main(){
    int i ,sum=0;
    int a[3];
    for(i=0;i<3;i++){
            scanf("%d",a[i]);
        printf("elements-i:%d\n",a[i]);

        sum=sum+a[i];
    }
    printf("sum of all numbers of array:%d",sum);
return 0;
}
