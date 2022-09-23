/**
 **infinite_add - adds two numbers.
 *
 * @n1 : pointer to the 1st number
 * @n2 : pointer to the 2nd number
 * @r :  buffer that the function will use to store the result
 * @size_r : the buffer size
 *
 * Return : pointer to the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, size_b, size_s, k, sum, plus;
	
	for (i = 0; n1[i] != '\0'; i++);
	for (j = 0; n2[j] != '\0'; j++);
	if (i > j)
	{
		size_b = i;
		size_s = j;
	}
	else
	{
		size_b = j;
		size_s = i;
	}
	for (k = 0; k < size_r; k++)
	{
		if (n1[k] == '\0' && n2[k] == '\0')
			break;
		sum = (int) n1[k] + (int) n2[k] - 2 * 48 + plus; 
		plus = 0;
		if (sum > 9)
		{
			plus = 1; 
		}
		r[k] = (char) sum;
	}
	if (n1[k] != '\0' || n2[k] != '\0')
		return (0);
	return (r);	
}
