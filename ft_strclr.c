/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:14:06 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/03 10:20:20 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	while (len > 0)
	{
		s[i] = '\0';
		len--;
		i++;
	}
}
