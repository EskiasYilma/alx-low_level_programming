/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (j < n)
	{
		s[i] = b;
		i++;
		j++;
	}
	
	return (s);
}
