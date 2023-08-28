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
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
