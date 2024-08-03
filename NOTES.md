# Notes

First roung of "space compaction" for ex. 1.8 didn't work. my logic was wonky one way or another.
Re-did it and boom - it worked `:)`

```txt
[  6:31PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ gcc -o tmp src/space_compaction.c 
[  6:42PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ ./tmp
hey     there this is           a test
hey     there this is           a test
the program      isn't working
the program      isn't working
bummer
bummer
^C
[  6:43PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ ./tmp
EOF
EOF
[  6:43PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ gcc -o tmp src/space_compaction.c
[  6:48PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ ./tp
zsh: no such file or directory: ./tp
[  6:48PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $ ./tmp
hey     see if    this              works
hey see if this works
yaaaaay                       it finally              worked
yaaaaay it finally worked
woooohoooo
woooohoooo
^C
[  6:48PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language ]
 $
```