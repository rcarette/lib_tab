/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:53:21 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 17:08:52 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

int		indexof(char **src, char *value)
{
	int		ite;

	ite = -1;
	if (!src || !*src || !value)
		return (-1);
	while (src[++ite])
		if (!strcmp(src[ite], value))
			return (ite - 1);
	return (-1);
}
