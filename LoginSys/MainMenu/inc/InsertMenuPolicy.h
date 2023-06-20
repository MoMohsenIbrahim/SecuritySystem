#ifndef INSERT_MENU_POLICY_H_
#define INSERT_MENU_POLICY_H_
/*
    - Policy based design pattern that depends on having specific implmentation that overrides any function in the host class side.
    - This is work around to have virtual template class.
    - The host class should accept extra template parameters which acts as a specific policy.
    - Then this template policy call specific function from the policy class.
*/
template <typename InsertPolicy>
class InsertMenuPolicy
{
    public:
        InsertMenuPolicy() = default;
        ~InsertMenuPolicy() = default;
        void insertMenu(std::string screenName, InsertPolicy *menuClassPtr)
        {
            if(nullptr != menuClassPtr)
            {
             m_mainMenuOptions.insert({screenName, menuClassPtr});
            }
        }

        void displayMenus()
        {
            uint16_t m_mainMenuOptionID  = 0; 
            for(auto mainMenuElement : m_mainMenuOptions)
            {
                m_mainMenuOptionID++;   
                std::cout << m_mainMenuOptionID << "- " << mainMenuElement.first  << std::endl; 
            }
        }
   private:
        std::map<std::string , InsertPolicy *> m_mainMenuOptions;
};

#endif