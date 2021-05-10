# include "libft.h"
# include <stdio.h>

static char **array_free(char **res_array);
static int  words_counter(const char *s, int l, char c);
char	*add_str_in_array(char const *s, unsigned int start, size_t len);

static char **array_free(char **res_array)
{
    size_t i;

    i = 0;
    while (res_array[i])
    {
        free(res_array[i]);
        i++;
    }
    free(res_array);
    return (NULL);    
}

static int  words_counter(const char *s, int l, char c)
{
    int words_count;
    int state;

    words_count = 0;
    state = 0;
    while (s[l] != '\0')
    {
        if (s[l] == c)
            state = 0;
        else if (state == 0) 
            {
                state = 1;
                words_count++;
            }
        l++; 
    }
    return (words_count);
}

char    **ft_split(char const *s, char c)
{
    size_t left;
    size_t right;
    size_t words_count;
    size_t line_num;
    char **res_array;
    
    if (s == NULL)
        return (NULL);

    left = 0; 
    words_count = words_counter(s, left, c);
        // printf("wcount = %zu, separator = '%c'\n", words_count, c);

    res_array = (char **)malloc((words_count + 1) * sizeof(char *));
    if (res_array == NULL)
        return (NULL);

    left = 0;
    right = 0;
    line_num = 0;

    while (s[right] != '\0')
    {
        while (s[right] != c && s[right] != '\0')
            right++;
        res_array[line_num] = (char *)malloc((right - left + 1) * (sizeof(char)));
        if (res_array[line_num] == NULL)
            return (array_free(res_array));
        if (right - left > 0)
        {
            while (s[left] != c && s[left] != '\0')
            {
                res_array[line_num][left] = s[left];
                    left++;
            }
            res_array[line_num][right] = '\0';
            line_num++;
        }
        // left = right;
        
        // printf("res array = %s\n", res_array[line_num]);
        while (s[right] == c && s[right] != '\0')
            right++;    
    }
    res_array[line_num] = NULL;
    return (res_array);
}


// int main(void)
// {
// 	char *string = "split ";
//     char c = ' ';
//     char ** result;
    
//     result = ft_split(string, c);
//     for (int i = 0; i < 5; i++)
//         printf("in main = %s\n", result[i]);
//     return (0);
// }