#ifndef I_MAIN_MENU_H_
#define I_MAIN_MENU_H_

#include <system_error>
#include <string>


class IMainMenu
{
    public:
        virtual void removeChoice(std::string menuOption) = 0;
        virtual void removeAllChoices() = 0;
        virtual void mainMenuSelectMenu()  = 0;
        virtual void mainMenuTest() = 0;
};

#endif