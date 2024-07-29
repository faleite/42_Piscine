# Notes

## Shell00

find . -type f -name \*.sh -printf "%f\n"

### Compiler
cc -Wall -Wextra -Werror && ./a.out
norminette

## Install Oh-my-zsh
curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh

# applications shortcuts for you ~/.zshrc
alias v='vim'\
alias vf='vim f*'\
alias nc='norminette -R CheckForbiddenSourceHeadeir'\
alias ccf='cc -Wall -Wextra -Werror f* && ./a.out'\
alias ccm='cc -Wall -Wextra -Werror f* main.c && ./a.out'\
