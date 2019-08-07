#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "Database.h"
typedef struct node
{
float distance;
float lambda;
float temperature;
}inputpointer;
datapointer search(inputpointer s,datapointer *first)
{
datapointer t;
t=(datapointer)malloc(sizeof(struct data));
t=*first;
while(t)
{
if(s.distance==t->distance)
return t;
t=t->link;
}
t=*first;
while(t)
{
if(s.temperature==t->temp && s.distance != t->distance)
{
t->distance=s.distance;
return t;
}
t=t->link;
}
return NULL;
}
void add(inputpointer s,char *n,float v)
{
datapointer t;
t=(datapointer)malloc(sizeof(struct data));
strcpy(t->name,n);
t->temp=s.temperature;
t->speed=v;
t->distance=s.distance;
t->link=NULL;
last->link=t;
last=t;
}
float calculate(inputpointer s)
{
s.temperature=2898000/s.lambda;
return s.temperature;
}
float newdistance(datapointer *f,float time)
{
(*f)->distance=(*f)->distance+(((*f)->speed)*time*1.057e-13);
return (*f)->distance;
}
void display(datapointer t,inputpointer s)
{
if((t->distance)>=450)
{
printf("\nIt seems to be PLANET.\n");
printf("\nName of Planet: ");
puts(t->name);
printf("\n");
printf("\nDISTANCE: %.2f ly\n",t->distance);
printf("\nTEMPERATURE of it's Surface is %.2f\n",t->temp);
printf("\nWAVELENGTH of RADIATION emitted by PLANET: %.2f nm\n",s.lambda);
}
else
{
printf("\nIt seems to be STAR.\n");
printf("\nName of STAR: ");
puts(t->name);
printf("\n");
printf("\nDISTANCE: %.2f ly\n",t->distance);
printf("\nTEMPERATURE of it's Surface is %.2f\n",t->temp);
printf("\nWAVELENGTH of RADIATION emitted by STAR: %.2f nm\n",s.lambda);
}
}
int main()
{
int i;
float time;
for(i=0;i<9;i++)
a[i]=(datapointer)malloc(sizeof(struct data));
presentdata();
first=a[0];last=a[8];
inputpointer s;
datapointer f;
char name[30];
float speed;
int ch=1;
while(ch!=0)
{
Sleep(100);
for(printf("Signal Recieving"),i=0;i<10;i++,printf("Signal Recieving"))
{
printf(".");Sleep(100);printf(".");Sleep(100);printf(".");Sleep(100);
system("cls");
}
printf("\n");
scanf("%f%f",&s.distance,&s.lambda);
s.temperature=calculate(s);
printf("\nSearching from Database in process");
for(i=0;i<11;i++)
{
printf(".");Sleep(100);printf("\b");printf("..");Sleep(100);printf("\b\b");printf("...");Sleep(100);printf("\b\b\b");
}
printf("\n");
f=search(s,&first);
if(!f)
{
printf("\nNew Heavenly Body detected\n");
printf("\nSuggest a name to this Heavenly Body\n");
scanf("%s",name);
printf("\nChecking speed");
for(i=0;i<11;i++)
{
printf(".");Sleep(300);printf("\b");printf("..");Sleep(300);printf("\b\b");printf("...");Sleep(300);printf("\b\b\b");
}
printf("\n");
scanf("%f",&speed);
add(s,name,speed);
printf("\nInformation successfully saved in Database\n");
}
else
{
printf("\nHeavenly body found in Database..\n");
printf("\nGetting details");
for(i=0;i<11;i++)
{
printf(".");Sleep(300);printf("\b");printf("..");Sleep(300);printf("\b\b");printf("...");Sleep(300);printf("\b\b\b");
}
printf("\n");
printf("Old details...");
display(f,s);
printf("Give Time Passed:");
scanf("%f",&time);
f->distance=newdistance(&f,time);
printf("\nDatabase Updated Successfully.\n");Sleep(100);
printf("\nFetching New Details");
for(i=0;i<11;i++)
{
printf(".");Sleep(300);printf("\b");printf("..");Sleep(300);printf("\b\b");printf("...");Sleep(300);printf("\b\b\b");
}
printf("\n");
display(f,s);
}
printf("\nNew Heavenly Body seen???(1/0)\n");
scanf("%d",&ch);
}
return 0;
}