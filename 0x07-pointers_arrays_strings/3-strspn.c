/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: acceptable bytes
 * Return: prefix substring length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
		s++;
	}
	return (i);
}
