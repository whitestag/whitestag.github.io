#include"iostream"
#include"string"
#include"stdlib.h"
using namespace std;
class palindrome
{
    string rev;
 int top,max;
 public:
 palindrome(string t)
  { 
         int i;
         for(i=0;t[i]!='\0';i++);
         max=i;
         top=-1;
}
int empty()
{
        if(top==-1)
        return 1;
        else
        return 0;
}//empty

int full()
{
        if(top==max)
        return 1;
        else
        return 0;
}//full

void push(char ch)
{
         rev[++top]=ch;
}//push

char pop()
{
char ch=rev[top--];
return ch;
}

string reverse(string str)
{
        string pal;
        char ch;
        int i=0;
        while(str[i]!='\0')
        {
        push(str[i]);
        i++;
        }
        i=0;
        while(!empty())
        {
        ch=pop();
        pal=pal+ch;
        i++;
        }
        pal[i]='\0';
        
        return pal;
}

void palin(string s)
{
  string s1;
  s1=reverse(s);
  if(s.compare(s1)==0)
  cout<<"String is a palindrome";
  else
  cout<<"String is not a palindrome";
}


string remov(string s)
{
         int i=0;
         string s1;

           while(s[i]!='\0')
        {

        push(s[i]);
        i++;
        }
        i=0;
         while(!empty())
         {
         char ch=pop();
         if((int)ch>=97&&(int)ch<=122||(int)ch>=65&&(int)ch<=90)
         {
         if((int)ch>=65&&(int)ch<=90)
         {
         
         s1=s1+(char)(ch+32);
         }
         else
         {
         s1=s1+ch;
         }
         i++;
         }
         }
         s1[i]='\0';
         string rev=reverse(s1);
         cout<<rev<<"\n";
         return rev;
}
};
int main()
{
cout<<"Enter a sentence \n";
        string s;
        int x;
 
       getline(cin,s);
    
        palindrome obj(s);
while(1)
       {

       cout<<"\n\nPress 1 to check whether given string is palindrome or not \n\nPress 2 to remove spaces and punctuation in string, convert all the Characters to lowercase and then call above Palindrome checking function to check for a palindrome  \n\nPress 3 to print string in reverse order \n\nPress 4 to exit \n\nEnter option : ";
       cin>>x;
       cout<<"\n";
       switch(x)
       {
       case 1:obj.palin(s);
       break;
       case 2:
       {
       string s1=obj.remov(s);
       cout<<"\n";
              obj.palin(s1);
              }
       break;
       case 3:
       {
       string s1=obj.reverse(s);
       cout<<s1;
       }
       break;
       case 4:exit(0);
       break;
       default: cout<<"Invalid Option";

       }//switch  
       cout<<"\n";
       }//while
}


/* Program Output

Enter a sentence 
Poor Dan is in a droop


Press 1 to check whether given string is palindrome or not 

Press 2 to remove spaces and punctuation in string, convert all the Characters to lowercase and then call above Palindrome checking function to check for a palindrome  

Press 3 to print string in reverse order 

Press 4 to exit 

Enter option : 1

String is not a palindrome


Press 1 to check whether given string is palindrome or not 

Press 2 to remove spaces and punctuation in string, convert all the Characters to lowercase and then call above Palindrome checking function to check for a palindrome  

Press 3 to print string in reverse order 

Press 4 to exit 

Enter option : 2

poordanisinadroop

String is a palindrome


Press 1 to check whether given string is palindrome or not 

Press 2 to remove spaces and punctuation in string, convert all the Characters to lowercase and then call above Palindrome checking function to check for a palindrome  

Press 3 to print string in reverse order 

Press 4 to exit 

Enter option : 3

poord a ni si naD rooP


Press 1 to check whether given string is palindrome or not 

Press 2 to remove spaces and punctuation in string, convert all the Characters to lowercase and then call above Palindrome checking function to check for a palindrome  

Press 3 to print string in reverse order 

Press 4 to exit 

Enter option : 4
*/
