
/*
* Prints the usage of the program.
*/
void print_usage();

typedef enum {
	ENCRYPTION,
	DECRYPTION,
	INVALID_MODE = 255
} MODE;

/*
* Parses the mode given as string to a value of the MODE enum.
*
* Returns ENCRYPTION if the character is either 'e' or 'E'.
* Returns DECRYPTION if the character is either 'd' or 'D'.
* Return INVALID_MODE if any other character is given.
*/
MODE parse_mode(char* mode);

/*
* Parses the key given as string to an integer.
*
* Returns the interger value of key.
*/
int parse_key(char* key);