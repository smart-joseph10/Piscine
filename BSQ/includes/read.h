#ifndef READ_UTIL_H
# define READ_UTIL_H

# include "struct.h"

char	*expand_size(char *src, int *size);
int		ft_is_number(char c);
int		ft_atoi(char *str);
int		ft_is_valid_map(char *line, map_feature *map);

#endif