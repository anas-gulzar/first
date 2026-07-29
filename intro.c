#include <stdio.h>
int main () {
char name[20];
int age;
float weight;
char standard[10];
char college_name[30];
printf("what is your name?\n");
scanf("%s",name);
printf("what is your age?\n");
scanf(" %d",&age);
printf("what is your body weight?\n");
scanf("%f",&weight);
printf("what is your standard?\n");
scanf(" %s",standard);
printf("what is your college name?\n");
scanf(" %s",college_name);
printf("My name is: %s\n", name);
printf("My age is: %d\n", age);
printf("My body weight is: %.2f\n", weight);
printf("My standard is: %s\n", standard);
printf("My college name is: %s\n", college_name);
return 0;
}


