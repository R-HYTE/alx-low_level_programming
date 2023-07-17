Here I am going to describe how C programming language works
Installed Betty linter to help check if my code is written in a modified Linux Kernel coding style or rather the Holberton school coding style
I did this by cloning the repo in https://github.com/alx-tools/Betty
In terminal: cd to Betty directory, sudo ./install.sh, vi the script in line 5-24, chmod a+x it, mv it to /bin/
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done


NOTE
gcc -E $CFILE -o c :- Runs a file through the preprocessor and saves it in a file
gcc -c $CFILE -o main.o :- Compiles a file but does not link
gcc -S $CFILE -o c :- generates assembly code of a C file and saves it in an output file
gcc $CFILE -o [fileName] :-Compiles a C file and creates and executable file

use a sudo apt install libc6-dev-i386 :- to be able to test the -m32 and -m64 gcc option
