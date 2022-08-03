/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglandus <cglandus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:31:23 by cglandus          #+#    #+#             */
/*   Updated: 2022/07/31 22:44:23 by cglandus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

//SRC
void	ft_putchar(char c);
int		ft_str_is_numeric(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
int		ft_atoi_dom(char *str);

void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, unsigned int size);
int		ft_tablen(int *tab);
int		ft_pow(unsigned int nb, unsigned int power);
int		ft_atoi(const char *str);

int		ft_sizefile(void);
int		ft_atoi2(char *nb);
char	*ft_strdup(char *src);

//CHECK_ERROR
int		ft_check_error(int argc, char **argv);

//BREAKDOWN
void	ft_break_down_number(unsigned int nb, int *tab);
void	ft_decomp(int nb, char *****numbers);
char	*ft_searchnb(char *****numbers, int decompnb);
void	ft_break_down_number(unsigned int nb, int *tab);
int		ft_sizenb(int nb);

//PARSE
char	*ft_resetstr(char *str);
int		ft_skipchar(char *str, int index);
char	*ft_split(char *buffer, int *index, char *string, int mode);
void	ft_parse(char ****numbers);

//PRINT_VALUE
void	ft_printvalue(char ****numbers, char	*nb);
void	ft_putword(char *word);

#endif