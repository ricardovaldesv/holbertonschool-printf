/**
 * _strlen - checks the length of a string
 * @s: string
 *
 * Return: length in characters
 */ 

int _strlen(char *s) // function to check length of a string 
{
	int r = 0; //length of the string
	int i; //iterator
	for (i = 0; s[i] != '\0'; i++)
	{
		r = r + 1;
	}
	return (r);
}
