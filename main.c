#include <stdio.h>

#ifdef _WIN32
#error Windows is not currently supported
#elif __APPLE__

#define start data_start
#define end data_end
#define size data_size

#elif __linux__

#define start _data_start
#define end _data_end
#define size _data_size

#endif

extern char start[];

extern char end[];

extern char size[];

int main(void)
{
	char *cstart = &start;
	char *cend = &end;
	printf("address of start: %p\n", &start);
	printf("address of end: %p\n", &end);
	printf("size: %p\n", &size);
	printf("size from addresses: %p\n", cend - cstart);

	for (char *p = start; p != end; ++p)
	{
		putchar(*p);
	}

	return 0;
}
