0x16. C - Simple Shell

simple shell is a way of writting series of commands that can be executed by shell, which is an interface that interpret and process the commands,in the tradition of the first Unix shell was written by Ken Tompson in 1971. The simple shell is designed to run different functions,process ID, system call, bit manipulation, file managment, error handling ect.

INSTALLATION
============

Clone this repository: git clone "https://token@github.com/W3n2il3/simple_shell.git"
git config pearlbathobile@gmail.com
git congig bathobile
//
Clone this repository: git clone "https://token@github.com/W3n2il3/simple_shell.git"
git config sandilemazibuko707@gmail.com
git congig sandile

Change directories into the repository: cd simple_shell

Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

testing or Run the shell in interactive mode: ./hsh


FEATURES
========

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
Handling the “end of file” condition (Ctrl+D)
Hanling the command line with arguments
Handle the PATH
Support the exit features and the exit status
Handle the Ctrl-C to not terminate the shell
Handling the command seperator ;
Handling && and || logical operators
Handle variable replacements $? and $$
Handle the comments #
Support the history feature
Support the file input

List of allowed functions and system calls
==========================================

access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
