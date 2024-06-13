#include <iostream>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <memory>
using namespace std;

class TreeType {
public:
    string name;
    string color;
    string texture;

    TreeType(const string& name, const string& color, const string& texture)
        : name(name), color(color), texture(texture) {}

    void draw(int canvas, int x, int y) {
        cout << "Drawing tree of type " << name << " with color " << color
            << " and texture " << texture << " at (" << x << ", " << y << ") on canvas " << canvas << endl;
    }

    void getName() {
        return getName();
    }

    void getColor() {
        return getColor();
    }

    void getTexture() {
        return getTexture();
    }
};

class TreeFactory {
    static unordered_map<string, shared_ptr<TreeType>> treeTypes;

public:
    static shared_ptr<TreeType> getTreeType(const string& name, const string& color, const string& texture) {
        string key = name + color + texture;
        auto it = treeTypes.find(key);
        if (it == treeTypes.end()) {
            auto type = make_shared<TreeType>(name, color, texture);
            treeTypes[key] = type;
            return type;
        }
        return it->second;
    }
};

class Tree {
public:
    int x, y;
    shared_ptr<TreeType> type;

    Tree(int x, int y, shared_ptr<TreeType> type)
        : x(x), y(y), type(type) {}

    void draw(int canvas) {
        type->draw(canvas, x, y);
    }
};

class Forest {
    vector<shared_ptr<Tree>> trees;

public:
    void plantTree(int x, int y, const string& name, const string& color, const string& texture) {
        TreeType type = TreeFactory::getTreeType(name, color, texture);
        auto tree = make_shared<Tree>(x, y, type);
        trees.push_back(tree);
    }

    void draw(int canvas) {
        for (const auto& tree : trees) {
            tree->draw(canvas);
        }
    }
};

class TreeFactory {
private:
    static vector<TreeType> treeTypes;
public:
    static TreeType getTreeType(string name, string color, string texture) {
        for (int i = 0; i < treeTypes.size(); i++) {
            if (TreeTypes[i]->getName() == name &&
                TreeTypes[i]->getColor() == color &&
                TreeTypes[i]->getTexture() == texture)
            {
                cout << "Already exist" << endl;
                return treeTypes[i];
            }
        }
        cout << "Create new" << endl;
        TreeType* type = new TreeType(name, color, texture);
    };
};

vector<TreeType> TreeFactory::treeTypes;

int main() {
    Forest forest;
    forest.plantTree(1, 2, "Oak", "Green", "Rough");
    forest.plantTree(3, 4, "Pine", "Green", "Smooth");
    forest.plantTree(5, 6, "Birch", "White", "Smooth");

    int canvas = 1;
    forest.draw(canvas);

    return 0;
}

