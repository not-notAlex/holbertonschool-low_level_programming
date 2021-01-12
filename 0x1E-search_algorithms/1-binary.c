#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, x, min = 0, max = size - 1;
	char *sep = "";

	if (array == NULL)
		return (-1);

	i = max / 2;
	while (max >= min)
	{
		sep = "";
		printf("Searching in array: ");
		for (x = min; x <= max; x++)
		{
			printf("%s", sep);
			sep = ", ";
			printf("%d", x);
		}
		printf("\n");
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			max = ((min + max) / 2) - 1;
			i = (min + max) / 2;
		}
		else
		{
			min = ((min + max) / 2) + 1;
			i = (min + max) / 2;
		}
	}

	return (-1);
}
