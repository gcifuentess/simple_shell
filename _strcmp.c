/**
 * _strcmp - compares two strings
 *
 * @s1: is the pointer of the first string
 * @s2: is the pointer of the second string
 *
 * Return: 0 if if both strings are identical (equal)
 * negative - if the ASCII value of the first unmatched
 * character is less than second.
 * and positive - if the ASCII value of the first unmatched
 * character is greater than second.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, max, result;

	for (i = 0; s1[i] != '\0';)
		i++;
	for (j = 0; s2[j] != '\0';)
		j++;
	if (i > j)
		max = j;
	else
		max = i;
	for (i = 0; i < max; i++)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			break;
	}

	return (result);
}
