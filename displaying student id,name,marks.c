#include <stdio.h>
struct student{
    int id;
    char name [20];
    float marks;
};
int main (){
struct student s1={101,"priya",89.5};
printf("ID:%d\n",s1.ID);
printf("NAME:%s\n,s1".NAME);
printf("MARKS:%.2f\n",s1.MARKS);
return 0;
}
