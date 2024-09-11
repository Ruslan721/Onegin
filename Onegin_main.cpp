
#include <stdio.h>
#include <assert.h>

void Onegin_Manager();


int main()
{
    Onegin_Manager();

    return 0;
}

void Onegin_Manager()
{
    char ch = 0;

    fgets(ch, 5, Head_and_shoulders);

    fputs(ch, inp);

    /*int ch;

    FILE * fp;

    fp = fopen(Head_and_shoulders.txt , "r");
    assert(fp != NULL);

    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);  */
}
