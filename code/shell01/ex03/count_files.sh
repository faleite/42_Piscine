#! bin/sh

# find . | wc -l 

find . | wc -l | sed 's/ //g'
