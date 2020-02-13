
#ifndef PARSE_H
# define PARSE_H

# include "bsq.h"

int		parse_map_info(map_feature *map, char *info);
char	*read_line(int fd);
map_feature	*read_file(char *file);
map_feature	*read_stdin(void);
int		parse_map_info_sub(map_feature *map, char *info);
char	*free_line(char *line);
int		read_map_sub(int *idx, map_feature *map, char *line);
#endif