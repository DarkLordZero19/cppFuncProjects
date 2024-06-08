#ifndef BURGERBUILDER_H
#define BURGERBUILDER_H
#ifndef CONCRETEBURGERBUILDER_H
#define CONCRETEBURGERBUILDER_H
#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "BurgerBuilder.h"
#include "ConcreteBurgerBuilder.h"
#include "Director.h"
#include <string>
#include <iostream>
using namespace std;

class BurgerBuilder {
public:
    virtual ~BurgerBuilder() = default;
    virtual void addBun() = 0;
    virtual void addPatty() = 0;
    virtual void addLettuce() = 0;
    virtual void addTomato() = 0;
    virtual void addCheese() = 0;
    virtual void addSauce() = 0;
    virtual string getBurger() const = 0;
};

#endif // BURGERBUILDER_H

class ConcreteBurgerBuilder : public BurgerBuilder {
private:
    string burger;
public:
    void addBun() override {
        burger += "Bun\n";
    }

    void addPatty() override {
        burger += "Patty\n";
    }

    void addLettuce() override {
        burger += "Lettuce\n";
    }

    void addTomato() override {
        burger += "Tomato\n";
    }

    void addCheese() override {
        burger += "Cheese\n";
    }

    void addSauce() override {
        burger += "Sauce\n";
    }

    string getBurger() const override {
        return burger;
    }
};

#endif // CONCRETEBURGERBUILDER_H

class Director {
private:
    BurgerBuilder* builder;
public:
    Director(BurgerBuilder* b) : builder(b) {}

    void setBuilder(BurgerBuilder* b) {
        builder = b;
    }

    void constructClassicBurger() {
        builder->addBun();
        builder->addPatty();
        builder->addLettuce();
        builder->addTomato();
        builder->addCheese();
        builder->addSauce();
    }

    void constructVeggieBurger() {
        builder->addBun();
        builder->addLettuce();
        builder->addTomato();
        builder->addCheese();
        builder->addSauce();
    }

    void constructDoublePattyBurger() {
        builder->addBun();
        builder->addPatty();
        builder->addCheese();
        builder->addPatty();
        builder->addLettuce();
        builder->addTomato();
        builder->addSauce();
    }
};

#endif // DIRECTOR_H

int main()
{
    ConcreteBurgerBuilder builder;
    Director director(&builder);

    director.constructClassicBurger();
    cout << "Classic Burger:\n" << builder.getBurger() << endl;

    builder = ConcreteBurgerBuilder(); 
    director.constructVeggieBurger();
    cout << "Veggie Burger:\n" << builder.getBurger() << endl;

    builder = ConcreteBurgerBuilder(); 
    director.constructDoublePattyBurger();
    cout << "Double Patty Burger:\n" << builder.getBurger() << endl;

    return 0;
}

