/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: acceptable bytes
 * Return: prefix substring length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l, j, a;

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		a = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				a++;
				i++;
				j++;
			}
		}
		if (a == 0)
			return (1);
		i++;
	}
		return (l);
}
