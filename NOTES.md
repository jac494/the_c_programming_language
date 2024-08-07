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

I also couldn't actually remember (I never can seem to) whether True is 1 or 0 and which is False, so I also checked myself here

```txt
[  6:54PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language(main✗) ]
 $ gcc -o tmp src/booleans.c
[  6:56PM ]  [ jac494@hp-laptop:~/Projects/the_c_programming_language(main✗) ]
 $ ./tmp
True is 1
False is 0
```

Turns out my memory was correct! That seems rare. (and I'm not just saying so - check the diff
between these last few commits - I didn't have to change the values of my defines for TRUE and FALSE in space_compaction.c)

## Exercise 1.17

Print lines longer than 80 characters

[src/print_long_lines.c](src/print_long_lines.c)

```txt
$ gcc -o tmp print_long_lines.c
$ ./tmp
hey this is a short line
this is a much longer line, it should be wwaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay more than 80 chars
this is a much longer line, it should be wwaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay more than 80 chars
cool it works
^C
```
