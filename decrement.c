#include <stdio.h>
#include "defs.h"

int main (int argc, char *argv[])
{
	if (argc < 2) {
		printf("please provide an arg\n");
		return 0;
	}

	int num = 0;

	char *num_str = argv[1];
	while (*num_str != '\0'){
		num = (num * 10) + (*num_str++ - '0');
	}
	printf("your arg is %d\n", num);

	int one_less = sub_one(num);
	printf("decremented: %d\n", one_less);
	return 0;
}
