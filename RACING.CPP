#include<iostream.h>
#include<conio.h>
#include<dos.h>
void menu()
{
for(int i=0;i<24;i++)
{
for(int j=0;j<80;j++)
{
textbackground(WHITE);
cprintf(" ");
 }
 }
 gotoxy(5,5);
 textbackground(RED);
 cprintf("-----\n");
 gotoxy(5,6);
 cprintf("|\n");
 gotoxy(5,7);
 cprintf("-----\n");
 gotoxy(9,8);
 cprintf("|\n");
 gotoxy(5,9);
 cprintf("-----\n");
 textbackground(BLUE);
 gotoxy(10,9);
 cprintf("GAMES ");


 gotoxy(50,20);
 cprintf("Loading");
 for(i=0;i<8;i++)
 { delay(150);
 gotoxy(58+i,20);
 textbackground(GREEN);
cprintf(" ");

 }
 textbackground(BLACK);
 gotoxy(20,15);
 cprintf(" When you are fitted in a racing car and you race to WIN ");
 gotoxy(21,16);
 cprintf(" ,second third place is not enough! ");

 }


int menu2(int p)
 {    clrscr();
for(int i=0;i<24;i++)
{
for(int j=0;j<80;j++)
{
textbackground(BLUE);
cprintf(" ");
 }
 }
 gotoxy(5,5);
 textbackground(RED);
 cprintf("-----\n");
 gotoxy(5,6);
 cprintf("|\n");
 gotoxy(5,7);
 cprintf("-----\n");
 gotoxy(9,8);
 cprintf("|\n");
 gotoxy(5,9);
 cprintf("-----\n");
 textbackground(BLACK);
 gotoxy(10,9);
 cprintf("GAMES ");

gotoxy(40,15);
cprintf("New Game %c",char(1));
gotoxy(40,17);
cprintf("How to Play");
gotoxy(40,19);
cprintf("Exit");
gotoxy(5,25);
cprintf("Press e = Enter ");
char c='1';
 gotoxy(37,19-p);
 textbackground(RED);
cprintf("=>");


while(c!='e')
{
c=getch();
if(c=='w'&&p<4)

{
p=p+2;
menu2(p);
}
if(c=='s'&&p>0)
{
p=p-2;
menu2(p);

}

}
int j=p;
return j;
}
 void main()
 {

 clrscr();
/* menu();
 delay(999);
 */

int p= menu2(0);
  clrscr();
  cout<<p;

 getch();
 }