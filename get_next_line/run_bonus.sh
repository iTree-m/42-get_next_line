#!/bin/bash
gcc get_next_line_bonus.c get_next_line_utils_bonus.c -Wall -Werror -Wextra -D BUFFER_SIZE=1 main_bonus.c && ./a.out test1 test2
