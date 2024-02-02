#include<stdio.h>
int main()
{
	int sum = 0, i, j;
	for( i = 0 ; i <= 9 ; i++ )
	{
		for( j = 0 ; j <= 9 ; j++ )
		{
			if(i == j) continue;
			int num[4];
			int a = 0, b = 0, c, d;
			for( c = 0; c < 4; c++ )
			{
				for( d = 0; d < 4; d++ )
				{
					if(c == d) num[d] = i;
					else       num[d] = j;
				}
				int e = num[3] * 1000 + num[2] * 100 + num[1] * 10 + num[0];
				int f = e / 100, g = e % 100;
				if( 1 <= f && f <= 12 && 1 <= g && g < 31) a++;
				if( 0 <= f && f <= 23 && 0 <= g && g < 60) b++;
			}
			sum += 4 * a * b;
        }
	}
    printf("%d",sum);
	return 0;
} 
