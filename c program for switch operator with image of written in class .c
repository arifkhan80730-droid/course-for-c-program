#include<stdio.h>
int main(){
int n;
printf("enter the period:");
scanf("%d",&n);
switch(n){
    case 1:printf("computational mathematics\n timings7:15 to 8:15\n");
    break;
    case 2:printf("c programming\ntimings 9:15 to 10:15");
    break;
    case 3:printf("physics\ntimings 11:15 to 12:15");
    break;
    default:printf("there is no class at this period of time");
}return 0;



}
