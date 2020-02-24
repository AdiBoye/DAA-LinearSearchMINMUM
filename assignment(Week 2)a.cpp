#include<stdio.h>
int linSearch(int [], int, int);

int main(void)
{
int t[20],number,c;
int i,index=0;
printf("\nEnter the size of the array\n");
scanf("%d",&number);
printf("\nEnter the elements of the array:\n");
for(i=0;i<number;i++)
scanf("%d",&t[i]);
printf("\nenter the key element\n");
scanf("%d",&c);
index=linSearch(t,c,number);
if(index==-1)
printf("\nElement not found\n");
else
printf("\nElement found at position %d\n",index);
return 0;
}

int linSearch(int z[], int k, int d)
{
if( d ==0)
return -1;
else if( k == z[d-1])
return d;
else
return linSearch(z,k,d-1);
}
