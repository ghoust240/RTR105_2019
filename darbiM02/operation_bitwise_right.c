#include<stdio.h>

void main()
 {
 int a=100;
// atmiņā parādīsies mainīgais a
// (izmērs 4 bytes, saturs 0000 0000  0000 0000  0000 0000  0110 0100)
 printf("Operācija >>: %d>>1 rezultāts %d\n",a,a>>1);// sagaidam skaitli 50

 int b;
// atmiņā parādīsies mainīgais b
// (izmērs 4 bytes, saturs ???? ????  ???? ????  ???? ????  ???? ????)
 printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

 b=a>>2;// šeit ir divas operācijas - =(piešķiršana) un >>(bīdīšana pa bitiem pa labi)
 printf("Operācija >>: %d>>%d rezultāts %d\n",a,2,b);// sagaidam skaitli 25

 int c;
 printf("\n\nPapētīsim >> operāciju\n-------------------------\n");
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 1. operandu: ");
 scanf("%d",&a);
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 2. operandu: ");
 scanf("%d",&c);
 b=a>>c;
 printf("-------------------------\nSkaties, kas ir sanācis: %d\n",b);

/*
 char a=100;// atmiņā parādīsies mainīgais a (izmērs 1byte, saturs 0110 0100)
 printf("Operācija >>: %d>>1 rezultāts %d\n",a,a>>1);// sagaidam skaitli 50

 char b;// atmiņā parādīsies mainīgais b (izmērs 1 byte, saturs ???? ????)
 printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

 b=a>>2;// šeit ir divas operācijas - =(piešķiršana) un >>(bīdīšana pa bitiem pa labi)
 printf("Operācija >>: %d>>%d rezultāts %d\n",a,2,b);// sagaidam skaitli 25

 char c;
 printf("Papētīsim >> operāciju\n-------------------------\n");
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 1. operandu: ");
 scanf("%d",&a);
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 2. operandu: ");
 scanf("%d",&c);
 b=a>>c;
 printf("-------------------------\nSkaties, kas ir sanācis: %d\n",b);
*/
}
