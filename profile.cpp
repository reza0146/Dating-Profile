#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) :
    name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
    }

std::string Profile::ViewProfile() {
    
    std::string bio = "Name: " + name;  
    bio += "\nAge: " + std::to_string(age);
    bio += "\nCity: " + city; 
    bio += "\nCountry: " + country; 
    bio += "\nPronouns: " + pronouns;

    bio += "\nHobbies:\n";
    for (std::string hobby : hobbies) {
        bio += "\t" + hobby + "\n";
    }

    return bio;
}

void Profile::AddHobby(std::string hobby) {
    hobbies.push_back(hobby);
}