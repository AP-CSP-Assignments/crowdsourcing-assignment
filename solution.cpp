/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    std::vector<std::string> song_names = {};
    std::vector<std::string> song_artist = {};
    std::vector<int> song_duration = {};

    std::string choice = "y";   // y or n to enter a new song
    while (choice != "n")
    {
        std::cout << "Enter a song name, artist, and duration\n";
        std::string name;
        std::cin >> name;
        append(song_names, name);

        std::string artist;
        std::cin >> artist;
        append(song_artist, artist);

        int duration;
        std::cin >> duration;
        append(song_duration, duration);

        std::cout << "Would you like to enter a new song (y/n)?\n";
        std::cin >> choice;
    }
    return 0;
}
