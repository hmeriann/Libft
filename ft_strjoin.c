# include "libft.h"
# include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *begin;
    char    *end;
    char    *total;
    int     i;
    int     j;

    begin = (char *)s1;
    end = (char *)s2;
    if ((char *)s1 == NULL || (char *)s2 == NULL)
        return (NULL);
    total = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
    if (total == NULL)
        return (NULL);
    i = 0;
    while (begin[i] != '\0')
    {
        total[i] = begin[i];
        i++;
    }
    printf("%s\n", total);
    j = 0;
    while (end[j] != '\0')
    {
        total[i + j] = end[j];
        j++;
    }
        printf("%s\n", total);
    total[i + j] = '\0';
        printf("%s\n", total);
    return (total);
}

// int main(void)
// {
//     char    *s1 = "";
//     char    *s2 = "";
//     char    *ttl;

//     ft_strjoin(s1, s2);
//     return (0);
// }