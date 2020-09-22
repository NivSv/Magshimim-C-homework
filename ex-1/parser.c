MODE parse_mode(char* mode)
{
	if(mode == 'e' || mode == 'E')
	{
		return ENCRYPTION;
	}
	if(mode == 'd' || mode == 'D')
	{
		return DECRYPTION;
	}
	return INVALID_MODE;
}

int parse_key(char* key)
{
	int newkey=0;
	newkey = (int)key
	return newkey;
}

void print_usage()
{
	printf("‫>‪./ceasar<mode><message><key‬‬>");
}