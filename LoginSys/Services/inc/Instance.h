#ifndef INSTANCE_H_
#define INSTANCE_H_

#include <memory>

namespace Service
{
    template <typename T>
    class Instance
    {
        public:
         using Handle = T&;
         
         static Handle get() 
         {
            return *s_instance.get();
         }

        static void set(std::unique_ptr<T> newInstance)
        {
            s_instance = std::move(newInstance);
        }

        static std::unique_ptr<T> getAndRemoveInstance()
        {
            return std::move(s_instance);
        }

        private:
         static std::unique_ptr<T> s_instance;
    };

    template <typename T> std::unique_ptr<T> Instance<T>::s_instance;
}

#endif