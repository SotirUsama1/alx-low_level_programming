/**
 * reverse_array - reverse array containing n elements
 *
 * @a: array
 * @n: number of elements
 *
 * Return: 0
*/
void reverse_array(int *a, int n)
{
	int temp[], i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
