#include<stdio.h>

int main( )
{

   FILE **fp;
   char **fname;
   int i=0,j=0,n;
   printf("Enter number of Nodes:");
   scanf("%d",&n);

   int **a = (int *) malloc(sizeof(int *) * n);
  
   fname = (char **)malloc(sizeof(char *) * n);

   for(i=0;i<n;i++)
   {
      printf("Enter file %d name :",i+1);
      scanf("%s",fname[i]);
   }

    fp = (FILE **) malloc(sizeof(FILE *) * n);

   printf("Enter the graph representation values as input to array:");
   
   for(i=0;i<n;i++)
   {
       printf("Enter the nodes directly connected to node %d with cost metric\n",i+1); 	
       
       for(j=0;j<n;j++)
       {
        scanf("%d",&a[i][j]);
       }

   }

   for(i=0; i<n; i++)
   {

     FILE *fp[i] = fopen(fname[i],"r+");
     if(fp[i] == NULL)
     {
        perror("Failed to open file: %s",fname[i] );
        return 0;
     }
     
     for(j=0; i<n;j++)
     {

     } 

   }

}
