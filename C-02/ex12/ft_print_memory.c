#include <unistd.h>
#include <stdio.h>

void ft_putchar(char value)
{
    write(1, &value, 1);
}

void ft_base16(unsigned long nb, int count)
{
    char *alpha;
    alpha = "0123456789abcdef";
	if (nb > 15)
	{
        count++;
		ft_base16(nb / 16, count);
		ft_base16(nb % 16, count);
	}
	else
    {
        if (count == 0)
        {
            ft_putchar('0');
        }
		ft_putchar(alpha[nb]);
    }
}

void ft_print_address(void *addr)
{
    int				count;
	unsigned long	arg2;
	arg2 = (unsigned long)addr;
    ft_base16(arg2, 0);
}

void ft_print_phrase(int i, char * str)
{

}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *test = (char*)addr;
    if (size)
    {
        int i = 0;
        while (test[i])
        {
            if (i % 16 == 0) /* L’adresse en hexadécimal du premier caractère de la ligne suivi d’un ’ :’. */
            {
                ft_print_phrase(i, test);
                ft_putchar('\n');
                ft_print_address(&test[i]);
                ft_putchar(':');
                ft_putchar(' ');
                ft_base16(test[i],0);
                ft_base16(test[i + 1],0);
                ft_putchar(' ');
            }
            else
            {
                ft_base16(test[i],0);
                ft_base16(test[i + 1],0);
                ft_putchar(' ');
            }
            i+=2;
        }
    }
    else
    {
        ft_putchar('\n');
    }
    
}

int main(void)
{
    char *str =  "Bonjour les aminches\n\n\nc\n est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n ";
    printf("addresse: %p",str);
    ft_print_memory(str,1);
    return 0;
}