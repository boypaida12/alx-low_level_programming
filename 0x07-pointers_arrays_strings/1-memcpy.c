/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area source
 * @dest: memory area destination
 * @n: bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
