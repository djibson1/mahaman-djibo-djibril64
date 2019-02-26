//* #mohamed boubacar yasmina

#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main (void)

{
    long long num;
    int c=0;
do
{
    num=get_long_long("card num");
}
    while (num<0);
long long maf = num;
while(maf>0)
{
    maf=maf/10;
    c++;
}
  if(c!=13 && c!=15 && c!=16)
  {
      printf(" invalid card num");
  }
  maf = num ;
  int s=0;
  
for(int i=1; i<=c; i++)
{
    int u =maf%10;
 if (i%2==0)
 {
     u=u*2;
 }
 if(i%2!=0)
 {
     u=u*1;
 }
 if(u>9)
 {
     u=u-9;
 }

 s=s+u;
 maf=maf/10;
}
 if (s%10!=0)
 {
    printf("invalid card");
 }

else
{
    printf("card valid  ");
}
maf=num;
while (maf>100)
{
    maf=maf/10;
}
int cd = maf;
if ((cd==34 ||cd==37)&&( c ==15))
{
    printf(" Amex ");
}
else if ((cd>50 && cd<56&&c==16))
{

    printf(" Mastercard");
}
else if ((cd/10==4 )&&(c==13 || c==16))
{
printf(" visa");
}
else
{
    printf("from another bank");
}
}

