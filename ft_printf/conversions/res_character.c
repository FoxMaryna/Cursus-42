/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_character.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrainyk <mkrainyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:01:19 by mkrainyk          #+#    #+#             */
/*   Updated: 2024/12/07 17:01:21 by mkrainyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	res_character(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}