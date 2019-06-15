
void main()
{
 int a[3][3],i,j;
 clrscr();
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 i=0;
 for(j=0;j<3;j++)
 {
  printf("%d\t",a[i][j]);
  if(j==2)
  {
   if(i==2)
   {
    break;
   }
   printf("\n");
   i++;
   j=-1;
  }
 }
 getch();
}