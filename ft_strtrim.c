# include "libft.h"

static int  firstIndexOfCharInString(char const *set, char c);
static int  left_bound_finder(char const *s1, char const *set, int left);
static int  right_bound_finder(char const *s1, char const *set, int right);

char        *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    int     len_substr;
    int     left;/** index of the first char in srting wich is not found in the set*/
    int     right;

    if (s1 == NULL || set == NULL)
        return (NULL);
    if (*set == '\0')
        return (result = ft_strdup(s1));
    left = 0;
    right = 0;
    left = left_bound_finder(s1, set, left);
    right = right_bound_finder(s1, set, right);
    if (left > right)
        return (ft_strdup(""));
    len_substr = right - left + 1;
    result = malloc(sizeof(char) * (len_substr + 1));
    if (result == NULL)
        return (NULL);
    result = ft_substr(s1, left, len_substr);
    return (result);
}

/**возвращает индекс символа в строке*/
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

static int      left_bound_finder(char const *s1, char const *set, int left)
{
    left = 0; 
    while (s1[left] != '\0' && firstIndexOfCharInString(set, s1[left]) != -1)
        left++;
    return (left);
}

static int      right_bound_finder(char const *s1, char const *set, int right)
{
    right = ft_strlen(s1) - 1;
    while (right > 0 && firstIndexOfCharInString(set, s1[right]) != -1)
        right--;
    return (right);
}
