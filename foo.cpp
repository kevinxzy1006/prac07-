#include <iostream>

class Base
{
public:
    virtual void showMessage() const
    {
        std::cout << "Base class message" << std::endl;
    }
};

class Derived : public Base
{
public:
    void showMessage() const override
    { // 使用 override
        std::cout << "Derived class message" << std::endl;
    }
};

int main()
{
    Base *basePtr = new Derived(); //基类在前，动态分布继承类在后
    basePtr->showMessage(); // 输出: Derived class message
    delete basePtr;
    return 0;
}
