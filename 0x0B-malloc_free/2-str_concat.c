char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, k;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++);
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++);

	char *s = malloc(i +j);
	if (i == 1)
		s[0] = ' ';
	else
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
	if (j == 1)
		s[i + 1] = ' ';
	else
		for (k = 0; s2[k] != '\0'; k++)
			s[i + k] = s2[k];
	return (s);
}
