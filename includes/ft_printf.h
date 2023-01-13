/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:36:29 by hmoulher          #+#    #+#             */
/*   Updated: 2018/11/15 12:59:29 by hmoulher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define INF 1.0/0.0
# define LINF -1.0/0.0

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "../libft/libft.h"

typedef struct    s_normfriendly
{
    int                i;
    int                j;
    int                printed_char;
}                t_norm;

typedef struct    s_parameters
{
    char    specifier;
    char    *flags;
    int        widist;
    size_t    width;
    int        prexist;
    size_t    precision;
    char    *lenght;
    char    *arg;
    int        sign;
    int        maj;
    int        masterflag[3];
    int        isp;
    int        ismaj;
}                t_parameters;

int             ft_printf(const char *format, ...);
char            *ft_crea0(int size, char g);
void            ft_printsign(t_parameters *stock);
void            ft_widthower(t_parameters *stock);
void            ft_switchmaster(char **switcher, t_parameters *stock);
char            *ft_convhex(unsigned long long in, char x);
char            *ft_convbin(unsigned long long in);
void            ft_masterprec(t_parameters *stock);
void            ft_printprec(t_parameters *stock);
char            *ft_plus_ou_moins(char *acheker);
char            *ft_convhoc(unsigned long long in);
void            detect_sign_n_maj(t_parameters *param);
int                detect_specifier(const char *format, int i,
    t_parameters *param);
void            detect_flags(const char *format, int *ptr_i,
    t_parameters *param);
void            detect_width(const char *str, int *ptr_i,
    t_parameters *param, va_list arg);
void            detect_prec(const char *str, int *p_i,
    t_parameters *par, va_list arg);
void            detect_len_d(const char *format, int i,
    t_parameters *param, va_list arg);
void            detect_len_f(const char *format, int i,
    t_parameters *param, va_list arg);
void            detect_arg_csp(t_parameters *param, va_list arg);
void            detect_arg_none(t_parameters *param, va_list arg);
void            detect_arg_hh(t_parameters *param, va_list arg);
void            detect_arg_h(t_parameters *param, va_list arg);
void            detect_arg_ll(t_parameters *param, va_list arg);
void            detect_arg_l(t_parameters *param, va_list arg);
void            detect_arg_none_xo(t_parameters *param, va_list arg);
void            detect_arg_hh_xo(t_parameters *param, va_list arg);
void            detect_arg_h_xo(t_parameters *param, va_list arg);
void            detect_arg_ll_xo(t_parameters *param, va_list arg);
void            detect_arg_l_xo(t_parameters *param, va_list arg);
void            check_specifier(const char *format, int i, t_parameters *param);
void            detect_flags_2(const char *format, int *ptr_i,
    t_parameters *param);
void            detect_flags_3(const char *format, int *ptr_i,
    t_parameters *param);
void            detect_prec2(t_parameters *pm);
void            init_t_parameters(t_parameters *param);
void            free_struct(t_parameters *param);
void            check_maj_specifier(t_parameters *param);
char            *ft_strndup(const char *s, int n);
char            *ft_unitoa(unsigned long long n);
char            *ft_ftoa(long double f, size_t prec);
char            *ft_convhsuite(void);
void            ft_arrondisorsuite(t_parameters *stock, int *i);
void            n(t_parameters *param, t_norm *nrm);

#endif
