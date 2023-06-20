#include <iostream>
#include "../inc/MainMenu.h"
#include "../inc/InsertMenuPolicy.h"

MainMenu::MainMenu() : m_mainMenuOptionID(0)
{

}

template <typename InsertPolicy>
void MainMenu::insertMenu(std::string menuOption, InsertPolicy *menuClassPtr)
{
    m_mainMenuScreens.insert({menuOption, menuClassPtr});
    m_mainMenuOptionID++;
}

void MainMenu::removeChoice(std::string menuOption)
{
    for(auto it = m_mainMenuScreens.begin(); it != m_mainMenuScreens.end(); it++)
    {
        if((it->first) == menuOption)
        {
           m_mainMenuScreens.erase(it);
           m_mainMenuOptionID--;
        }
    }
}

void MainMenu::removeAllChoices()
{
    m_mainMenuScreens.clear();
    m_mainMenuOptionID = 0;
}

void MainMenu::mainMenuSelectMenu()
{
    uint16_t menuSelectedChoice;
    std::cin >> menuSelectedChoice;
    
}

void MainMenu::mainMenuTest()
{
    InsertMenuPolicy<MainMenu> obj;
    obj.insertMenu("Regsiter", this);
    obj.insertMenu("Login", this);
    obj.insertMenu("Change PW", this);
    obj.insertMenu("Close", this);
    obj.insertMenu("FirstRedundent", this);
    obj.insertMenu("SecondRedundent", this);
    removeChoice("SecondRedundent");
    obj.displayMenus();
}