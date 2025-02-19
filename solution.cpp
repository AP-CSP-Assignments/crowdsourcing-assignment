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

int totalDuration(std::vector<int> list)
{
    int index = 0;
    int total = 0;
    while (index < length(list))
    {
        total = total + list[index];
        index = index + 1;
    }
    return total;
}

double averageDuration(std::vector<int> list)
{
    // Turning the total duration to a double for proper division by C++
    return (double) totalDuration(list) / length(list);
}

void printLongestDurationInfo(std::vector<std::string> names, std::vector<std::string> artists, std::vector<int> durations)
{
    int indexOfMax = 0;
    int maxDuration = durations[0]; // assumes duration list has at least one element
    int curr_index = 0;

    // Finding the maximum algorithm
    while (curr_index < length(names))
    {
        if (durations[curr_index] > maxDuration)
        {
            indexOfMax = curr_index;    // keep track of the position of the max song
            maxDuration = durations[curr_index];    // update the max duration
        }
        curr_index = curr_index + 1;
    }

    // Out of the loop - maximum has been found
    std::cout << "Longest song: " << names[indexOfMax] << " by " << artists[indexOfMax] << " for " << durations[indexOfMax] << " seconds\n";
}

void printShortestDurationInfo(std::vector<std::string> names, std::vector<std::string> artists, std::vector<int> durations)
{
    int indexOfMin = 0;
    int minDuration = durations[0]; // assumes duration list has at least one element
    int curr_index = 0;

    // Finding the maximum algorithm
    while (curr_index < length(names))
    {
        if (durations[curr_index] < minDuration)
        {
            indexOfMin = curr_index;    // keep track of the position of the min song
            minDuration = durations[curr_index];    // update the min duration
        }
        curr_index = curr_index + 1;
    }

    // Out of the loop - maximum has been found
    std::cout << "Shortest song: " << names[indexOfMin] << " by " << artists[indexOfMin] << " for " << durations[indexOfMin] << " seconds\n";
}

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

    std::cout << "Total duration: " << totalDuration(song_duration)
              << "\nAverage duration: " << averageDuration(song_duration) << std::endl;
    printLongestDurationInfo(song_names, song_artist, song_duration);
    printShortestDurationInfo(song_names, song_artist, song_duration);
    return 0;
}
