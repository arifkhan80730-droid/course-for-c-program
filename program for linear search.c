#include <stdio.h>
int main()
{
   int arr[]={10,23,35,47,59};
   int n = 5;
   int key ,i,found=0;
   printf("enter the element to search:");
   scanf("%d",&key);
   for (i=0;i<n;i++){
    if(arr[i]==key){
        printf("enter %d found at position %d.\n",key,i+1);
        found=1;
        break;
    }
   }
   if(found)
    printf("element not found.\n");
   return 0;
}
