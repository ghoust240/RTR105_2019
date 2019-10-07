#include<stdio.h>
void main()
 {
 char a=50;
 printf("%c",'%');
 printf("%c",37);
 printf("\n");
 printf("Teksts ar %c simbolu\n",'%');
 printf("Teksts ar %c simbolu un a mainīgā sākuma vērtība ir %c (kā simbols)\n",37,a);
 printf("Teksts ar %c simbolu un a mainīgā sākuma vērtība ir %d (kā sakitlis)\n",37,a);
 printf("++ pa labi: %d++ rezultāts ir %d\n",a,a++);
 printf("++ pa labi: mums ir %d rezultāts sekojošai darbībai %d++\n",a++,a);
 printf("++ pa kreisi: ++%d rezultāts ir %d\n",a,++a);
 printf("++ pa kreisi: mums ir %d rezultāts sekojošai darbībai ++%d\n",a,++a);
 }
