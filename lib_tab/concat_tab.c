/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:35:52 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 16:41:11 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

static char		**creat_new_tab(char **src_one, char **src_two, int size_tables)
{
	char	**new_table;
	int		ite;
	int		jte;

	new_table = NULL;
	ite = -1;
	jte = -1;
	if (!(new_table = creat_tab(size_tables)))
		return (NULL);
	while (src_one[++ite])
		new_table[++jte] = strdup(src_one[ite]);
	ite = -1;
	while(src_two[++ite])
		new_table[++jte] = strdup(src_two[ite]);
	return (new_table);
}

void			concat_tab(char ***dst, char **src)
{
	char	**tmp_table;
	int		size_tables;

	tmp_table = *dst;
	if (!src || !*src)
		return ;
	else if (tmp_table)
		tmp_table = tabdup(*dst);
	clear_tab(dst);
	if (!(size_tables = (strlen_tab(tmp_table) + strlen_tab(src))))
		return ;
	*dst = creat_new_tab(tmp_table, src, size_tables);
}
