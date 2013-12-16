//Вариант 1.
//Определить количество слов в тексте, если слова разделены произвольным количеством символов.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{
    const int L = 256;
    char str[L];
    cout << "\nEnter String: " << endl;
    gets(str);

    size_t strlen( const char *string );

    char len;
    len = strlen(str);
    int N = 1;
    for ( int i = 0; i < len; ++i)
    {
        if(( str[i] == ' ' ) && ( str[i+1] != ' ' ) ) N += 1;
    }

    cout << "Number of words: " << N << endl;
    return 0;
}
