#include <iostream>
using namespace std;

struct WORD
{
    char* str;	
    int count;	
};

int max_of_words = 10;		
int num_of_words = 0;		
WORD *words = NULL;			

int FindWords(const char *s);
void Increase();
void CountWords(char *s);
void ShowWords();
void RemoveAll();

int main()
{
    words = new WORD[max_of_words];
    memset(words, 0, sizeof(WORD) * max_of_words);

    cout << "char number _____end ctal+f5.\n";
    char buffer[128];
    while( cin >> buffer )
        CountWords(buffer);
    ShowWords();
    RemoveAll();

    return 0;
}

void CountWords(char *s)
{
    int index = FindWords(s);
    if( index == -1 )
    {
        if( num_of_words == max_of_words )
            Increase();
        else
        {
            words[num_of_words].str = new char[strlen(s) + 1];
            strcpy(words[num_of_words].str, s);
            words[num_of_words].count = 1;
            num_of_words++;
        }
    }
    else
    {
        words[index].count++;
    }
}

int FindWords(const char *s)
{
    for(int i= 0 ; i<num_of_words ; i++)
        if( strcmp(words[i].str, s) == 0 )
            return i;
    return -1;				
}

void Increase()
{
    max_of_words += 10;

    WORD *tmp = words;
    words = new WORD[max_of_words];		 
    memcpy(words, tmp, sizeof(WORD) * num_of_words);
    delete [] tmp;
}

void ShowWords()
{
    for(int i=0 ; i<num_of_words ; i++)
        cout << words[i].str << " : " << words[i].count << "\n";
}

void RemoveAll()
{
    for(int i=0 ; i<num_of_words ; i++)
        delete [] words[i].str;
    delete [] words;
}
