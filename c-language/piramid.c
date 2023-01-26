#include<stdio.h>
void main(){
    int i,j,k,l,num;
    printf("Enter the row\n");
    scanf("%d",&num);
    k=num;
    for(i=num;i<=num;i++){
        if(num%2 !=0)
        printf("\n");
        for(j=num;j>=1;j--)
        {
            if(j>k)
            printf("  ");
            else
             printf("%d",j);
                }
                for(j=j+num;j<=num;j++)
{
    if(j>k)
    printf("  ");
    else
    printf("%d",j)
}
k--;
if(num%2 == 0){
printf("\n");
 }
 k=1;
 for(i=1;i<=num;i++){
    for(j=num;j>=1;j--){
        if(num%2 !=0 && i == 1)
          continue;
          if(j>k)
          printf("  ");
    }
     }
    }
return;
}
