/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nonega.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:23:08 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/15 20:40:10 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nonega(unsigned int nega)
{
	int		len;

	len = 0;
	len += ft_putnbr(nega, 10);
	return (len);
}
