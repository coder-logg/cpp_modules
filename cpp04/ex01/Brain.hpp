#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(Brain const &brain);
};
#endif
 /// todo исправить сегу в срр04/ex03