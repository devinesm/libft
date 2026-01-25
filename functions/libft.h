#ifndef LIBFT_H
# define LIBFT_H

/*
    standard library includes
*/
# include <string.h> // for size_t


/*
    <ctype.h> functions
*/
int ft_isalpha(int argument); // verificar se é caractere alfabético
int ft_isdigit(int argument); // verificar se é dígito
int ft_isalnum(int argument); // verificar se é alfanumérico
int ft_isascii(int argument); // verificar se é caractere ASCII
int ft_isprint(int argument); // verificar se é caractere imprimível
int ft_toupper(int character); // converter caractere para maiúsculo
int ft_tolower(int character); // converter caractere para minúsculo

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

#endif