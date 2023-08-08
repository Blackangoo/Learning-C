#ifndef FT_BOOLEAN_H
    #define FT_BOOLEAN_H

    #include <unistd.h>

    #define EVEN_MSG "I have an even number of arguments.\n"
    #define ODD_MSG "I have an odd number of arguments.\n"
    #define SUCCESS 0

    #define EVEN(nbr) nbr = (nbr % 2) == 0 ? 1 : 0

    enum e_bool
    {
        FALSE,
        TRUE
    };

    typedef enum e_bool	t_bool;

    void ft_pustr(char *str);
    t_bool ft_is_even(int nbr);

#endif

/*#include "ft_boolean.h"
void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}*/