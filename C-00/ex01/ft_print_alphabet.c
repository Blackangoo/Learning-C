#include <unistd.h>

void ft_print_alphabet(int number)
{   
    if (number == 1){
        for (int i = 97; i < 123; i++)
            write(1, &i, 1);
    }
    else if (number == 2){
        for (int i = 65; i < 91; i++)
            write(1, &i, 1);
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_alphabet(1);
}