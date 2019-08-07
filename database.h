#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
typedef struct data
{
char name[30];
float temp;
float speed;
float distance;
struct data *link;
}*datapointer;
datapointer a[12],first,last;
void presentdata();
#endif // DATABASE_H_INCLUDED