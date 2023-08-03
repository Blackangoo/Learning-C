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
	unsigned long	arg2;
	arg2 = (unsigned long)addr;
    ft_base16(arg2, 0);
}

void ft_print_phrase(int count, int limit, char * str)
{
    if (count != 0)
    {
        int j = (count - 1) * 16;
        while (j < limit)
        {
            if (str[j] >= 32 && str[j] <= 126)
            {
                ft_putchar(str[j]);
            }
            else
            {
                ft_putchar('.');
            }
            
            j++;
        }
        
    }
    
}

void ft_print_content(char first, int i)
{
    ft_base16(first,0);
    if (i % 2 == 1)
    {
        ft_putchar(' ');
    }

}

void ft_print_address_main(char chara)
{
    ft_putchar('\n');
    ft_print_address(&chara);
    ft_putchar(':');
    ft_putchar(' ');
}

void ft_complete_content(int i)
{
    ft_putchar('0');
    ft_putchar('0');
    ft_putchar(' ');
    while (i % 16 != 0)
    {
        ft_putchar(' ');
        i++;
    }
    
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int count = 0;
    char *test = (char*)addr;
    if (size)
    {
        int i = 0;
        while (test[i])
        {
            if (i % 16 == 0) /* L’adresse en hexadécimal du premier caractère de la ligne suivi d’un ’ :’. */
            {
                ft_print_phrase(count, i , test);
                count +=1;
                ft_print_address_main(test[i]);
                ft_print_content(test[i], i);
            }
            else
            {
                ft_print_content(test[i], i);
            }

            i++;
        }
        ft_complete_content(i);
        ft_print_phrase(count, i + 1, test);
        ft_putchar('\n');
        return(addr);
    }
    else
    {
        ft_putchar('\n');
        return(addr);
    }
}
/*
int main(void)
{
    char *str =  "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol\nlol\n \0";
    ft_print_memory(str,1);
    return 0;
}*/