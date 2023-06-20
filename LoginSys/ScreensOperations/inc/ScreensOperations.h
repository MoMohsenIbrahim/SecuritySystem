#ifndef SCREENS_OPERATIONS_H_
#define SCREENS_OPERATIONS_H_

#include "IScreenGlobalTemplate.h"

class ScreensOperations : public IScreenGlobalTemplate
{
    public: 
      ScreensOperations() = default;
      ~ScreensOperations() = default;
      template <typename T>
      void navigateToScreen(T &selectedScreenRef);
    private:
       void screenStart() override;  
};

#endif