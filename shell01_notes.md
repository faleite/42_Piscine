## ex01
```sh

id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"
```

## ex02
```sh

find . -type f -name "*.sh" -exec basename {} .sh \;
```

## ex03
```sh

find . | wc -l | sed 's/ //g'
```

## ex04

```sh

ifconfig | grep -w ether | cut -d " " -f 2
```

## ex05
```sh

```

## ex06
```sh

ls -l | awk 'NR%2==1'
```

## ex07
```sh

cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 0 {print $0}' | awk -F ":" '{  print $1 }' | rev | sort -fnr | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2"  'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' | tr '\n' ' '  | sed 's+ +, +g' | sed 's+, $+.+g' | tr -d '\n'
```

## ex08
```sh

#!/bin/bash
echo $FT_NBR1 = \'\?\"\\\"\'\\ + $FT_NBR2=rcrdmddd | sed "s/\'/0/g" | tr '\\\"\?\!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'
```
