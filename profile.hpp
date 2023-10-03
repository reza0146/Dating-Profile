#include <string>
#include <vector>
#include <iostream>

class Profile {
    
    private:
    
        std::string name;
        int age;
        std::string city;
        std::string country;
        std::string pronouns;
        std::vector<std::string> hobbies;

    public:

        Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");
        std::string ViewProfile();
        void AddHobby(std::string hobby);

};