MKDIR D:\backupforrunner
runnerex.exe
D:
cd D:\backupforrunner
gcc main.c -o output
output.exe
del D:\backupforrunner\main.c
del D:\backupforrunner\output.exe
cd ..\
rd D:\backupforrunner
