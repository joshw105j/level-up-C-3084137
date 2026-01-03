#include <stdio.h>

char *ordinal(int v)
{
	/*
	 the function needs to return the appropriate suffix for the given integer v
	 */
	static char ordinal_suffix[3];

	if (v % 10 == 1)
	{
		sprintf(ordinal_suffix, "st");
	}
	else if (v % 10 == 2)
	{
		sprintf(ordinal_suffix, "nd");
	}
	else if (v % 10 == 3)
	{
		sprintf(ordinal_suffix, "rd");
	}
	else
	{
		sprintf(ordinal_suffix, "th");
	}

	return ordinal_suffix;
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	printf("\n this is actually my code");

	return (0);
}
