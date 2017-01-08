#include<stdio.h>
int gcd(int a,int b)
{ if (b==0)
	return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,i,j,c1,a,b,c,c2,temp,st,g,min;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
	{ scanf("%d%d%d",&a,&b,&c);
		if (a<b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		g=gcd(a,b);
		if (c>a && c>b)
		{ printf("-1\n");
			continue;
		}
		else if (c==a || c==b)
		{ printf("1\n");
			continue;
		}
		else if (c==0)
		{ printf("0\n");
			continue;
		}
		else if (c%g!=0)
		{ printf("-1\n");
			continue;
		}
		else
		{  
			c1=0;
			c2=b;
			st=1;
			while(c1!=c && c2!=c)
			{ if (a-c1>=b)
				{ c1=c1+c2;
				c2=b;
				st=st+2;
				if (c1==c)
					{ st--;
					break;
					}
				}
				else
				{  c2=b-(a-c1);
					c1=a;
					st++;
					if (c2==c)
					{ break;
					}
					else
					{ c1=0;
						st++;
					}
				}
			}
			c1=a;
			min=st;
			st=1;
			c2=0;
			temp=0;
			while(c1!=c && c2!=c)
			{ if (temp==1)
				{ temp=0;
					c1=c1-(b-c2);
					st++;
					if (c1==c)
						break;
					else
					{ c2=0;
						st++;
					}

				}
				
				else if (c1-b>=0)
				{ c1=c1-b;
					c2=0;
					st=st+2;
					if (c1==c)
					{ st--;
						break;
					}
				}
				else
				{ c2=c1;
					temp=1;
					c1=0;
					st++;
					if (c2==c)
					{ break;
					}
					else
					{ c1=a;
						st++;
					}
				}
			}
			if (min>st)
				min=st;
			printf("%d\n",min);
		}
	}
	return 0;
}

