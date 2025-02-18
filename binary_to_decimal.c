#include <stdio.h>
#include <math.h>
int main()
{
  int hi=0;
  int trial[5];
  int a;
  int res;
  int deci = 0;
  int lenght = 4;
  int i;
  int binaryNum[4]={1,1,1,0}; //Change input manually
  int changer =sizeof(binaryNum) / sizeof(binaryNum[0]);
    for(a = changer;a > 0;a--)
    {
      trial[hi] = binaryNum[a-1];
      hi ++;
    }
    for(i=0;i<lenght;i++)
    {
      res=pow(2,i);
      deci += trial[i]*res;
    }
  printf("%d is the answer",deci);   
}
