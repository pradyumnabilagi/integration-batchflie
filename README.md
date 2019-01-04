# integration-batchflie
for this program to run double click on the batch file named runer.bat.
and also you must have D drive for this program to work,
please don't close the command prompt by clicking on its close button on its toolbar ,once you get the answer just press any key the window will close itself, if you are not getting answer at all you can close the prompt but after that you will see a new folder will be created in your D drive named 'backupforrunner' in which there mostly will be two files one will be main.c file and other will be output.exe file so you can delete them by yourself.
note:don't rename anything and don't seperate the .exe from the batch file.

  I have written this code in visual studio code.In this code the batch file will create the folder named backupforrunner in the D drive first. Then the runnerex.exe will be executed which will scan variables .I have used file pointers to create new .c file  at that directory.using fprintf function the strings are printed  into the .c file .which by itself will become the code to get the answer.
  So finally the batch file will automaticlly compile that .c file created therefore getting the output.exe file.now the compiler will executer output.exe file and therefore getting the answer. So,till now the folder and two file are created .it will now basically ask for press any key.after that it will delete all those files created and also the folder.
  
  If you already have a folder with same name in D drive there will be no problems while deleting.only newly created files will be deleted the whole folder won't be deleted.
