/**
 * _strcpy -code
 *
 * @dest: code
 * @src: code
 *
 * Return: code
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
