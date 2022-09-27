// Snakes & Ladders (with grid)
#include<iostream>  
#include<list>  
#include<windows.h>
#include<time.h>
using namespace std;

void Color(int color)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void colorNum(int a)
{
   Color(14);
   cout<<" "<<a;
   Color(7);
}

void colorNum2(int a)
{
   Color(10);
   cout<<" "<<a;
   Color(7);
}

void ladder(int *a)
{
   if(*a==1)
   {
      *a=38;
   }
   if(*a==4)
   {
      *a=14;
   }
   if(*a==9)
   {
      *a=31;
   }
   if(*a==21)
   {
      *a=42;
   }
   if(*a==28)
   {
      *a=84;
   }
   if(*a==51)
   {
      *a=67;
   }
   if(*a==72)
   {
      *a=91;
   }
   if(*a==80)
   {
      *a=99;
   }
}

void ladder2(int *a)
{
   if(*a==1)
   {
      *a=38;
   }
   if(*a==4)
   {
      *a=14;
   }
   if(*a==9)
   {
      *a=31;
   }
   if(*a==21)
   {
      *a=42;
   }
   if(*a==28)
   {
      *a=84;
   }
   if(*a==51)
   {
      *a=67;
   }
   if(*a==72)
   {
      *a=91;
   }
   if(*a==80)
   {
      *a=99;
   }
}

void snake(int *a)
{
   if(*a==17)
   {
      *a=7;
   }
   if(*a==54)
   {
      *a=34;
   }
   if(*a==62)
   {
      *a=19;
   }
   if(*a==64)
   {
      *a=60;
   }
   if(*a==87)
   {
      *a=36;
   }
   if(*a==93)
   {
      *a=73;
   }
   if(*a==98)
   {
      *a=79;
   }
}

void snake2(int *b)
{
   if(*b==17)
   {
      *b=7;
   }
   if(*b==54)
   {
      *b=34;
   }
   if(*b==62)
   {
      *b=19;
   }
   if(*b==64)
   {
      *b=60;
   }
   if(*b==87)
   {
      *b=36;
   }
   if(*b==93)
   {
      *b=73;
   }
   if(*b==98)
   {
      *b=79;
   }
}

int main()
{
   int a, j;
   list<int> num;
   for(int i=10;i>0;i--)
   {
      num.push_back(i);
   }
   for(int i=11;i<21;i++) 
   {
      num.push_back(i);
   }
   for(int i=30;i>20;i--) 
   {
      num.push_back(i);
   }
   for(int i=31;i<41;i++) 
   {
      num.push_back(i);
   }
   for(int i=50;i>40;i--) 
   {
      num.push_back(i);
   }
   for(int i=51;i<61;i++) 
   {
      num.push_back(i);
   }
   for(int i=70;i>60;i--) 
   {
      num.push_back(i);
   }
   for(int i=71;i<81;i++) 
   {
      num.push_back(i);
   }
   for(int i=90;i>80;i--) 
   {
      num.push_back(i);
   }
   for(int i=91;i<101;i++) 
   {
      num.push_back(i);
   }
   num.reverse();
   list<int> :: iterator iter = num.begin();
   // Design layout (executes once)
   Color(4);
   cout<<"RED  : SNAKES"<<endl;
   Color(9);
   cout<<"BLUE : LADDERS"<<endl<<endl;
   Color(7);
   for(int i=0;i<100;i++)
   {
      if(i==0||i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90) 
      {
        cout<<"\n -------------------------------------------------------------"<<endl;
        // 1 whitespace + 61 '-'
      }
      if((i%10)==0)
      {
        cout<<" ";
      }
      cout<<"|"; 
      if(*iter==17||*iter==54||*iter==62||*iter==64||*iter==87||*iter==93||*iter==98)
      {
        Color(4);
        cout<<" "<<*iter;
        Color(7);
        goto increment;
      }
      if(*iter==1||*iter==4||*iter==9||*iter==21||*iter==28||*iter==51||*iter==72||*iter==80)
      {
        Color(9);
        cout<<" "<<*iter;
        Color(7);
        goto increment;
      }
      cout<<" "<<*iter; // 1 whitespace 
      increment:
      {
        iter++;
        if(*iter<11 && *iter!=1)
        {
            cout<<"   "; // 3 whitespace
        }
        else if(*iter>=11 && *iter!=99|| *iter==1 && *iter!=99)
        {
            cout<<"  "; // 2 whitespace
        }
        else if(*iter==99)
        {
            cout<<" "; // 1 whitespace
        }
      }
      if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99)
      {
        cout<<"|";
      }
      if(i==99)
      {
        cout<<"\n -------------------------------------------------------------"<<endl;
      }
   }
   cout<<endl;
   // Player input
   string name1,name2;
   int die1 = 0, die2 = 0, count = 0;
   char c;
   cout<<"\nEnter player 1 name: ";
   Color(14);
   // cin>>name1;
   getline(cin,name1);
   Color(7);
   cout<<"Enter player 2 name: ";
   Color(10);
   // cin>>name2;
   getline(cin,name2);
   Color(7);
   // Game input
   for(int k=0;die1<101||die2<101;k++)
   {
      if(k%2==0)
      {
        Color(14);
        cout<<"\n--------------------------------------------------------------"<<endl;
        cout<<"\nPlayer 1's turn"<<endl;
        Color(7);
      }
      else
      {
        Color(10);
        cout<<"\n--------------------------------------------------------------"<<endl;
        cout<<"\nPlayer 2's turn"<<endl;
        Color(7);
      } 

      repeat:
      {
      cout<<"\nEnter 'R' to roll dice"<<endl;
      cin>>c;
      if(c=='R')
      {
        srand(time(0));
        a = rand()%6+1;
        if(k%2==0)
        {
        die1 = die1 + a;
        Color(14);
        cout<<"\n"<<name1<<" :";
        cout<<die1<<endl;
        Color(7);
        count = 1;
        }
        else
        {
        die2 = die2 + a;
        Color(10);
        cout<<"\n"<<name2<<" :";
        cout<<die2<<endl;
        Color(7);
        count = 2;
        }
        cout<<"NUMBER ROLLED: ";
        Color(5);
        cout<<a<<endl;
        Color(7);
    }
    cout<<endl;
    // Snake1
    if(die1==17||die1==54||die1==62||die1==64||die1==87||die1==93||die1==98)
    {
        Color(13);
        cout<<"HIT A SNAKE!!!"<<endl;
        Color(7);
        snake(&die1);
        Color(5);
        cout<<"UPDATED SCORE: "<<die1<<endl;
        Color(7);
      }
      //Ladder1
      if(die1==1||die1==4||die1==9||die1==21||die1==28||die1==51||die1==72||die1==80)
      {
        Color(9);
        cout<<"CLIMBED A LADDER!!!"<<endl;
        Color(7);
        ladder(&die1);
        Color(5);
        cout<<"UPDATED SCORE: "<<die1<<endl;
        Color(7);
      }
      // Snake2
      if(die2==17||die2==54||die2==62||die2==64||die2==87||die2==93||die2==98)
      {
        Color(13);
        cout<<"HIT A SNAKE!!!"<<endl;
        Color(7);
        snake2(&die2);
        Color(5);
        cout<<"UPDATED SCORE: "<<die2<<endl;
        Color(7);
      }
      // Ladder2
      if(die2==1||die2==4||die2==9||die2==21||die2==28||die2==51||die2==72||die2==80)
      {
        Color(9);
        cout<<"CLIMBED A LADDER!!!"<<endl;
        Color(7);
        ladder2(&die2);
        Color(5);
        cout<<"UPDATED SCORE: "<<die2<<endl;
        Color(7);
      }
      }
      if(a==6)
      {
        Color(12);
        cout<<"EXTRA TURN!!!"<<endl;
        Color(7);
        goto repeat;
      }

      iter = num.begin();
      if(die1>99)
      {
        cout<<"Winner : ";
        Color(11);
        cout<<name1;
        Color(7);
        break;
      }
      if(die2>99)
      {
        cout<<"Winner : ";
        Color(11);
        cout<<name2;
        Color(7);
        break;
      }
      for(int i=0;i<100;i++) // Design updation
      {
        if(i==0||i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
        {
            cout<<"\n -------------------------------------------------------------"<<endl;
            // 1 whitespace + 61 '-'
        }
        if((i%10)==0)
        {
            cout<<" ";
        }
        cout<<"|"; 
        if(*iter==17||*iter==54||*iter==62||*iter==64||*iter==87||*iter==93||*iter==98)
        {
            Color(4);
            cout<<" "<<*iter;
            Color(7);
            goto incre;
        }
        if(*iter==1||*iter==4||*iter==9||*iter==21||*iter==28||*iter==51||*iter==72||*iter==80)
        {
            Color(9);
            cout<<" "<<*iter;
            Color(7);
            goto incre;
        }
        if(*iter==die1||*iter==die2)
        {
            if(*iter==die1 && count==1) // Player 1
            {
                colorNum(*iter);
                count=0;
                goto incre;
            }
            else if(*iter==die2 && count==2) // Player 2
            {
                colorNum2(*iter);
                count=0;
                goto incre;
            }
        }
        cout<<" "<<*iter;
        incre:
        {
            iter++;
            if(*iter<11 && *iter!=1)
            {
                cout<<"   "; // 3 whitespace
            }
            else if(*iter>=11  && *iter!=99|| *iter==1 && *iter!=99)
            {
                cout<<"  "; // 2 whitespace
            }
            else if(*iter==99)
            {
                cout<<" "; // 1 whitespace
            }
        }
        if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99)
        {
            cout<<"|";
        }
        if(i==99)
        {
            cout<<"\n -------------------------------------------------------------"<<endl;
        }
      }
   }
   return 0;
}