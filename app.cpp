#include <iostream>

#include "profile.hpp"

int main() {

    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

    sam.AddHobby("listening to audiobooks and podcasts");
    sam.AddHobby("playing rec sports like bowling and kickball");
    sam.AddHobby("writing a speculative fiction novel");
    sam.AddHobby("reading advice columns");

    std::cout << sam.ViewProfile();

    

}