#include <iostream>
#include "../inc/MainMenu.h"

MainMenu::MainMenu() : m_mainMenuOptionID(0)
{

}

void MainMenu::addChoice(std::string menuOption)
{
    m_mainMenuOptions.insert({++m_mainMenuOptionID, menuOption});
}

void MainMenu::removeChoice(std::string menuOption)
{
    for(auto it = m_mainMenuOptions.begin(); it != m_mainMenuOptions.end(); it++)
    {
        if((it->second) == menuOption)
        {
           m_mainMenuOptions.erase(it);
           m_mainMenuOptionID--;
        }
    }
}

void MainMenu::removeChoice(uint8_t menuOptionID)
{
  if(m_mainMenuOptions.end() != m_mainMenuOptions.find(menuOptionID))
  {
    m_mainMenuOptions.erase(menuOptionID);
    m_mainMenuOptionID--;
  }
}

void MainMenu::removeAllChoices()
{
    m_mainMenuOptions.clear();
    m_mainMenuOptionID = 0;
}

void MainMenu::displayMainMenu()
{
    for(auto mainMenuElement : m_mainMenuOptions)
    {
        std::cout << static_cast<short>(mainMenuElement.first) << "- " << mainMenuElement.second << std::endl; 
    }
}

void MainMenu::mainMenuTest()
{
    addChoice("Regsiter");
    addChoice("Login");
    addChoice("Change PW");
    addChoice("Close");
    addChoice("FirstRedundent");
    addChoice("SecondRedundent");
    removeChoice(5);
    removeChoice("SecondRedundent");
    displayMainMenu();
}