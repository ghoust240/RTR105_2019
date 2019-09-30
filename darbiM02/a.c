#include<stdio.h>

float pi(float a_pi, int b_pi)
 {
 return a_pi;
 }

void main()
 {
 float a_main=3.50;
 int b_main=5;
 printf("pi(%.2f,%d)=%.2f\n",a_main,b_main,pi(b_main,a_main));
 }
