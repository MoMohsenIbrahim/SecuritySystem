#ifndef I_MAIN_MENU_H_
#define I_MAIN_MENU_H_

#include <system_error>
#include <string>


class IMainMenu
{
    public:
        virtual void addChoice(std::string menuOption) = 0;
        virtual void removeChoice(std::string menuOption) = 0;
        virtual void removeChoice(uint8_t menuOptionID) = 0;
        virtual void removeAllChoices() = 0;
        virtual void displayMainMenu() = 0;
        virtual void mainMenuTest() = 0;
};

#endif