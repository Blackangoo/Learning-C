#include "../includes/do_op.h"

int ft_check(int i_operator, char *n2)
{
    if (ft_atoi(n2) == 0 && (i_operator == 2 || i_operator == 4))
    {
        if (i_operator == 2)
        {
            ft_putstr("Stop : division by zero");
            return(0);
        }
        ft_putstr("Stop : modulo by zero");
        return(0);
    }
    return(1);
}

int get_operator(char *operator)
{
    char *operators_list;
    int i;

    operators_list = "+-/*%";
    i = 0;
    while (operators_list[i])
    {
        if (operators_list[i] == operator[0] && operator[1] == '\0')
            return(i);
        i++;
    }
    return(-1);
}

void do_op(char *n1, char *operator, char *n2)
{
    int (*operators[5])(int,int);
    int i_operator;

    operators[0] = add;
    operators[1] = sub;
    operators[2] = times;
    operators[3] = divide;
    operators[4] = modulo;

    if ((i_operator = get_operator(operator)) != -1)
    {
        if (ft_check(i_operator, n2))
            ft_putnbr(operators[i_operator](ft_atoi(n1), ft_atoi(n2)));
        ft_putchar('\n');
    }
    else
    {
        ft_putnbr(0);
        ft_putchar('\n');
    }
}