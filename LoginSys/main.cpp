#include <memory>
#include "MainMenu/inc/MainMenu.h"
#include "Services/inc/Services.h"
int main()
{
    ServiceList::MainMenuList::set(std::make_unique<MainMenu>());
    ServiceList::MainMenuList::get().mainMenuTest();
    return 0;
}