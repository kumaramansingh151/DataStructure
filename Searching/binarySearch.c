#include<stdio.h>
#include<conio.h>

int binarySearch(int[],int,int,int);

int main()
{
    int c,first,last,n,search,array[100],index;
    
    printf("Enter number of the elements:\n");
    scanf("%d",&n);
    
    printf("Enter %dintegers\n",n);
    
    for(c=0;c<n;c++)
       scanf("%d",&array[c]);
       
    printf("Enter value to find\n");
    scanf("%d",&search);
    
    first=0;
    last=n-1;
    
    index = binarySearch(array,first,last,search);
    
    if(index==-1)
      printf("Not found!%disn't present in the list.\n",search);
      else
          printf("%d is present as location%d.\n",search,index+1);
          
    getch();      
    return 0;
}

int binarySearch(int a[],int s,int e,int f)
{
    int m;
    
    if(s>e)
    return -1;
    
    m=(s+e)/2;
    
    if(a[m]==f)
    return m;
    
    else if(f>a[m])
         return binarySearch(a,m+1,e,f);
         else
             return binarySearch(a,s,m-1,f);
}
