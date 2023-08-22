# Baseball Champions
## Learner Objectives

At the conclusion of this lab, participants should be able to:
* Read from the file and write to the file
* Search the vector of structures
* Sort the vector of structures
* Use the three-file structure

## Overview and Requirements

 * In this assignment, you will need to read a file WorldSeriesWinners.txt into a vector of structures.

* This file contains a chronological list of World Series' winning teams from 1950 through 2014. The first line in the file is the name of the team that won in 1950, and the last line is the name of the team that won in 2014. (Note that the World Series was not played in 1994) .

* The structure will have two member variables teamName and numberOfWins.

* In this assignment, you will read the file into a vector. After reading each name, you will check if the name exists in the vector. If it does, you will update the number of wins for the team. If it does not, you will push a new object at the end of the vector. 
* Display the vector.
* Sort the vector in descending order. You may use any algorithm you choose.
* Display the vector again.

```
Example of output
   Team name             Number of wins
-------------------------------------------
New York Yankees              15
New York Giants               1
Brooklyn Dodgers              1
Milwaukee Braves              1
Los Angeles Dodgers           5
Pittsburgh Pirates            3
St. Louis Cardinals           5
Baltimore Orioles             3
Detroit Tigers                2
New York Mets                 2
Oakland Athletics             4
Cincinnati Reds               3
Philadelphia Phillies         2
Kansas City Royals            1
Minnesota Twins               2
Toronto Blue Jays             2
Atlanta Braves                1
Florida Marlins               2
Arizona Diamondbacks          1
Anaheim Angels                1
Boston Red Sox                3
Chicago White Sox             1
San Francisco Giants          3

################Sorted vector################

   Team name             Number of wins
-------------------------------------------
New York Yankees              15
Los Angeles Dodgers           5
St. Louis Cardinals           5
Oakland Athletics             4
Pittsburgh Pirates            3
Baltimore Orioles             3
Cincinnati Reds               3
Boston Red Sox                3
San Francisco Giants          3
Detroit Tigers                2
New York Mets                 2
Philadelphia Phillies         2
Minnesota Twins               2
Toronto Blue Jays             2
Florida Marlins               2
New York Giants               1
Brooklyn Dodgers              1
Milwaukee Braves              1
Kansas City Royals            1
Atlanta Braves                1
Arizona Diamondbacks          1
Anaheim Angels                1
Chicago White Sox             1
Submitting Assignments
 Submit the zip file or sours file on Canvas
```
* Write the resulting vector to the file `winners.csv`. The file should look like this
```
Team name, Number of wins
New York Yankees,15
Los Angeles Dodgers,5
St. Louis Cardinals,5
Oakland Athletics,4
  <file continues>
```
* Use the three-file structure for this assignment.
1. Create a header file `functions.h` that contains necessary includes, global constants, and function prototypes. The start-up for the file is provided below
```
/**
 * @file   <function.h>
 * @author <WRITE STUDENT NAME>
 * @brief  <WRITE DESCRIPTION ABOUT THE PROGRAM/FILE>
 * @date   <WRITE DATE TODAY>
 *
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H




#endif // FUNCTIONS_H
```
2. Create an implementation file `functions.cpp` that contains the function definitions. Don't forget to include `functions.h`
3. Adjust `lab1.cpp` file by removing global constants, function prototypes, and function definitions
4. Compile and run the program using the command line(Reminder:  `g++ -Wall *.cpp -o lab1` ). Make sure you are getting the correct output.

## Single-Developer Workflow

### Program development process:

- [ ]  Edit your code
* Use Visual Studio Code or any text editor to write the code for the problem
- [ ] Test your code
* Compiling and executing your code to check for syntax, logic, and run-time errors.
* It is also important to identify some test cases.
- [ ] Commit your code
* Two things about committing:
1. You should commit somewhat frequently. At a minimum, commit each time you complete a question or small problem. Although I would suggest breaking your code down into subproblems. Test that it works and commit.
2. Leave informative commit messages. "Added stuff" will not help you if you are looking at your commit history in a year. A message like "Added initial version of hello-world function" will be more useful.
* Two things to do in the terminal during a commit
````
git add -A
git commit -m "YOUR COMMIT MESSAGE"
````
* `git add` is a command that tells git which files you want to record the changes to when you make your commit. For example, I made changes to `file1` and `file2` since my last commit, I can choose to only commit (take a snapshot of) the changes I made to `file1`.
* `git add -A` says to add all of the files that have changed since the last commit.
* If I just want to add `file1`, I would instead type `git add file1`.
- [ ] Push your code
      
At some point, you'll want the updated version of the assignment stored in your local computer, push back to GitHub, either so that the instructor can help with your code, or so that it can be graded. You can do this by using the command `git push`. When you press enter, you will be prompted for a username and password. This is your GitHub username and the password is the personal access token generated. (NOTE: while typing the personal access token, you will not see any letter in the terminal, this is normal, just continue typing). This should be the only time you will have to write the username and password after the `git push`, unless you are using a different computer or the personal access token expires.
````
$ git push
```` 

## Submitting Assignments
1. Ensure that you `push` your local copy of this PA's repo to GitHub. Verify that the code in GitHub is the same code you have on your local computer.
2. You may continue to update and push your code into this repo as long as it is before the deadline.
3. It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this programming assignment in Canvas. This allows the instructor to be notified of your final submission and that you are ready for grading.

> NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus.
