# include "libft.h"
# include <stdio.h>

static void array_free(char **res_array, size_t line_num);
static int  words_counter(const char *s, int l, char c);
char	*add_str_in_array(char const *s, unsigned int start, size_t len);

static void array_free(char **res_array, size_t line_num)
{
    size_t i;

    i = 0;
    while (line_num >= i)
    {
        free(res_array[i]);
        i++;
    }
    free(res_array);
    res_array = NULL;    
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

char	*add_str_in_array(char const *s, unsigned int start, size_t len)
{
	char	*tmp = "";	
	size_t	return_len;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	return_len = ft_min((s_len - start), len);
	ft_strlcpy(tmp, s + start, return_len + 1);
	return (tmp);
}

char    **ft_split(char const *s, char c)
{
    size_t left;
    size_t right;
    size_t words_count;
    size_t line_num;
    char **res_array;//указывает на первый элемент массива указателей, останется на месте, чтобы вернуть в конце функции
    
    if (s == NULL)
        return (NULL);

// считаем количество слов/строк
    left = 0; 
    words_count = words_counter(s, left, c);

//выделить память под массив указателей на начало строк
    res_array = (char **)malloc((words_count + 1) * sizeof(char *));
    if (res_array == NULL)
        return (NULL);
    printf("words = %zu, res_array = %p\n", words_count, res_array);
//двигаемся по основной строке и выделяем подстроки
    left = 0; //индекс первого символа в слове
    right = 0; //индекс последнего символа в слове - его двигаем
    line_num = 0;

    while (s[right] != '\0') //пока не закончилась строка
    {
        while (s[right] != c && s[right] != '\0') // пока не совпадает со стоп-символом и не дошли до конца строки
            right++; // листаем (до конца слова или до разделителя)
//добавить очередную найденную строку в возвращаемый массив
        
        res_array[line_num] = (char *)malloc((right - left + 1) * (sizeof(char))); // выделяем под эту длину + символ память
        if (res_array[line_num] == NULL) // если не получилось
            array_free(res_array, line_num);
        if (right - left > 0 && res_array[line_num] != NULL) // если слово имеет длину
        {
            res_array[line_num] = add_str_in_array(s, left, right - left);
            line_num++; //перешли к следующему слову
        }
        // {
        //     printf("res_array[line_num] = %s\n", res_array[line_num]);
        //     res_array[line_num] = ft_substr(s, left, right - left);
        //     printf("res_array[line_num] after allocation= %s\n", res_array[line_num]);
        // }


//переходим к следующему слову (подстроке)
        right++;
        left = right;
    }
    return (res_array);
}



// int main()
// {
//     char *str = " Hello Im seacrching mem leak   tetst test  ";
//     char **arr;
//     arr = ft_split(str, ' ');
//     int i = 0;
//     while(arr[i])
//     {
//         printf("%s\n", arr[i++]);
//             }
//     sleep(100000);
// } 
// int main(void)
// {
// 	char *string = "split";
//     char c = ' ';
//     char ** result;
    
//     result = ft_split(string, c);
//     for (int i = 0; i < 5; i++)
//         printf("%s\n", result[i]);
//     return (0);
// }