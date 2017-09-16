/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:18:47 by rcarette          #+#    #+#             */
/*   Updated: 2017/09/16 18:44:46 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_tab.h"

static void		ft_push(char ***table, char *value)
{
	clear_tab(table);
	*table = creat_tab(1);
	(*table)[0] = strdup(value);
}

void	push(char ***table, char *value)
{
	int		size_table;
	char	**tmp_tab;
	int		ite;

	ite = -1;
	if (!value || !table)
		return ;
	else if (!(*table)[0])
		return (ft_push(table, value));
	tmp_tab = tabdup(*table);
	clear_tab(table);
	*table = creat_tab(strlen_tab(tmp_tab) + 1);
	while (tmp_tab[++ite])
		(*table)[ite] = strdup(tmp_tab[ite]);
	(*table)[ite] = strdup(value);
}

int main(int argc,  char *argv[])
{
	//char	**table = tabdup(argv);
	char	**tab1 = creat_tab(2);
	//char	**tab2 = NULL;

	push(&tab1, "Hello");
	//show_tab(tab1);
	push(&tab1, "Romain");
	//show_tab(tab1);
	clear_tab(&tab1);
	while(1);
	/*push(&tab1, "helloo");
	printf("\n\n\n");
	show_tab(tab1);
	push(&tab1, "cocuc");
	push(&tab1, "tingjg");
	push(&tab1, "ffffekfekf");
	printf("\n\n\n");
	show_tab(tab1);*/
	return 0;
}
