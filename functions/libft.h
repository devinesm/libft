#ifndef LIBFT_H
# define LIBFT_H

/*
    standard library includes
*/
#include <string.h> // for size_t
#include <stdlib.h> // for malloc, free
#include <unistd.h> // for write

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

/*
    <ctype.h> functions
*/
int ft_isalpha(int argument); // verificar se é caractere alfabético
int ft_isdigit(int argument); // verificar se é dígito
int ft_isalnum(int argument); // verificar se é alfanumérico
int ft_isascii(int argument); // verificar se é caractere ASCII
int ft_isprint(int argument); // verificar se é caractere imprimível
int ft_toupper(int argument); // converter caractere para maiúsculo
int ft_tolower(int argument); // converter caractere para minúsculo

/*
    <string.h> functions
*/
size_t ft_strlen(const char *str); // calcular o tamanho da string
void *ft_memset(void *str, int value, size_t length); // preencher memória com um valor específico
void ft_bzero(void *str, size_t length); // preencher memória com zeros
void *ft_memcpy(void *dest, const void *src, size_t length); // copiar memória de uma área para outra
void *ft_memmove(void *dest, const void *src, size_t length); // copiar memória de forma segura, mesmo com sobreposição
size_t ft_strlcpy(char *dest, const char *src, size_t size); // copiar string com tamanho limitado
size_t ft_strlcat(char *dest, const char *src, size_t size); // concatenar string com tamanho limitado
char *ft_strchr(const char *str, int character); // localizar primeira ocorrência de um caractere em uma string
char *ft_strrchr(const char *str, int character); // localizar última ocorrência de um caractere em uma string
int ft_strncmp(const char *str1, const char *str2, size_t length); // comparar duas strings até um determinado comprimento
void *ft_memchr(const void *str, int character, size_t length); // localizar um byte em uma área de memória
int ft_memcmp(const void *s1, const void *s2, size_t size); // comparar duas áreas de memória
char *ft_strnstr(const char *haystack, const char *needle, size_t len); // localizar uma substring em uma string com tamanho limitado
char *ft_strdup(const char *s1); // duplicar uma string


/*
    <stdlib.h> functions
*/
int ft_atoi(const char *str); // converter string para inteiro
void *ft_calloc(size_t len, size_t size); // alocar memória e inicializá-la com zeros

/*
    Additional functions
*/
char *ft_substr(char const *s, unsigned int start, size_t len); // extrair uma substring de uma string
char *ft_strjoin(char const *s1, char const *s2); // concatenar duas strings em uma nova string alocada dinamicamente
char *ft_strtrim(char const *s1, char const *set); // remover caracteres específicos do início e do fim de uma string
char **ft_split(char const *s, char c) // separa uma string em várias substrings delimitadas por um caractere.
char **ft_itoa(int n); // converter um inteiro em uma string alocada dinamicamente
char *ft_strmapi(const char *s, char (*f)(unsigned int, char)); // aplicar uma função a cada caractere de uma string e criar uma nova string com os resultados
void ft_striteri(char *s, void (*f)(unsigned int, char*)); // aplicar uma função a cada caractere de uma string, modificando a string original
void ft_putchar_fd(char c, int fd); // escrever um caractere em um descritor de arquivo específico
void ft_putstr_fd(char *s, int fd); // escrever uma string em um descritor de arquivo específico
void ft_putendl(char *s); // escrever uma string seguida de uma nova linha em um descritor de arquivo específico
void ft_putnbr_fd(int n, int fd); // escrever um número inteiro em um descritor de arquivo específico

/*
    Linked list functions
*/
t_list *ft_lstnew(void *content); // criar um novo nó de lista
void ft_lstadd_front(t_list **lst, t_list *new); // adicionar um nó no início da lista
int ft_lstsize(t_list *lst); // contar o número de nós na lista
t_list *ft_lstlast(t_list *lst); // obter o último nó da lista
void ft_lstadd_back(t_list **lst, t_list *new); // adicionar um nó no final da lista
void ft_lstdelone(t_list *lst, void (*del)(void*)); // excluir um nó da lista usando uma função de deleção
void ft_lstclear(t_list **lst, void (*del)(void*)); // limpar toda a lista usando uma função de deleção
void ft_lstiter(t_list *lst, void (*f)(void *)); // iterar sobre a lista e aplicar uma função a cada nó
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); // criar uma nova lista aplicando uma função a cada nó da lista original, usando uma função de deleção para limpar em caso de falha

#endif