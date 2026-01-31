/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:46:43 by pbrandes          #+#    #+#             */
/*   Updated: 2026/01/31 22:09:05 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int i);
int		ft_isalnum(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
char	*ft_strcpy(char *src, char *dest);
char	*ft_strdup(char const *str);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *src, char *dest, unsigned int n);
int		ft_atoi(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_bzero(void *s, size_t n);
void	ft_putstr_(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	free_double_ptr(char **ptr);
int		ft_toupper(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char *s1, char *set);
char	**ft_split(char *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_putendl_fd(char const *s, int fd);
int		ft_isascii(int c);
int		ft_tolower(int c);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	*ft_strchr_gnl(char *s, int c);
size_t	ft_strlen_gnl(const char *str);
char	*ft_strdup_gnl(const char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strjoin_gnl_og(char *s1, char *s2);
char	*makeres(char *res);
char	*extract_line(char *res);
char	*readfile(int fd, char *res);
char	*get_next_line(int fd);
int		ft_printf(const char *format, ...);
int		ft_decide(char const c, va_list lst);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putint(int n);
int		ft_putx(unsigned int n);
int		ft_putbigx(unsigned int n);
int		ft_putpointer(unsigned long n);
int		ft_check(char c);
int		ft_putuns(unsigned int n);
char	*ft_strjoin_solong(char *s1, char *s2);
int		ft_strrstr(char *str, char *seek, int n);
int		ft_count_chr(char *str, char c);
int		ft_countnbr(int c);
int		ft_strlen_solong(const char *str);
char	*ft_cut_til_cwc(char *str, char c);
char	*ft_str_mltpl_join(int nb, ...);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_tablen(char **table);
char	**ft_tabledup(char **table);
char	**ft_tableadd_back(char **table, char const *add);
char	*ft_strndup(char const *str, int n);
char	*rm_on_indx(char *str, int rm_indx);
int		ft_size_wo_c(char *str, char c);
int		ft_iswhsp(char c);
void	ft_rm_whsp(char *input);
size_t	ft_strlen_from_c(char *str, char c);
char	*ft_str_dup_till(char *str, char c);
char	**ft_tableadd_sh(char **table, char *add);
char	*ft_strjoin_free1(char *s1, char *s2);
char	*ft_str_dup_from(char *str, char c);
void	ft_print_table(char **table, int fd);
char	*ft_str_dup_till2(char *str, char c);
int		ft_strcmp_till(const char *s1, const char *s2, char c);
char	**bubble_sort(char **table);
char	*ft_app_wsub(char *str1, char *str2, char *c);
char	*ft_app_from(char *str1, char *str2, int start);
char	**ft_taddb_free(char **table, char const *add);
char	*ft_cut_bc(char *str, char c, int start);
int		ft_strlen_till_c(char *str, char c);
void	ft_tabjoin(char **t1, char **t2, int pos, int del);
void	ft_tabdel(char ***tab, int pos);
char	*ft_strrtrim(char *str, char *set);
int		TableAddBack(char ***table, char *str);
int		checkNull(char **table);
void	StrAlterAr1(char **str, char*(*f)(char *, char *), char *set);
void	StrReplace(char **str, char repl, char *set);

#endif
