#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<fstream.h>
#include<graphics.h>
#include<ctype.h>

class Bank
{char name[50];
 long acc_no;
 float balance;
 int passx[9],passy[9],nele;

 public:
 void init();
 void horiline(int x1,int y1,int y2);
 void vertiline(int y1,int x1,int x2);
 void dialinef(int x1,int x2,int y1,int y2);
 void dialineb(int x1,int x2,int y1,int y2);
 void pattern(int num,int passx[],int passy[]);
 float r_bal()
 {return balance;}
 long r_acno()
 {return acc_no;}
 int* r_passx()
 {return passx;}
 int* r_passy()
 {return passy;}
 int r_nele()
 {return nele;}
 void upbal(float with)
 {balance-=with;}

};

void Bank::init()
 {
 int driver=DETECT,mode;
 initgraph(&driver,&mode,"C:\\Turboc3\\BGI");

 settextstyle(8,0,2);
 outtextxy(120,10,"UBANK e-ACCOUNT SETUP");
 settextstyle(8,0,10);
 setcolor(4);
 outtextxy(420,30,"U");
 circle(480,125,75);
 circle(480,125,76);
 circle(480,125,77);
 circle(480,125,78);

 setcolor(9);
 outtextxy(460,30,"B");
 line(490,70,490,100);
 line(500,70,500,100);
 line(490,155,490,185);
 line(500,155,500,185);
 circle(480,125,90);
 circle(480,125,89);
 circle(480,125,88);
 circle(480,125,87);

 settextstyle(0,0,0);
 setcolor(15);
 outtextxy(410,225,"You can bank on us");


 cout<<"\n\n\n\n\nENTER NAME:";
  gets(name);
  cout<<"\nENTER A/C NUMBER:";
  cin>>acc_no;
  cout<<"\nENTER INITIAL BALANCE:";
  cin>>balance;
  cout<<"\nPRESS ANY KEY TO PROCEED TO PASSWORD SETTING";
  getch();
  clrscr();
  cleardevice();

 int i,j,k;

settextstyle(1,0,2);
outtextxy(140,10,"Mutating Security Algorithm");
 settextstyle(0,0,0);
 outtextxy(50,50,"4-pin bypass System has been replaced with a more sophisticated yet ");
 outtextxy(10,70,"easy to remember matrix based pattern which is 100x more resistant to cracking");

settextstyle(1,0,2);

line(100,100,100,250);
line(150,100,150,250);
line(200,100,200,250);
line(250,100,250,250);

line(100,100,250,100);
line(100,150,250,150);
line(100,200,250,200);
line(100,250,250,250);

outtextxy(120,110,"1");
outtextxy(170,110,"2");
outtextxy(220,110,"3");
outtextxy(120,160,"4");
outtextxy(170,160,"5");
outtextxy(220,160,"6");
outtextxy(120,210,"7");
outtextxy(170,210,"8");
outtextxy(220,210,"9");

line(300,100,300,250);
line(350,100,350,250);
line(400,100,400,250);
line(450,100,450,250);

line(300,100,450,100);
line(300,150,450,150);
line(300,200,450,200);
line(300,250,450,250);

outtextxy(320,110,"9");
outtextxy(370,110,"4");
outtextxy(420,110,"0");
outtextxy(320,160,"7");
outtextxy(370,160,"1");
outtextxy(420,160,"8");
outtextxy(320,210,"2");
outtextxy(370,210,"5");
outtextxy(420,210,"3");

outtextxy(0,260,"Password:");

for(i=0;i<1;++i)
for(j=120;j<=170;++j)
{putpixel(170,j,10);
 delay(10);
}

for(i=170;i>=120;--i)
for(j=0;j<1;++j)
{putpixel(i,170,10);
 delay(10);
}

for(i=0;i<1;++i)
for(j=170;j<=230;++j)
{putpixel(120,j,10);
 delay(10);
}

outtextxy(140,260,"2547");

for(i=0;i<1;++i)
for(j=120;j<=170;++j)
{putpixel(370,j,10);
 delay(10);
}

for(i=370;i>=320;--i)
for(j=0;j<1;++j)
{putpixel(i,170,10);
 delay(10);
}

for(i=0;i<1;++i)
for(j=170;j<=230;++j)
{putpixel(320,j,10);
 delay(10);
}
outtextxy(340,260,"4172");
delay(50);
outtextxy(255,260,"<=>");

outtextxy(150,300,"Pattern is the Password");
getch();

cleardevice();

int num;
settextstyle(0,0,0);
cout<<"Password Setting \nEnter the number of elements you wish to joinin a 3X3 matrix(min 4/max 9):";
cin>>nele;

cout<<"\nEnter indices of elements\n";
settextstyle(0,0,0);
 setcolor(14);
 outtextxy(470,40,"Element Index Map");
 setcolor(15);
 outtextxy(430,60,"ROW:    1     2     3");
 outtextxy(405,80,"COLUMN:");
 outtextxy(450,100,"1    11    12    13");
 outtextxy(450,130,"2    21    22    23");
 outtextxy(450,160,"3    31    32    33");


for(k=0;k<nele;++k)
 cin>>passx[k]>>passy[k];

setcolor(15);
outtextxy(70,130,"Your High Security Pattern");
outtextxy(100,160,"X");
outtextxy(100,210,"X");
outtextxy(100,260,"X");
outtextxy(150,160,"X");
outtextxy(150,210,"X");
outtextxy(150,260,"X");
outtextxy(200,160,"X");
outtextxy(200,210,"X");
outtextxy(200,260,"X");

setcolor(15);
pattern(nele,passx,passy);

outtextxy(300,160,"LEGEND");

setcolor(1);
line(300,183,320,183);
outtextxy(330,180,"1st");

setcolor(2);
line(300,193,320,193);
outtextxy(330,190,"2nd");

setcolor(3);
line(300,203,320,203);
outtextxy(330,200,"3rd");

setcolor(4);
line(300,213,320,213);
outtextxy(330,210,"4th");

setcolor(5);
line(300,223,320,223);
outtextxy(330,220,"5th");

setcolor(6);
line(300,233,320,233);
outtextxy(330,230,"6th");

setcolor(14);
line(300,243,320,243);
outtextxy(330,240,"7th");

setcolor(15);
line(300,253,320,253);
outtextxy(330,250,"8th");


setcolor(15);
outtextxy(10,310,"Enter elements according to given pattern ONLY");
getch();
clrscr();
cleardevice();

}

//-----------------------------------------------------------
void Bank::pattern(int num,int passx[],int passy[])
{int i,j;
for(i=0;i<num-1;++i)
{if(i==6||i==7)
{if(i==6)
 setcolor(14);
 if(i==7)
 setcolor(15);
}
else
 setcolor(i+1);
if(passx[i]==passx[i+1])
  horiline(passx[i],passy[i],passy[i+1]);

 else if(passx[i]<passx[i+1])
 {
 if(passy[i]==passy[i+1])
  vertiline(passy[i],passx[i],passx[i+1]);
 else if(passy[i]<passy[i+1])
  dialineb(passx[i],passx[i+1],passy[i],passy[i+1]);
 else if(passy[i]>passy[i+1])
  dialinef(passx[i],passx[i+1],passy[i],passy[i+1]);

 }
 else if(passx[i]>passx[i+1])
 {
 if(passy[i]==passy[i+1])
  vertiline(passy[i],passx[i],passx[i+1]);
 else if(passy[i]<passy[i+1])
  dialinef(passx[i],passx[i+1],passy[i],passy[i+1]);
 else if(passy[i]>passy[i+1])
  dialineb(passx[i],passx[i+1],passy[i],passy[i+1]);

 }

}
}

//-----------------------------------------------------

//--------------------------------------------------
void Bank::horiline(int x1,int y1,int y2)
{if(x1==1)
   {if((y1==1 && y2==2)||(y1==2 && y2==1))
      line(100,160,150,160);
    else if((y1==2 && y2==3)||(y1==3 && y2==2))
      line(150,160,200,160);
   }
else if(x1==2)
   {if((y1==1 && y2==2)||(y1==2 && y2==1))
      line(100,210,150,210);
    else if((y1==2 && y2==3)||(y1==3 && y2==2))
      line(150,210,200,210);
   }

else if(x1==3)
   {if((y1==1 && y2==2)||(y1==2 && y2==1))
      line(100,260,150,260);
    else if((y1==2 && y2==3)||(y1==3 && y2==2))
      line(150,260,200,260);
   }
delay(1000);
}
//----------------------------------------------------

//----------------------------------------------------
void Bank::vertiline(int y1,int x1,int x2)
{if(y1==1)
 {if((x1==1 && x2==2)||(x1==2 && x2==1))
    line(100,160,100,210);
 else if((x1==2 && x2==3)||(x1==3 && x2==2))
    line(100,210,100,260);
 }
 else if(y1==2)
 {if((x1==1 && x2==2)||(x1==2 && x2==1))
    line(150,160,150,210);
 else if((x1==2 && x2==3)||(x1==3 && x2==2))
    line(150,210,150,260);
 }
 else if(y1==3)
{if((x1==1 && x2==2)||(x1==2 && x2==1))
    line(200,160,200,210);
 else if((x1==2 && x2==3)||(x1==3 && x2==2))
    line(200,210,200,260);
 }

delay(1000);
}
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
void Bank::dialineb(int x1,int x2,int y1,int y2)
{if(((x1==1 && y1==1) && (x2==2 && y2==2))||(x1==2 && y1==2) && (x2==1 && y2==1))
   line(100,160,150,210);
else if(((x1==1 && y1==2) && (x2==2 && y2==3))||(x1==2 && y1==3) && (x2==1 && y2==2))
   line(150,160,200,210);
else if(((x1==2 && y1==1) && (x2==3 && y2==2))||(x1==3 && y1==2) && (x2==2 && y2==1))
   line(100,210,150,260);
else if(((x1==2 && y1==2) && (x2==3 && y2==3))||(x1==3 && y1==3) && (x2==2 && y2==2))
   line(150,210,200,260);
else if(((x1==1 && y1==2) && (x2==3 && y2==3))||(x1==3 && y1==3) && (x2==1 && y2==2))
   line(150,160,200,260);
else if(((x1==1 && y1==1) && (x2==3 && y2==2))||(x1==3 && y1==2) && (x2==1 && y2==1))
   line(100,160,150,260);
else if(((x1==2 && y1==1) && (x2==3 && y2==3))||(x1==3 && y1==3) && (x2==2 && y2==1))
   line(100,210,200,260);
else if(((x1==1 && y1==1) && (x2==2 && y2==3))||(x1==2 && y1==3) && (x2==1 && y2==1))
   line(100,160,200,210);

 delay(1000);
}

//-------------------------------------------------------------------------------------

void Bank::dialinef(int x1,int x2,int y1,int y2)
{if(((x1==1 && y1==2) && (x2==2 && y2==1))||(x1==2 && y1==1) && (x2==1 && y2==2))
   line(150,160,100,210);
else if(((x1==1 && y1==3) && (x2==2 && y2==2))||(x1==2 && y1==2) && (x2==1 && y2==3))
   line(200,160,150,210);
else if(((x1==2 && y1==2) && (x2==3 && y2==1))||(x1==3 && y1==1) && (x2==2 && y2==2))
   line(150,210,100,260);
else if(((x1==2 && y1==3) && (x2==3 && y2==2))||(x1==3 && y1==2) && (x2==2 && y2==3))
   line(200,210,150,260);
else if(((x1==1 && y1==2) && (x2==3 && y2==1))||(x1==3 && y1==1) && (x2==1 && y2==2))
   line(150,160,100,260);
else if(((x1==1 && y1==3) && (x2==3 && y2==2))||(x1==3 && y1==2) && (x2==1 && y2==3))
   line(200,160,150,260);
else if(((x1==2 && y1==3) && (x2==3 && y2==1))||(x1==3 && y1==1) && (x2==2 && y2==3))
   line(200,210,100,260);
else if(((x1==1 && y1==3) && (x2==2 && y2==1))||(x1==2 && y1==1) && (x2==1 && y2==3))
   line(200,160,100,210);

delay(1000);
}

class ATM:public Bank
{public:
 int passmat(int passx[],int passy[],int n);
 void withdraw(Bank ob);
 void reciept(float with,Bank ob)
 {
   time_t t;
   t = time(NULL);
   stime(&t);
   printf("\nCurrent date and time:%s", ctime(&t));

  cout<<"\nA/C Number:"<<ob.r_acno();
  cout<<"\nAmount withdrawn:"<<with;
  cout<<"\nAmount remaining in account:"<<ob.r_bal();
  cout<<"\nTHANK YOU"<<"\nHAVE A NICE DAY";
 }
};

void ATM::withdraw(Bank ob)
{float with;
 clrscr();
 cleardevice();
 settextstyle(8,0,2);
 outtextxy(100,10,"LOGIN");
 settextstyle(8,0,10);
 setcolor(4);
 outtextxy(420,30,"U");
 circle(480,125,75);
 circle(480,125,76);
 circle(480,125,77);
 circle(480,125,78);

 setcolor(9);
 outtextxy(460,30,"B");
 line(490,70,490,100);
 line(500,70,500,100);
 line(490,155,490,185);
 line(500,155,500,185);
 circle(480,125,90);
 circle(480,125,89);
 circle(480,125,88);
 circle(480,125,87);

 settextstyle(0,0,0);
 setcolor(15);
 outtextxy(410,225,"You can Bank on Us");

int check=passmat(ob.r_passx(),ob.r_passy(),ob.r_nele());
   if(check)
    {   do
	{clrscr();
	 cleardevice();
	  settextstyle(8,0,2);
       outtextxy(50,10,"WITHDRAWL");
       settextstyle(8,0,10);
       setcolor(4);
       outtextxy(420,30,"U");
       circle(480,125,75);
       circle(480,125,76);
       circle(480,125,77);
       circle(480,125,78);

       setcolor(9);
       outtextxy(460,30,"B");
       line(490,70,490,100);
       line(500,70,500,100);
       line(490,155,490,185);
       line(500,155,500,185);
       circle(480,125,90);
       circle(480,125,89);
       circle(480,125,88);
       circle(480,125,87);
       settextstyle(0,0,0);
       setcolor(15);
       outtextxy(410,225,"You can Bank on Us");
cout<<"\n\n\n\nEnter withdrawl amount";
	  cin>>with;
	  if(with>ob.r_bal())
	  cout<<"The Amount requested is higher than existing funds"
	      <<"\nEnter an amount equal to or lesser than existing funds";
	}while(with>ob.r_bal());

       clrscr();
       cleardevice();
       settextstyle(8,0,2);
       outtextxy(50,10,"TRANSACTION IN PROGRESS");
       settextstyle(8,0,10);
       setcolor(4);
       outtextxy(420,30,"U");
       circle(480,125,75);
       circle(480,125,76);
       circle(480,125,77);
       circle(480,125,78);

       setcolor(9);
       outtextxy(460,30,"B");
       line(490,70,490,100);
       line(500,70,500,100);
       line(490,155,490,185);
       line(500,155,500,185);
       circle(480,125,90);
       circle(480,125,89);
       circle(480,125,88);
       circle(480,125,87);
       settextstyle(0,0,0);
       setcolor(15);
       outtextxy(410,225,"You can Bank on Us");


       cout<<"\n\n\n\nProcessing Request";
       for(int z=0;z<4;++z)
       {cout<<"."<<" ";
	delay(300);
       }
       cout<<"\nPlease Collect The Cash";
       delay(1000);
       cout<<"\nGenerating Reciept";
       for(z=0;z<4;++z)
       {cout<<"."<<" ";
	delay(300);
       }
       ob.upbal(with);
       reciept(with,ob);
       getch();
    }
   else
   cout<<"Invalid Password";
}

int ATM::passmat(int passx[],int passy[],int n)
{
int PASS_MAT[3][3],i,j,flag=1;
randomize();

for(i=0;i<3;++i)
{  for(j=0;j<3;++j)
   {rep:

    PASS_MAT[i][j]=random(10);
    if(PASS_MAT[i][j]==0)
       goto rep;
    else
     if(i==0)
      {if (j==1)
      if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
       goto rep;
      else if(j==2)
	{if(PASS_MAT[i][j-2]==PASS_MAT[i][j])
	 goto rep;
	 else if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
	 goto rep;
	}
      }

     else if(i==1)
     {if(j==0)
	{if (PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if (PASS_MAT[i-1][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j+2]==PASS_MAT[i][j])
	   goto rep;
	}
      if(j==1)
	{if(PASS_MAT[i-1][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
	   goto rep;
	}
      if(j==2)
	{if(PASS_MAT[i-1][j-2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
	   goto rep;
	}

     }

     else if(i==2)
      {if(j==0)
	{if(PASS_MAT[i-2][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j+2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j+2]==PASS_MAT[i][j])
	   goto rep;
	}
      if(j==1)
	{if(PASS_MAT[i-2][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j+1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
	   goto rep;
	}
      if(j==2)
	{if(PASS_MAT[i-2][j-2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-2][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j-2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j-1]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i-1][j]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-2]==PASS_MAT[i][j])
	   goto rep;
	 else if(PASS_MAT[i][j-1]==PASS_MAT[i][j])
	   goto rep;
	}
      }
   }
}

cout<<"\n\n\n";
for(i=0;i<3;++i)
{cout<<"\t      ";
 for(j=0;j<3;++j)
   cout<<PASS_MAT[i][j]<<" ";
 cout<<"\n";
}

int pass[9],num,x;
char ans;
num=0;
cout<<"\nEnter Password:";

do
{cout<<"\nEnter:";
cin>>pass[num];
     cout<<"\nEnter More digits?(y/n)";
     cin>>ans;
     if(ans=='y'||ans=='Y')
     ++num;
}while(ans=='y'||ans=='Y');

if(n!=num+1)
{flag=0;
 goto ret;
}
else
for(x=0;x<num+1;++x)
     { for(i=0;i<3;++i)
       {for(j=0;j<3;++j)
	  {if(PASS_MAT[i][j]==pass[x])
	     {if((i+1)!=passx[x] || (j+1)!=passy[x])
	       flag=0;
	     }
	  }

	}

     }

ret:
return flag;
}

//---------------------------------------------------------
void main()
{Bank ob[2];
 ofstream fout("ubank.txt");
 for(int i=0;i<2;++i)
 {ob[i].init();
  fout.write((char*)&ob[i],sizeof(ob[i]));
 }
fout.close();
int driver=DETECT,mode;
 initgraph(&driver,&mode,"C:\\Turboc3\\BGI");


while(1)
{settextstyle(8,0,2);
outtextxy(1,10,"Welcome to UBank ATM XYZ branch");
 settextstyle(8,0,10);
 setcolor(4);
 outtextxy(420,30,"U");
 circle(480,125,75);
 circle(480,125,76);
 circle(480,125,77);
 circle(480,125,78);

 setcolor(9);
 outtextxy(460,30,"B");
 line(490,70,490,100);
 line(500,70,500,100);
 line(490,155,490,185);
 line(500,155,500,185);
 circle(480,125,90);
 circle(480,125,89);
 circle(480,125,88);
 circle(480,125,87);

 settextstyle(0,0,0);
 setcolor(15);
 outtextxy(410,225,"You can Bank on Us");

int acnum;
cout<<"\n\n\n\n\nEnter Account Number:\n";
cin>>acnum;
ifstream fin("ubank.txt");
Bank obj;
char found='n';
fin.seekg(0);
while(fin)
{fin.read((char*)&obj,sizeof(obj));
 if(acnum==obj.r_acno())
  {found='y';
   ATM a;
   a.withdraw(obj);
   fin.seekg(-sizeof(obj));
   break;
  }
}
if(found=='n')
cout<<"Invalid Account number";

clrscr();
cleardevice();
}

}

