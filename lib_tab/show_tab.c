/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:13:44 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 14:20:50 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

void	show_tab(char **table)
{
	int		ite;

	ite = -1;
	if (!table || !*table)
		return ;
	while (table[++ite])
	{
		write(1, table[ite], strlen(table[ite]));
		write(1, NEW_LINE, 1);
	}
}
