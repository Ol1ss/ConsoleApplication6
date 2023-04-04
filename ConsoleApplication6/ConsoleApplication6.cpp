#include <iostream>

class Food {
public:
    virtual void prepare() = 0;
};

class Breakfast : public Food {
public:
    void prepare() override {
        std::cout << "Preparing breakfast..." << std::endl;
    }
};

class Lunch : public Food {
public:
    void prepare() override {
        std::cout << "Preparing lunch..." << std::endl;
    }
};

class Dinner : public Food {
public:
    void prepare() override {
        std::cout << "Preparing dinner..." << std::endl;
    }
};

class Person {
public:
    void eat(Food& food) {
        food.prepare();
        std::cout << "Eating " << typeid(food).name() << "..." << std::endl;
    }
};