 #include<stdio.h>
 void main()
 {
 int a, b,c, avg;
 printf("enter the first number \n");
 scanf("%d",&a);
 printf("enter the second number \n");
 scanf("%d",&b);
 printf("enter the third number \n");
 scanf("%d",&c);
 avg=a+b+c/3;
 printf("the average value of %d and %d is %d",a, b, c, avg);
 }