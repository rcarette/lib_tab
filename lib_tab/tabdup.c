/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deepcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:44:28 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 15:12:06 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

char	**tabdup(char **table)
{
	int		size_table;
	char	**new_table;
	int		ite;

	ite = -1;
	if (!table || !*table)
		return (NULL);
	else if (!(size_table = strlen_tab(table)))
		return (NULL);
	else if (!(new_table = creat_tab(size_table)))
		return (NULL);
	while (table[++ite])
		new_table[ite] = strdup(table[ite]);
	return (new_table);
}
