#include "libft.h"

static void	free_array(char **array, size_t words_allocated)
{
	while (words_allocated > 0)
	{
		words_allocated--;
		free(array[words_allocated]);
	}
	free(array);
}

static size_t	count_words(const char *str, char delimiter)
{
	size_t	words;
	size_t	index;

	words = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != delimiter)
		{
			words++;
			while (str[index] && str[index] != delimiter)
				cursor++;
		}
		else
			cursor++;
	}
	return (words);
}

static char	*extract_word(const char *str, size_t start, size_t end)
{
	char	*word;
	size_t	index;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	index = 0;
	while (start < end)
		word[index++] = str[start++];
	word[index] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result_array;
	size_t	cursor;
	size_t	word_idx;
	int		word_start;

	if (!s)
		return (NULL);
	result_array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result_array)
		return (NULL);
	cursor = 0;
	word_idx = 0;
	word_start = -1;
	while (cursor <= ft_strlen(s))
	{
		if (s[cursor] != c && word_start < 0)
			word_start = cursor;
		else if ((s[cursor] == c || cursor == ft_strlen(s)) && word_start >= 0)
		{
			result_array[word_idx++] = extract_word(s, word_start, cursor);
			if (!result_array[word_idx - 1])
			{
				free_array(result_array, word_idx - 1);
				return (NULL);
			}
			word_start = -1;
		}
		cursor++;
	}
	result_array[word_idx] = NULL;
	return (result_array);
}