
/*
* Checks whether the given character is a valid letter.
*
* Returns zero if the letter is not valid, nonzero otherwise.
*/
int is_valid_letter(char ch);

/*
* Shifts ch by offset if ch is a valid letter.
*
* Returns the shifted letter.
*/
char shift_letter(char ch, int offset);

/*
* Shifts every character in str by offset.
*/
void shift_string(char* str, int offset);
