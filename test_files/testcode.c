#include "main.h"


int main(void)
{
	int len = _printf("what %d", 45);
	printf("\n%d\n", len);
	len = _printf("what %r", "string");
	printf("\n%d\n", len);
	len = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	printf("\n%d\n", len);
	len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "know");
	printf("\n%d\n", len);
	return (0);
}
