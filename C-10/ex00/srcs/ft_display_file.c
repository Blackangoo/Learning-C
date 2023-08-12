#include <unistd.h>
#include <fcntl.h> /*more info on https://pubs.opengroup.org/onlinepubs/7908799/xsh/fcntl.h.html*/

void ft_display_file(char *filename)
{
    int fd;
    char buffer[100];
    ssize_t bytes_read;

    fd = open(filename, O_RDONLY); /*open returns a non-negative integer representing the lowest numbered unused file descriptor*/
    if (fd == -1)
    {
        write(2,"Cannot read file.\n",18);
        return;
    }
    while ((bytes_read = read(fd, buffer, 100)) > 0) /*read returns a non-negative integer indicating the number of bytes actually read*/
    {
        write(1, buffer, bytes_read);
    }
    close(fd);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        if (argc == 1)
            write(2,"File name missing.\n",19);
        else
            write(2,"Too many arguments.\n",20);
        return(1);
    }
    ft_display_file(argv[1]);
    return(0);
}