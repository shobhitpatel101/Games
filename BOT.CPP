#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>


void menu()
{ textcolor(WHITE);
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
 textbackground(BLUE);

 gotoxy(20,15);
 cprintf(" When you are fitted in a racing car and you race to WIN ");
 gotoxy(21,16);
 cprintf(" ,OR get be caught by BOT! ");

 }
  void make(int count)
 {
 clrscr();
 gotoxy(70,1);
 cout<<"SCORE:"<<count;
 gotoxy(1,1);
 cout<<"BOT VS HUMAN";
 gotoxy(6,2);
 cout<<"*******************************************************************";
 gotoxy(70,25);
{ cout<<"EXIT-> 0";
 }

 }

 //for bot
 void bot(int a,int b,int count,int &ba,int &bb)
 {            if(count==0)
  {gotoxy(3,3);
  cout<<"BOT ( "<<char(21)<<"="<<char(1)<<" )";
  }

if(count>0)
 { if(a>ba)
	{

	ba++;
	}
	if(a<ba)
	{
	ba--;
	}
	if(b>bb)
	{
	  bb++;
	}
	if(b<bb)
	{
	bb--;
	}
	if(ba==a&&bb==b)
	{
	clrscr();
	gotoxy(45,15);
	cout<<char(1)<<" "<<"BOT WINS, GAME OVER!! SCORE: "<<count;
	}


gotoxy(ba,bb);
cout<<char(21)<<"="<<char(1);
}
 }

 //for car
 void car(int a,int b,int count)
{
clrscr();
make(count);
textcolor(BLACK);

textbackground(GREEN);

gotoxy(a,b) ;

cout<<char(201)<<"=="<<char(187);
gotoxy(a,b+1);
cout<<char(186)<<char(1)<<char(16);
gotoxy(a,b+2);
cout<<char(200)<<"=="<<char(188);


}



 void main()
 {clrscr();
 menu();
 delay(500);
 make(0);
 int a=10;
 int b=10;
 int count=0;
 int ba=1,bb=3;
 car(a,b,0);

 while(1)
 {
 char c;
 c=getch();
 if(a>1&&b>1&&a<70&&b<20)
 {
 if(c=='w')
{ car(a,b--,count);

 }
 if(c=='s')
 {car(a,b++,count);
 }
 if(c=='a')
 {car(a--,b,count);
 }

 if(c=='d')
 {car(a++,b,count);
 }
 }
 else{
 if(b>70)
 b--;
 if(b<0)
 b++;
 if(a<0)
 a++ ;
 if(a>20)
 a--;

 }
 bot(a,b,count,ba,bb);
 if(c=='0')
 {
 exit(1);
 }
 count++;
 }
 getch();
 }