//Вариант 1.
//Определить количество слов в тексте, если слова разделены произвольным количеством символов.

#include <iostream>
#include <stdio.h>
#include <cstring>

int sizestr( char* str );
using namespace std;

int main()
{
    const int L = 256;
    char str[L];
    cout << "\nEnter String: " << endl;
    gets( str );

    int len;
    len = sizestr( str );
    int N = 1;
    for ( int i = 0; i < len; ++i )
    {
        if(( str[i] == ' ' )&&( str[i+1] != ' ' ) ) N += 1;
    }

    cout << "Number of words: " << N << endl;
    return 0;
}

int sizestr( char* str )
{
    int count=0;
    while( *str++ )
    {
        ++count;
    }
    return count;
}

