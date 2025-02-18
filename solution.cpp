/** solution.cpp
* The listhelpers.hpp file has been provided by the instructor as starter code
* and contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// Creates and returns a secret code to me as a vector (list) of integers (int)
std::vector<int> createSecret()
{
  std::vector<int> temporary_secret = {};
  int counter = 0;
  int size = 4;

  while (counter < size)
  {
    int random_number = rand() % 10;  // random number between 0 and 9
    temporary_secret.push_back(random_number);  // can also do append(temporary_secret, random_number)
    counter = counter + 1;
  }

  return temporary_secret;
}

// Compares the secret code to the user guess, and creates and returns the hint
// The hint is a vector (list) of strings
std::vector<std::string> getHint(std::vector<int> secret, std::vector<int> guess)
{
  std::vector<std::string> hint = {};
  int counter = 0;
  int size = secret.size();  // can also use length(secret)

  while (counter < size)
  {
    // Get the elements from the two lists
    int secret_element = secret[counter];
    int guess_element = guess[counter];

    // Compare the elements and add the correct character to the hint
    if (secret_element == guess_element)
    {
      hint.push_back("O");  // append(hint, "O")
    }
    else
    {
      hint.push_back("X");  // append(hint, "X")
    }
    counter = counter + 1;
  }

  return hint;
}

bool winGame(std::vector<int> secret, std::vector<int> guess)
{
  int counter = 0;
  int size = secret.size();  // can also use length(secret)

  while (counter < size)
  {
    // Get the elements from the two lists
    int secret_element = secret[counter];
    int guess_element = guess[counter];

    // If the elements do not match, then you have not won the game
    if (secret_element != guess_element)
    {
      return false;
    }
  }

  // This means that all the elements match
  return true;
}

int main()
{
  srand(time(0));
  
  std::vector<int> secret_code = createSecret();
  std::vector<int> user_guess = {-1, -1, -1, -1};
  std::vector<std::string> hint = {};    // an empty list

  int secret_code_length = 4;
  int num_guesses = 0;

  std::cout << "Welcome to Number Wordle!\n";
  
  while (!winGame(secret_code, user_guess))    // while you have not won the game yet
  {
    std::cout << "\nEnter your guess: ";
    user_guess = {};    // reset the guess for the next guess

    // Getting user input for the guess
    for (int counter = 0; counter < secret_code_length; counter = counter + 1)
    {
      int input;
      std::cin >> input;
      user_guess.push_back(input);    // can also do append(guess, input);
    }

    // Creating the hint
    hint = getHint(secret_code, user_guess);
    display(hint);
    num_guesses = num_guesses + 1;
  }

  // We win the game
  std::cout << "Congrats!  You guessed the code!  It took you " << num_guesses << " tries.\n";
  return 0;
}
