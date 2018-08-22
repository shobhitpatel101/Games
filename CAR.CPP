
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
void box()
{
cout<<"RACE LIKE >> PRO "<< char(1)<< ">>>>"<<endl ;
for(int i=0;i<11;i++)
{
for(int j=0;j<80;j++)
{
if(i==0||i==10)
{
cout<<"-";
}

else if(j==0||j==79)
{
cout<<"|";
}
else cout<<" ";

}
cout<<endl;
}
gotoxy(0,24);
cout<<"Exit => 0";
}
	//MD BY Patel :-)
void car(int a,int b)
{
clrscr();
box();
gotoxy(a,b) ;

cout<<char(201)<<"==="<<char(187);
gotoxy(a,b+1);
cout<<char(186)<<char(157)<<char(1)<<char(157)<<char(16);
gotoxy(a,b+2);
cout<<char(200)<<"==="<<char(188);

}
void p(int a)
{for(int i=79;i>0;i--)
{         gotoxy(i,a);
delay(10);
cout<<"*";
}
}
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

void main()
{
clrscr();
 menu();
delay(1100);
 textbackground(BLACK);
 int i=10,j=10,s=0;
 char c=1;
 car(10,10);

 while(1)
 {

 c= getch();

 int r=rand()%20+2;
 if(j>1&&j<20)
 {

 if(c=='w')
 car(i,j--);
 if(c=='s')
 car(i,j++);
 p(r);
 if(j==r||j+1==r||j+2==r)
 {
 clrscr();
 box();
 gotoxy(30,10);
 cout<<char(1)<<"GAME OVER !! \tYour Score :"<<s;
 delay(10000);
 }
 /*if(c=='a')
 car(i--,j);
 if(c=='d')
 car(i++,j);
 */


 }

 else
 {
 if(j>=20)
 j--;
 if(j<=1)
 j++;
 }
	if(c=='0')
	{
	exit(0);
	}

 gotoxy(40,1);
 cout<<"Score="<<s;
	s++;
 }
 getch();
}