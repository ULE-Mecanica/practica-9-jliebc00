#include <stdio.h>
#include <stdlib.h>

int main()
   {
   int n;
   int *v;
   int i;
   int min;
   printf("dame un numero  \n");
   scanf("%d",&n);
    

 v=(int*) malloc (n* sizeof(int));


      for (i=0;i<=n;i++)
      {

       printf("dame el numero del vector \n");
       scanf("%d",&*(v+i));
   
      }
     min=*(v+0);


for (i=1;i<n;i++)
   { 
if(*(v+i)<min);
    
  } 

     

printf("%d",min);


free(v);

return 0;
}

