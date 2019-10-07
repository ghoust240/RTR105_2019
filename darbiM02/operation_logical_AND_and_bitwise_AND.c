#include<stdio.h>
void main()
 {
 int a=100;
 int b=50;

 printf("operācija &: %d\n",a&b);
// printf("operācijas & rezultāta izmērs baitos %d\n",sizeof(a&b));
 printf("operācijas & rezultāta izmērs baitos %ld\n",sizeof(a&b));

 printf("operācija &&: %d\n",a&&b);
// printf("operācijas && rezultāta izmērs baitos %d\n",sizeof(a&&b));
 printf("operācijas && rezultāta izmērs baitos %ld\n",sizeof(a&&b));
 }
