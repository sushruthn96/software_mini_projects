#include<iostream>
#include<stdio.h>   //header file for standard input output
#include<conio.h>
#include<stdlib.h>
#include<windows.h> //  header file for gotoxy()
#include<string.h>
#include<time.h>
//#define _WIN32_WINNT 0x05232
#pragma comment(lib, "user32")
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

COORD coord={0,0};  // this is global variable
                    //center of axis is set to the top left corner of the screen
void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

//function to check end of game
void check(int a[5][5],char choice,int k)
{
    int sumr1,sumr2,sumr3,sumc1,sumc2,sumc3,sumd1,sumd2,flag=0;
     int x,y,i,j;
     sumr1=0;sumr2=0;sumr3=0;sumc1=0;sumc2=0;sumc3=0;sumd1=0;sumd2=0;
     sumd1 = a[0][0] + a[2][2] + a[4][4];   //variables to store sum of
     sumr1 = a[0][0] + a[0][2] + a[0][4];   //each row,each coloumn and diagonals
     sumc1 = a[0][0] + a[2][0] + a[4][0];   // of 3x3 matrix
     sumr2 = a[2][0] + a[2][2] + a[2][4];
     sumr3 = a[4][0] + a[4][2] + a[4][4];
     sumd2=  a[4][0] + a[2][2] + a[0][4];
     sumc2=  a[0][2] + a[2][2] + a[4][2];
     sumc3=  a[0][4] + a[2][4] + a[4][4];

    if(choice=='o')     //to allot values to choices according to players selection
        {
            x=1;
            y=2;
        }
        else
        {
            x=2;
            y=1;
        }
        //check whether any row or coloumn or diagonal has same elements
    switch(sumr1)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;

        default:break;
    }
switch(sumr2)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;
                    gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumr3)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumc1)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;
             gotoxy(42,42);       printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumc2)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumc3)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumd1)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default:break;
    }
switch(sumd2)
    {
        case 0: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",x);
                }
                break;
        case 3: {
                    Sleep(100);
                    system("cls");
                    flag=1;gotoxy(42,42);
                    printf("\n\n\n\n\nplayer %d won\n",y);
                }
                break;
        default: break;
    }

    if(flag==0)
        if(k==9)
            {
                Sleep(100);
                system("cls");gotoxy(42,42);
                printf("\n\n\n\n\ndraw match!!!\n");
            }

}

int main()
{


    int a[5][5],i,j,k,sumc1,sumc2,sumc3,sumr1,sumr2,sumr3,z;
    char choice1,choice2,ch=32,name1[10],name2[10],movch,player1,player2;
    gotoxy(29,10);
printf("TIC TAC TOE");
gotoxy(31,12);
printf("Loading");
gotoxy(22,13);
for(z=0;z<24;z++)
{
    printf("_");
    Sleep(100);
}
Sleep(1000);
system("cls");

    for(i=0;i<5;i++)
       for(j=0;j<5;j++)
            a[i][j]=-10;

    printf("Enter your choice\n1.X\n2.o\n");    //ask for choice
    scanf("%c",&choice1);

    if(choice1=='o')            //decide which is first choice and which one is second
        choice2='x';
    else
        choice2='o';

    system("cls");

    printf("Enter player 1 name\n");
    scanf("%s",name1);                  //accept first player name
    printf("Enter player 2 name\n");
    scanf("%s",name2);                  //accept second player name

    system("cls");                      //clear the screen


    gotoxy(0,0);
    for(k=0;k<=100;k++)
    {
       if(k>=5)
        {
            check(a,choice1,k);
        }
        gotoxy(29,32);
        printf("TIC TAC TOE ULTIMATE");
        int fo1=35;int fo2=35;
int x1=35;int y1=35;
 for(fo2=36;fo2<=38;fo2++)
    { //SetColor(4);
        gotoxy(fo2,fo1);
        printf("|");
        fo1++;
        gotoxy(fo2,fo1);
        printf("|");
        fo1++;
        gotoxy(fo2,fo1);
        printf("|");
        fo1++;
        gotoxy(fo2,fo1);
        printf("|");
        fo1++;
        gotoxy(fo2,fo1);
        printf("|");
        fo1=35;
        fo2++;
    }
    fo1=35;fo2=35;
for(fo2=36;fo2<=38;fo2++)
    {
        gotoxy(fo1,fo2);
        printf("-");
        fo1++;
        gotoxy(fo1,fo2);
        printf("-");
        fo1++;
        gotoxy(fo1,fo2);
        printf("-");
        fo1++;
        gotoxy(fo1,fo2);
        printf("-");
        fo1++;
        gotoxy(fo1,fo2);
        printf("-");
        fo1=35;
        fo2++;
    }
      movch=getch();               //get a character from player
    switch(movch)
    {
    case 'q':
            {
               gotoxy(x1+0,y1+0);
               if((k%2)==0)         // check whether the turn is even or odd
                {                   //Note that turn starts from 0th number
                    if(choice1=='o')    //if choice is o then store 0
                       {
                           SetColor(14);
                        a[0][0]=0;
                         printf("%c",choice1);}

                    else
                       {
                         SetColor(3);
                        a[0][0]=1;
                         printf("%c",choice1);     // if choice is x the store 1-
                       }
                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);
                            a[0][0]=0;
                         printf("%c",choice2);}
                    else
                        {SetColor(3);a[0][0]=1;
                         printf("%c",choice2);}

               }

               break;
            }
    case 'w':
            {
               gotoxy(x1+2,y1+0);
                 if((k%2)==0)
                {
                    if(choice1=='o')
                        {
                            SetColor(14);a[0][2]=0;
                        printf("%c",choice1);}
                    else
                        {SetColor(3);a[0][2]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                        {
                            SetColor(14);a[0][2]=0;
                        printf("%c",choice2);}
                    else
                        {SetColor(3);a[0][2]=1;
                        printf("%c",choice2);}

               }
               break;
            }
    case 'e':
            {
               gotoxy(x1+4,y1+0);
                 if((k%2)==0)
                {
                    if(choice1=='o')
                        {
                            SetColor(14);a[0][4]=0;
                        printf("%c",choice1);}
                    else
                        {SetColor(3);a[0][4]=1;
                        printf("%c",choice1);}

                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[0][4]=0;
                        printf("%c",choice2);}
                    else
                        {SetColor(3);a[0][4]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 'a':
            {
               gotoxy(x1+0,y1+2);
                if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[2][0]=0;
                         printf("%c",choice1);}
                    else
                        {SetColor(3);a[2][0]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[2][0]=0;
                         printf("%c",choice2);}
                    else
                        {SetColor(3);a[2][0]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 's':
            {
               gotoxy(x1+2,y1+2);
                if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[2][2]=0;
                         printf("%c",choice1);}
                    else
                        {SetColor(3);a[2][2]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[2][2]=0;
                         printf("%c",choice2);}
                    else
                        {SetColor(3);a[2][2]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 'd':
            {
               gotoxy(x1+4,y1+2);
                 if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[2][4]=0;
                         printf("%c",choice1);}
                    else
                        {SetColor(3);a[2][4]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[2][4]=0;
                     printf("%c",choice2);}
                    else
                        {SetColor(3);a[2][4]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 'z':
            {
               gotoxy(x1+0,y1+4);
                 if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[4][0]=0;
                        printf("%c",choice1);}
                    else
                        {
                            SetColor(3);a[4][0]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[4][0]=0;
                          printf("%c",choice2);}
                    else
                       {
                           SetColor(3);
                        a[4][0]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 'x':
            {
               gotoxy(x1+2,x1+4);
                if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[4][2]=0;
                        printf("%c",choice1);}
                    else
                        {SetColor(3);a[4][2]=1;
                        printf("%c",choice1);}

                }

               else
               {
                    if(choice2=='o')
                        {SetColor(14);a[4][2]=0;
                         printf("%c",choice2);}
                    else
                        {
                            SetColor(3);a[4][2]=1;
                    printf("%c",choice2);}
               }
                break;
            }
    case 'c':
            {
               gotoxy(x1+4,y1+4);
                 if((k%2)==0)
                {
                    if(choice1=='o')
                        {SetColor(14);a[4][4]=0;
                                            printf("%c",choice1);}
                    else
                        {
                            SetColor(3);a[4][4]=1;
                    printf("%c",choice1);}
                }

               else
               {
                    if(choice2=='o')
                      {
                         SetColor(14);
                        a[4][4]=0;
                         printf("%c",choice2);}
                    else
               {
                   SetColor(3);
                       a[4][4]=1;
                    printf("%c",choice2);}
               }
               break;
            }
    case 'm':exit(0);
                break;
    default:printf("invalid character");
    }
    }
    Sleep(100);
    system("cls");
    return 0;
}
