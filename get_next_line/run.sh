#!/bin/bash
gcc get_next_line.c get_next_line_utils.c -Wall -Werror -Wextra -D BUFFER_SIZE=1 main.c && ./a.out test2