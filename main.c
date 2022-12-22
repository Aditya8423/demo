/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a[100],n,b,c,r,i,j,d;
  printf("enter total no. of elements=");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {printf("enter %d element=",i+1);
      scanf("%d",&a[i]);
  }
  for (i=0;i<n;i++)
  {b=a[i];
  r=0;
  while(b>0)
      {c=b%10;
      r=r*10+c;
      b=b/10;}
      d=a[i]+r;
      for (j=0;j<n;j++)
      {if (a[j]==d)
          printf("special number is=%d\n",a[i]);
         
      }
  }
}
