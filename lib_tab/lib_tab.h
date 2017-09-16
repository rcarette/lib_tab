#ifndef LIB_TAB_H
#define LIB_TAB_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

#define MALLOC_ERROR "Unable to allocate memory."
#define NEW_LINE "\n"

	char	**creat_tab(int n); /* This function create a table */
	int		strlen_tab(char **table);
	void	clear_tab(char ***table);
	void	show_tab(char **table);
	char	**tabdup(char **table);
	void	concat_tab(char ***dst, char **src); /* This function concat two table */
	int		indexof(char **dst, char *value);
	void	pop(char **table);
	void	push(char ***table, char *value);
#endif

