/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 13:59:34 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 18:44:12 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

void	clear_tab(char ***table)
{
	int		ite;

	ite = -1;
	if (!table)
		return ;
	while ((*table)[++ite])
		free((*table)[ite]);
	free(*table);
	*table = NULL;
}
