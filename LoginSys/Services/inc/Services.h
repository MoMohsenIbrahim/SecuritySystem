#ifndef SERVICES_H_
#define SERVICES_H_

#include "../../MainMenu/inc/IMainMenu.h"
#include "Instance.h"

namespace ServiceList
{
    using MainMenuList = Service::Instance<IMainMenu>;
}

#endif