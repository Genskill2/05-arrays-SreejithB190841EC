#include <stdio.h>
#include<math.h>

int max(int a[],int n)
{
  int l=0;
  for(int i=0;i<n;i++)
  {
    if(l<a[i])
      l=a[i];
  }
  return l;
}

int min(int a[],int n)
{
  int s=5000;
  for(int i=0;i<n;i++)
  {
    if(s>a[i])
      s=a[i];
  }
  return s;
}

float average(int a[],int n)
{
  float avg=0;
  for(int i=0;i<n;i++)
    avg+=a[i];
  avg=(float)avg/n;
  return avg;
}

int mode(int a[], int n)
{
  int m=max(a,n),l=0,j;
  int count[m];
  for(int i=0;i<m;i++)
    count[i]=0;
  for(int i=0;i<n;i++)
    count[a[i]]++;
  for(int i=0;i<m;i++)
    if(l<count[i])
    {
      l=count[i];
      j=i;
    }
  return j;
}

int factors(int n, int a[])
{
  int c=0,f;int b[n/2];
  for(int i=2;i<=n/2;i++)
    {
      f=1;
      for(int j=2;j<=i/2;j++)
        if(i%j==0)
        {
          f=0;
          break;
        }
      if(f)
      {
        b[c++]=i;
      }
    }
  f=c;c=0;
  for(int i=0;i<f;i++)
  {
      while(n%b[i]==0)
      {
         a[c++]=b[i]; 
         n/=b[i];
      }
  }
  return c;
}
