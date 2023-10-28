#include "main.h"


int main(void)
{
	int len = _printf("what %d", 45);
	printf("\n%d\n", len);
	len = _printf("what %r", "string");
	printf("\n%d\n", len);
	return (0);
}
