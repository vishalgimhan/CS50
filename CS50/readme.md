code hello.c #source code
make hello   #compiling into a new hello file
./hello      

\n
\r
\"
\'
\\

# Header files at top of file
"#include <stdio.h>" # a library to access printf
http://manual.cs50.io/

cd
cp - copy
ls - list
mkdir - make new folder
mv - move or rename
rm - remove
rmdir - remove directory

# move hello.c to hello folder
mv hello.c hello

# move back out
mv hello.c ..

# rename hello.c to old.c
mv heloo.c old.c

# make a copy
cp hello.c backup.c

# Download cs50 library
curl -o cs50.h https://raw.githubusercontent.com/cs50/libcs50/main/src/cs50.h && curl -o cs50.c https://raw.githubusercontent.com/cs50/libcs50/main/src/cs50.c