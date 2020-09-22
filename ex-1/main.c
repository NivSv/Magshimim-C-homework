#include <stdio.h>
#include <stdlib.h>
#include <"parser.h">
#include <"ceasar.h">

int main(int argc, char* argv[]) 
{
	int key=0;
	if(parse_mode(argv[1]) == ENCRYPTION)
	{
		key=parse_key(argv[3]);
		printf("%s",shift_string(argv[2], key));
	}
	else if(parse_mode(argv[1]) == DECRYPTION)
	{
		key=parse_key(argv[3]);
		key = key*-1;
		printf("%s",shift_string(argv[2], key));
	}
	else
	{
		print_usage();
	}
}