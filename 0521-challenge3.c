/**
2	 * main - sum of all numbers from (1-100)
3	 * @i: sum of parameters
4	 * Return: Always 0
5	*/
6	
7	int main(void)
8	{
9	  int sum = 0;
10	  int i = 1;
11	  
12	  while (i <= 100)
13	  {
14	    if (i % 2 == 0)
15	    {
16	      sum += i;
17	    }
18	    i++;
19	  }
20	  
21	  printf("sum of even numbers from 1 to 100: %d\n", sum);
22	  return 0;
23	}
