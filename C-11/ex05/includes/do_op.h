#ifndef DO_OP_H
    #define DO_OP_H
    #include <unistd.h>

    int ft_signe(char *str);
    int ft_atoi(char *str);
    void ft_putchar(char c);
    void ft_putnbr(int nb);
    void ft_putstr(char *str);
    int add(int a, int b);
    int sub(int a , int b);
    int times(int a, int b);
    int divide(int a , int b);
    int modulo(int a, int b);
    int ft_check(int i_operator, char *n2);
    int get_operator(char *operator);
    void do_op(char *n1, char *operator, char *n2);
#endif