#ifndef __AUTHOR_H__
#define __AUTHOR_H__
#include <iostream>
#include <string>

class Author {
    private:
        std::string name, nationality;
    public:
        Author(const std::string& name, const std::string& nationality) : name(name), nationality(nationality) {}

        std::string getName() const { return name; }
        std::string getNationality() const { return nationality; }

        void setName(const std::string& name) { this->name = name; }
        void setNationality(const std::string& nat) { nationality = nat; }
};

#endif