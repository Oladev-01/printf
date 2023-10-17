#include "main.h"
#include <limits.h>

int main(void)
{

	int ret = printf("5*2=%d, 5*3=%i", 10, 10);
	printf("\n%d\n", ret);
	ret = _printf("5*2=%d, 5*3=%i", 10, 10);
	printf("\n%d\n\n", ret);

	ret = printf("5+2=%d, 5+3=%i", 5 + 2, 5 + 3);
	printf("\n%d\n", ret);
	ret = _printf("5+2=%d, 5+3=%i", 5 + 2, 5 + 3);
	printf("\n%d\n", ret);

	ret = printf("5-2=%d, 175-203=%i", 5 - 2, 175 - 203);
	printf("\n%d\n", ret);
	ret = _printf("5-2=%d, 175-203=%i", 5 - 2, 175 - 203);
	printf("\n%d\n", ret);

	ret = printf("5*0=%d, 74/3=%i", 5 * 0, 74 / 3);
	printf("\n%d\n", ret);
	ret = _printf("5*0=%d, 74/3=%i", 5 * 0, 74 / 3);
	printf("\n%d\n", ret);

	ret = printf("5*3=%d, 5*2=%i", 5 * 3, 10);
	printf("\n%d\n", ret);
	ret = _printf("5*3=%d, 5*2=%i", 5 * 3, 10);
	printf("\n%d\n\n", ret);

	ret = printf("5*5=%d, 10000*10000=%i", 25, 10000 * 10000);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%d, 10000*10000=%i", 25, 10000 * 10000);
	printf("\n%d\n\n", ret);

	ret = printf("%d is -ve and %i is +ve", -10, +10);
	printf("\n%d\n", ret);
	ret = _printf("%d is -ve and %i is +ve", -10, +10);
	printf("\n%d\n", ret);
	ret = printf("%d is +ve and %i is -ve", +10, -10);
	printf("\n%d\n", ret);
	ret = _printf("%d is +ve and %i is -ve", +10, -10);
	printf("\n%d\n\n", ret);

	ret = printf("5*5= %d", 2);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%d", NULL);
	printf("\n%d\n", ret);
	ret = printf("5*5=%i", 5);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%i", NULL);
	printf("\n%d\n\n", ret);

	ret = printf("5*5=%d", INT_MAX);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%d", INT_MAX);
	printf("\n%d\n", ret);
	ret = printf("5*5=%i", INT_MAX);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%i", INT_MAX);
	printf("\n%d\n\n", ret);

	ret = printf("5*5=%d", INT_MIN);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%d", INT_MIN);
	printf("\n%d\n", ret);
	ret = printf("5*5=%i", INT_MIN);
	printf("\n%d\n", ret);
	ret = _printf("5*5=%i", INT_MIN);
	printf("\n%d\n\n", ret);


	return (0);
}
