//
//  main.cpp
//  Antlitz_Patricia_HW02
//
//  Created by Patricia Antlitz on 2/2/23.
//
/**
Author: <Patricia Antlitz>
Date: <02/02/2023>
Purpose: <To read a file by searching for the word "dislike". Then replacing the word for "like">
Sources of Help: <String declaration: https://syntaxdb.com/ref/cpp/string-var . File search and replacement: https://www.quora.com/How-can-I-replace-modify-a-particular-string-in-a-file-using-c++ , https://codeforwin.org/c-programming/c-program-find-and-replace-a-word-in-file . I don't remember learning anything specific about replacing data from a file, so I had to look it up online because I had no idea what the syntax was, above what was learned in class and the hint you gave in the instructions if(word == dislike...). I found an example to which I based my code: https://stackoverflow.com/questions/37931691/replace-a-word-in-text-file-using-c>
Time Spent: <1hr - not sure honestly, but I think it was 1 hr more or less>
**/
/*
Computing III -- COMP.2010 Honor Statement
The practice of good ethical behavior is essential for maintaining
good order in the classroom, providing an enriching learning
experience for students, and as training as a practicing computing
professional upon graduation. This practice is manifested in the
University’s Academic Integrity policy. Students are expected to
strictly avoid academic dishonesty and adhere to the Academic
Integrity policy as outlined in the course catalog. Violations will
be dealt with as outlined therein.
All programming assignments in this class are to be done by the
student alone. No outside help is permitted except the instructor and
approved tutors.
I certify that the work submitted with this assignment is mine and was
generated in a manner consistent with this document, the course
academic policy on the course website on Blackboard, and the UMass
Lowell academic code.
Date: 02/02/2023
Name: Patricia Antlitz
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
    //file names
    string fileName = "hw02.txt";           //file with original phrase
    string newFileName = "newFile.txt";     //new file with replaced words
    //we will use this variable to read and write
    string getFile;

    //opening read and write streams
    ifstream inStream;
    ofstream outStream;
    inStream.open(fileName.c_str());
    outStream.open(newFileName.c_str());
    
    //check if it failed
    if(inStream.fail() || outStream.fail())
    {
        cerr << "Error, unable to read file" << endl;
        exit(1);
    }

    //this while loop will be going over every word from hw02.txt
    while(inStream >> getFile)
    {
        //once it finds the string with the word "dislike"
        if(getFile == "dislike")
        {
            //it will replace it with the word like
            getFile = "like";
        }
        //add a between each word
        getFile += " ";
        //so we can save the changes to the new file newFile.txt
        outStream << getFile;
        //and print to the console
        cout << getFile;
    }
    cout << endl;
    //we then close the reading and writing file streams
    inStream.close();
    outStream.close();
    
    return 0;
}
