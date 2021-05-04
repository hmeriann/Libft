# include "libft.h"

static int     firstIndexOfCharInString(char const *set, char c);

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    int     len_s;
    int     l;// index of the first char in srting wich is not found in the set
    int     r;
    int     i;

    if (s1 == NULL || set == NULL)
        return (NULL);
    l = 0; 
    while (s1[l] != '\0' && firstIndexOfCharInString(set, s1[l]) != -1)
        l++;
    r = ft_strlen(s1) - 1;
    while (r > 0 && firstIndexOfCharInString(set, s1[r]) != -1)
        r--;
    if (l > r)
        return ("");
    len_s = r - l + 1;
    result = malloc(sizeof(char) * (len_s + 1));
    if (result == NULL)
        return (NULL);
    /** переносим в результат по одному символу, начиная с индекса l**/
    i = 0;
    while (i < len_s)
    {
        result[i] = s1[l + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

//возвращает индекс символа в строке
static int     firstIndexOfCharInString(char const *set, char c)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (i);
        i++;
    }
    return (-1);
}