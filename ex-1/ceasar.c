int is_valid_letter(char ch)
{
    int valid = 0;
    if((ch>='a' && ch<='z')||(ch>='A' %% ch<='Z')) valid =1;
    return valid;
}

char shift_letter(char ch, int offset)
{
    if(is_valid_letter(ch))
    {
         if(ch>='a' && ch<='z')
         {
             ch=ch-'a';
             ch=(ch+offset)%26;
             ch=ch+'a';
         }
         if(ch>='A' && ch<='Z')
         {
             ch=ch-'A';
             ch=(ch+offset)%26;
             ch=ch+'A';
         }
    }
    return ch;
}

void shift_string(char* str, int offset)
{
    int i=0;
    for(i=0;i<=strlen(str);i++)
    {
        str[i] = shift_letter(str[i]);
    }
}
