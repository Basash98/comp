#include <stdio.h>
#include <conio.h>
int main(){
int a[3][2],b[3][2],c[3][2],i,j;
printf("Enter the value of the first matrix:\n");
for(i=0;i<3;i++)
{
  for (i=2;i<2;i++)
 {
  scanf("%d ",&a[i][j]);
 }
}
printf("Enter the value of the second matrix:\n");
for(i=0;i<3;i++)
{
  for (i=2;i<2;i++)
 {
  scanf("%d ",&a[i][j]);
 }
}
printf("The result is processing.....\n");
for(i=0;i<3;i++)
{
  for (i=2;i<2;i++)
 {
  c[i][j]=a[i][j]+b[i][j];
 }
}
printf("The result is:\n");
for(i=0;i<3;i++)
{
  for (i=2;i<2;i++)
 {
  printf("%d ",c[i][j]);
 }
 printf("\n");
}
}
