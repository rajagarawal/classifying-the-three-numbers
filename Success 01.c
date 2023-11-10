#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the 1st marks obtained:");
    scanf("%d",&a);
    printf("enter the 2nd marks obtained:");
    scanf("%d",&b);
    printf("enter the 3rd marks obtained:");
    scanf("%d",&c);
    int f ;
    f=a+b+c;
    printf("%d is average of 1st,2nd and 3rd values\n",f/3);
    
    if ((a ==b) && (a>c) )
    {printf("the value of 1st and 2nd marks is higher than 3rd \n ");
	}
    if ((a ==b) && (a<c))
    {printf("the value of 1st and 2nd marks is lower than 3rd \n");
	}
    if ((b ==c)  && (b>a))
    {printf("the value of 3rd and 2nd marks is higher than 1st\n");
	}
    if ( (b ==c) && (b<a))
    {printf("the value of 3rd and 2nd marks is lower than 1st \n");
	}
    if ((c ==a)  && (c>b))
    {printf("the value of 1st and 3rd marks is higher than 2nd\n ");
	}
    if ((c ==a)  && (c<b))
    {printf("the value of 1st and 3rd marks islower than 2nd\n ");
    }

if (a>b)
{printf("value of 1st is greater than 2nd\n");
}
if (a<b)
{printf("value of 2nd is greater than 1st\n");
}
if (b>c)
{printf("value of 2nd is greater than 3rd\n");
}
if (b<c)
{printf("value of 3rd is greater than 2nd\n");
}
if (c>a)
{printf("value of 3rd is greater than 1st\n");
}
if (c<a)
{printf("value of 1st is greater than 3rd\n");
}
if (a==b)
{printf("value of 1st and 2nd is same\n"); /*unwanted result*/
}
if (c==b)
{printf("value of 3rd and 2nd is same\n"); /*unwanted result*/
}
if (a==c)
{printf("value of 1st and 3rd is same\n"); /*unwanted result*/
}
if ((a==b) && (b==c) && (c==a))
{printf("value of 1st and 2nd and 3rd is same\n");
}
}