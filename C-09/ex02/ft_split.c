int ft_strlen(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

int ft_strcmp(char *s1, char *s2, int size)
{
    int i;
    i = 0;
    while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < size - 1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int ft_count_words_in_str(char *str, char *charset)
{
    int i;
    int word;
    int len_current_word;

    i = 0;
    word = 0;
    len_current_word = 0;
    while (str[i])
    {
        if (ft_strcmp(&(str[i]), charset, ft_strlen(charset)) == 0)
        {
            i = i + ft_strlen(charset);
            len_current_word = 0;
        }
        else
        {
            if (len_current_word == 0)
                word++;
            len_current_word++;
            i++;
        }
    }
    return(word);
}

char *ft_strdup(char *src)
{
    char *copy;
    int i_src;
    int i_copy;

    i_src = 0;
    i_copy = 0;
    while (src[i_src])
        i_src++;
    copy = (char *) malloc((i_src + 1) * sizeof(char));
    if (!copy)
        return("NULL");
    while (src[i_copy])
    {
        copy[i_copy] = src[i_copy];
        i_copy++;
    }
    copy[i_copy] = '\0';
    return(copy);
}

char **ft_split(char *str, char *charset)
{
    char** words;
    int i;
    int nb_words;

    nb_words = ft_count_words_in_str(str,charset);
    words = malloc(sizeof(char*) * (nb_words + 1));
    while (i < nb_words)
    {
        words[i] = ;
        i++;
    }
    words[i] = 0;
}
