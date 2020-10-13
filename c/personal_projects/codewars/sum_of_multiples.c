

int findSum (int n)
{
  int multiples = 0;
  
  for(int i = 0; i <= n; i++)
  {
    for(int j = 0; j <= n; j++)
    {
      if(j % 3 == 0)
      {
        multiples += j;
      }
    }
    if(i % 5 == 0)
    {
      multiples += i;
    }
  }
  return multiples;
}
