#ifndef MAIN_MENU_H_
#define MAIN_MENU_H_

#include <map>
#include "IMainMenu.h"

class MainMenu : public IMainMenu
{
    public:
        MainMenu();
        ~MainMenu() = default;
        template <typename InsertPolicy>
        void insertMenu(std::string menuOption, InsertPolicy *menuClassPtr);
        void removeChoice(std::string menuOption) override;
        void removeAllChoices() override;
        void mainMenuSelectMenu() override;
        void mainMenuTest() override;
    private:
        std::map<std::string, void *> m_mainMenuScreens; 
        uint8_t m_mainMenuOptionID;
};

#endif