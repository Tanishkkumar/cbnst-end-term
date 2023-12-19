#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f1(x,y,z) (17-y+2*z)/20
#define f2(x,y,z) (-18-3*x+z)/20
#define f3(x,y,z) (25-2*x+3*y)/20

#define e 0.0001
int main(){
    int count=0;
    float x1,y1,z1,x0=0,y0=0,z0=0,e1,e2,e3;
    do{
        x1=f1(x0,y0,z0);
        y1=f2(x1,y0,z0);
        z1=f3(x1,y1,z0);
        e1=fabs(x0-x1);
        e2=fabs(y0-y1);
        e3=fabs(z0-z1);
        x0=x1;
        y0=y1;
        z0=z1;
        count++;
    }while(e1>e && e2>e && e3>e);
    printf("x1=> %.1f\ny1=> %.1f\nz1=> %.1f ",x1,y1,z1);
    return 0;
}