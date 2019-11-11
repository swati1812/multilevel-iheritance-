#include<iostream.h>
#include<stdio.h>

class aru
{
float a,b,c;
public :
void read_add()
{
cout<<"For addition";
cout<<"Enter the vlaue of a :";
cin>>a;
cout<<"Enter the vlaue of b :"; 
cin>>b;
c =a+b;
}

void show_add()
{
cout<<"The value of c is "<<c<<endl;
}
};


class sub : public aru
{
float a,b,c;
public :
void read_sub()
{
read_add();
cout<<"For Subtraction "<<endl;
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :"; 
cin>>b;
c =a-b;
}

void show_sub()
{
show_sub();
cout<<"The value of c is "<<c<<endl;
}
};


class mul : public sub
{
float a,b,c;
public :
void read_mul()
{
read_sub();
cout<<"For Multipication";
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :"; 
cin>>b;
c =a*b;
}

void show_mul()
{show_sub();
cout<<"The value of c is "<<c<<endl;
}
};


class div : public mul
{
float a,b,c;
public :
void read_div()
{read_mul();
cout<<"For Division";
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :"; 
cin>>b;
c =a/b;
}

void show_div()
{show_mul();
cout<<"The value of c is "<<c<<endl;
}
}d;

void main()
{
cout<<"Enter the all values "<<endl;
d.read_div();
cout<<"Show the result "<<endl;
d.show_div();
getch();
}

