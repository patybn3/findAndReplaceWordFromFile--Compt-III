#  HW02 - Homework #2
##Student: Patricia Antlitz
##Professor: Dr. Sirong Lin
##Subject: Computing III
##Date: 02/02/2023
##UMASS Lowell - Spring 2023

##Objective:

To find a specific word on a text file, and replace all instances of that word with a new word.

##Instructions:

To create a file called input.txt (sorry, I changed the name), that contains the text “I dislike C++ and dislike
programming!”. Write a C++ program that reads in the text from the file and outputs each word to the
console but replaces any occurrence of “dislike” with “love.” Your program should work with any line of
text that contains the word “dislike,” not just the example given in this problem. You may assume that
the file only contains one paragraph. Please remove any file path information after debug and only
leave “input.txt” in the source file.

** I am not sure what this instruction means: "Please remove any file path information after debug and only
leave “input.txt” in the source file."

##Technology:

- C++
- Xcode

##Issues encountered:

I created a separate file to store the new string. I am not sure if that fits the requirement or not (based on the instruction I didnt understand, I am unsure).

I don't remember learning anything specific about replacing data from a file, so I had to look it up online because I had no idea what 
the syntax was, above what was learned in class and the hint you gave in the instructions if(word == dislike...). I found an example 
to which I based my code: https://stackoverflow.com/questions/37931691/replace-a-word-in-text-file-using-c

I was stuck on a bug for a little while. I couldn't write into the new file. Turns out I had used an extraction operator instead of the insertion one. 


##Sources:

String declaration: https://syntaxdb.com/ref/cpp/string-var . 
File search and replacement: https://www.quora.com/How-can-I-replace-modify-a-particular-string-in-a-file-using-c++
https://codeforwin.org/c-programming/c-program-find-and-replace-a-word-in-file
https://stackoverflow.com/questions/37931691/replace-a-word-in-text-file-using-c




