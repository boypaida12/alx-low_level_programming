/**
 * _strchr - returns a pointer to the first occurence of
 * one character in another string or null if character not found
 * @s: string for character to be located
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
