/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 12:07:12 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 12:23:03 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

char	**creat_tab(int n)
{
	char	**table;
	int		i;

	table = NULL;
	i = -1;
	if (n)
	{
		if (!(table = (char **)malloc(sizeof(char *) * (n + 1))))
			return (NULL);
		while (++i < n + 1)
			table[i] = NULL;
		return (table);
	}
	return (NULL);
}
