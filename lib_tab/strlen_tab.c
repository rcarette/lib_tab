/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 12:28:21 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 13:49:32 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

int		strlen_tab(char **table)
{
	int		nbr_cell;

	if (!table)
		return (0);
	nbr_cell = 0;
	while (table[nbr_cell])
		++nbr_cell;
	return (nbr_cell);
}
