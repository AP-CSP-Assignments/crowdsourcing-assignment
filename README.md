# crowdsourcing-mini-project

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```
# List Helper Procedures
Mr. Vu has provided you with custom procedures that work specifically with C++ vectors, and are similar to the AP CSP style list procedures.  You are free to use them in your program.

|Procedure|Description|
|---|---|
|`void display(vec)`|Takes a vector as parameter, and displays it to the screen in a nice format.|
|`void append(vec, val)`|Appends `val` into the vector `vec`.|
|`void insert(vec, ind, val)`|Inserts `val` into the index `ind` of the vector `vec`.  The elements previously at index `ind` and after are shifted over to the right.  The size of the vector increases by 1.|
|`void remove(vec, ind)`|Removes the element at `ind` of the vector `vec`.  Elements after the element at `ind` are shifted over to the left.  The size of the vector is decreased by 1.|
|`int length(vec)`|Returns the number of elements in the vector.|

# Instructions - Crowdsourcing Clone
Create a program that allows a user to input song data.

* Your program should ask the user for the song title, artist name, and duration in seconds.
* After each song has been inputted, ask the user if they want to enter another song.
* If they say yes, then have them enter a new song.
* If they say no, then print the following to the screen
    * The total duration of all the songs combined (in seconds)
    * The average duration of the songs (in seconds)
    * The song with the longest duration; display its title and artist
    * The song with the shortest duration; display its title and artist

See an example run of the program below
```
Enter the song's title
A New Day
Enter the artist
The Dreamers
Enter the duration (in seconds)
243
Would you like to enter another song (y/n)?
y

Enter the song's title
Summer Love
Enter the artist
The Sunsets
Enter the duration (in seconds)
187
Would you like to enter another song (y/n)?
y

Enter the song's title
Dance All Night
Enter the artist
DJ Spin
Enter the duration (in seconds)
334
Would you like to enter another song (y/n)?
n

Total duration: 764
Average duration: 254.6667
Longest song: Dance All Night by DJ Spin for 334 seconds
Shortest song: Summer Love by The Sunsets for 187 seconds
```
## Requirements
* You should store the data of the songs in lists
    * You should make 3 lists: one for the names, one for the artists, and one for the duration
    * Each index corresponds to the same song (see example on Canva slides)
* You should create at least one procedure
    * The procedure should use at least one parameter (input)
    * The procedure should have at least on if-statement
    * The procedure should have at least one loop

## Submission
Commit and push your code.

## Extension
If you finish early, then try to implement these other program functionality

* Turn your program into a menu based program, where the user can enter the option they want to do (e.g,. add a song, search for a song, display all data, remove a song)
    * Allow for searching of a song by title; display the information of the found song, or a message that the song could not be found
    * Remove a song by title
