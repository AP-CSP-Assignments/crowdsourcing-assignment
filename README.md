# wordle-mini-project

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

# Instructions - Wordle Clone
Do the following in the file named `wordle.cpp`.

You will create a simpler version of the Wordle game.  Players are tasked with correctly guessing a sequence of four (4) numbers.  After every guess, the program will display a hint.  The hint will display
* An "O" if the number is in the correct spot in the sequence
* An "X" if the number is not in the correct spot in the sequence

Note that this is simpler than the actual Wordle game, because you are NOT checking if a number is correct, but in the wrong spot.  It is ONLY either correct and in the correct spot, or it is in the wrong spot.

For example, if the sequence is `[1, 2, 3, 4]`:
|Guess|Hint|Description|
|---|---|---|
|`[1, 1, 1, 1]`|`[O, X, X, X]`|Only the first 1 is in the correct spot|
|`[8, 6, 3, 5]`|`[X, X, O, X]`|Only the 3 is in the correct spot|
|`[1, 4, 3, 7]`|`[O, X, O, X]`|The 1 and 3 are in the correct spot.  The 4 is in the sequence, but not in the correct spot (it should be a 2), and so we see an "X"|
|`[1, 2, 3, 4]`|`[O, O, O, O]`|All 4 numbers are correct|

Duplicate numbers are allowed.

## Hint
* To create random numbers between 0 - 9, add the following to your code
```c++
#include <cstdlib>
#include <time>

int main()
{
    srand(time(0));    // seeds our random number generator
    int random_num = rand() % 10;    // random number between 0 and 9

    return 0;
}
```

## Program Requirements
* Computer should generate 4 random numbers from 1 - 9 as the "Secret Code".
* User should be prompted for their guess of those four numbers.
* After they provide their full guess, the user is told how many are correct.
* As long as the user does not get all four correct, they keep getting asked for their guess.
* After the user finally gets all of them correct (yes - all four), they are congratulated and then told how many tries it took them.

Starter code has been provided for you.  You are free to use it, or solve the problem in a different way.  In the starter code, you can complete the program by writing three procedures
* `std::vector<int> createSecret()` - This procedure takes no parameters, and returns the secret code, which is a vector of ints.  You can give this procedure a parameter when doing the extension problem.
* `std::vector<std::string> getHint(std::vector<int> secret, std::vector<int> guess)` - This procedure takes in the secret code and the user guess, and returns the hint which is a vector of `std::string`.  The list is filled with either `"O"` or `"X"`.
* `bool winGame(std::vector<int> secret, std::vector<int> guess)` - This procedure takes in the secret code and the user guess and returns `true` if they match, and `false` otherwise.  Alternatively, you could also change the procedure to take in the hint as a single parameter, and determine whether you win based off of the hint instead.

## Extensions
* Limit users to only 10 attempts to get the "Secret Code"
* Make the hint like the Wordle hint, where if you get a correct number, but in the wrong spot, it will display a "+" or some other symbol.
* Allow the user to choose their difficulty.  With easy being a secret code of length 4, and medium or hard having longer secret codes (6, 8, etc.).
