#include <iostream>
using namespace std;

class ShippingCostStrategy {
public:
    virtual ~ShippingCostStrategy() = default;

    virtual double calculateCost(double weight) = 0;
};

class GroundShipping : public ShippingCostStrategy {
public:
    double calculateCost(double weight) override {
        return weight * 1, 5;
    }
};

class AirShipping : public ShippingCostStrategy {
public:
    double calculateCost(double weight) override {
        return weight * 3, 0;
    }
};

class WaterShipping : public ShippingCostStrategy {
public:
    double calculateCost(double weight) override {
        return weight * 2, 2;
    }
};

class Order {
private:
    ShippingCostStrategy* strategy;
    double weight;
public:
    Order(double weight, ShippingCostStrategy* strategy):
        weight(weight), strategy(strategy){}
    void setShippingStrategy() {
        this->strategy = strategy;
    }

    double calculateShippingCost() {
        return strategy->calculateCost(this->weight);
    }
};

int main()
{
    GroundShipping ground;
    AirShipping air;
    WaterShipping water;

    Order order(10.0, &ground);
    cout << order.calculateShippingCost() << endl;
    order.setShippingStrategy(&air);
    cout << order.calculateShippingCost() << endl;
    order.setShippingStrategy(&water);
    cout << order.calculateShippingCost() << endl;
}


