#include <iostream>
#include <string>

class Singleton
{
private:
    Singleton();
private:

public:
    static Singleton* ptr;
    static Singleton* GetSingleton();

    ~Singleton() = default;
};

Singleton::Singleton()
{

}

Singleton* Singleton::ptr{nullptr};

Singleton* Singleton::GetSingleton()
{
    if(ptr == nullptr)
    {
        ptr = new Singleton;
    }
    return ptr;
}

int main()
{
    Singleton* ptr = Singleton::GetSingleton();
    delete ptr;
}