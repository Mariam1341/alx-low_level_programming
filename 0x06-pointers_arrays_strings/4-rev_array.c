/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a : pointer to the array
 * @s2 : pointer to length of the array
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	while (i != j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
