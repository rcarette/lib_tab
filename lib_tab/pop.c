/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:10:07 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 17:17:12 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"


void	pop(char **table)
{
	int		size_table;

	if (!table || !*table)
		return ;
	size_table = strlen_tab(table);
	free(table[size_table - 1]);
	table[size_table - 1] = NULL;
}
