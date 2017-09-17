#include <stdio.h>

int main()
{
	char a;
	float cel, kelv, faren, c;
	scanf("$ tconvert c %f %g", &c, &a);
	switch (a)
	{
	case 'F':
		cel = 0.56*(c - 32);
		kelv = cel + 273;
		printf("%f C\n", cel);
		printf("%f K\n", kelv);
	case 'K':
		cel = 273 - c;
		faren = 1.8*cel + 32;
		printf("%f C\n", cel);
		printf("%f F\n", faren);
	case 'C':
		faren = 1.8*c + 32;
		kelv = c + 273;
		printf("%f F\n", faren);
		printf("%f K\n", kelv);
	default:
		cel = c;
		kelv = cel + 273;
		faren = cel*1.8 + 32;
		printf("%f C:\n", cel);
		printf("%f F\n", faren);
		printf("%f K\n", kelv);

		faren = c;
		cel = 0.56*(faren - 32);
		kelv = cel + 273;
		printf("%f F:\n", faren);
		printf("%f K\n", kelv);
		printf("%f C\n", cel);

		kelv = c;
		cel = 273 - kelv;
		faren = 1.8*cel + 32;
		printf("%f K:\n", kelv);
		printf("%f C\n", cel);
		printf("%f F\n", faren);
	}
	return 0;