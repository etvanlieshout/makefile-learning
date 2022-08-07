#include <defs.h>

int sub_one(int x)
{
	int one_less;
	one_less = add_one(x) - 2;
	return one_less;
}
