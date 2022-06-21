/**
 * _memset - fills n bytes of the memory area pointed to with constant byte
 * @s: memory ara
 * @b: constant byte
 * @n: int n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
