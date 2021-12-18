#include <unistd.h>

int ft_strlen (char *str)
{
    int i ;
     i = 0;
     while (str[i])
        i++;
    return i;
}

void rev_word(char * str, int(*lol)(char *) )
{
    int len = lol(str)- 1;


    while (len >= 0 )
    {
        write(1, &str[len], 1);    
        len--;
    }
}

int main ()
{
    void(*ft [5])(char *);

    ft[0] = &ft_strlen;

    rev_word("hola mundo", ft[0]);
    return (0);

}