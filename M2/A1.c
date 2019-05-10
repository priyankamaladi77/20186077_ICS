#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	/* code */
	printf("length of Char %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("length of int %d to %d\n", INT_MIN, INT_MAX);
	printf("length of Long %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("length of Float %f to %f\n", -FLT_MAX, FLT_MAX);
	printf("length of Double %f to %f\n", -DBL_MAX, DBL_MAX);
	return 0;
}