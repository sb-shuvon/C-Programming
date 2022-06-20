
// Searching an item (Liner Search)

#include<stdio.h>
int main()
{
      int num[]={10,2,30,15,28,5};
      int value,pos= -1,i;

      printf("Enter the value you want to search: ");
      scanf("%d",&value);

      for(i=0; i<6; i++)
      {

          if(value == num[i])
          {
              pos= i+1;
              break;
          }

      }
      if(pos == -1)
        printf("Not Found");
      else
        printf("The position of %d Value %d\n",pos,value);


    getch();
}
