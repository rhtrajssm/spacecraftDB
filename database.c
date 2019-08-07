#include "Database.h"
#include <string.h>
#include <stdlib.h>
void presentdata()
{
strcpy(a[0]->name,"Barnard's Star");
a[0]->temp=5940;
a[0]->speed=70;
a[0]->distance=5.96;
strcpy(a[1]->name,"Lalande");
a[1]->temp=6100;
a[1]->speed=72;
a[1]->distance=8.3;

12

a[0]->link=a[1];
strcpy(a[2]->name,"Ross 248");
a[2]->temp=6425;
a[2]->speed=74;
a[2]->distance=10.32;
a[1]->link=a[2];
strcpy(a[3]->name,"Epsilon Eridani");
a[3]->temp=6650;
a[3]->speed=65;
a[3]->distance=10.52;
a[2]->link=a[3];
strcpy(a[4]->name,"Epsilon Indi");
a[4]->temp=6675;
a[4]->speed=80;
a[4]->distance=11.82;
a[3]->link=a[4];
strcpy(a[5]->name,"Tau Ceti");
a[5]->temp=5503;
a[5]->speed=68;
a[5]->distance=11.88;
a[4]->link=a[5];
strcpy(a[6]->name,"Teegarden's Star");
a[6]->temp=5650;
a[6]->speed=51;
a[6]->distance=7.5;
a[5]->link=a[6];
strcpy(a[7]->name,"Kepler-69C");
a[7]->temp=65;
a[7]->speed=85;
a[7]->distance=2700;
a[6]->link=a[7];
strcpy(a[8]->name,"Kepler-62F");
a[8]->temp=200;
a[8]->speed=69;
a[8]->distance=1200;
a[7]->link=a[8];
a[8]->link=NULL;
}