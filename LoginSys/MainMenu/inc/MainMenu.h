#ifndef MAIN_MENU_H_
#define MAIN_MENU_H_

#include <map>
#include "IMainMenu.h"

class MainMenu : public IMainMenu
{
    public:
        MainMenu();
        ~MainMenu() = default;
        void addChoice(std::string menuOption) override;
        void removeChoice(std::string menuOption) override;
        void removeChoice(uint8_t menuOptionID) override;
        void removeAllChoices() override;
        void displayMainMenu() override;
        void mainMenuTest() override;
    private:
        std::map<uint8_t ,std::string> m_mainMenuOptions;
        uint8_t m_mainMenuOptionID;
};

#endif