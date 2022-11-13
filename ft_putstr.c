/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:24:30 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/13 02:30:28 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	i;

	i = -1;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[++i])
		write(1, &s[i], 1);
	return (i);
}