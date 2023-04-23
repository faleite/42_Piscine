#! /bin/sh

# id -nG $FT_USER | tr ' ' ',' | cat -e

id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"
