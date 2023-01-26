#include<stdio.h>
main()
{
    char a[200];
    int i,l;
    printf("Enter the string number");
    scanf("%d",&a);
       i = 0;
       while(a[l]!='\0')
       {
        l++;
}
      l=i-1;
      i=0;
      while(i<l)
      {
        if(a[i]!=a[l])
        {
            f=1;
            break;
        }
        i++;
        i--;
      }
      if(f==0){
            printf("palindrome number")
        else
            printf("Not a palindrome number")
            }
        return 0;
        }