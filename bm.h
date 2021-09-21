//Boolean matrix to record all visited places.
//Choosing not to traverse stack for runtime efficiency.

int bm[10][10] = {{0}};

void printbm()
{
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      printf("%d ",bm[i][j]);
    }
    printf("\n");
  }
}
