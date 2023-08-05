/**
 * get_endianness - Checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int long endianness = 5 << 8 == 0 ? 0 : 1;
	return (endianness);
}
