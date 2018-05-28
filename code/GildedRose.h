#include <string>
#include <vector>

using namespace std;

class Item
{
public:
    string name;
    int sellIn;
    int quality;
    Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
    {}
    friend ostream & operator<<(ostream &os, const Item& p) {
        os << "name: " << p.name << " sellIn: " << p.sellIn << " quality :" << p.quality;
        return os;
    }
};

class GildedRose
{
public:
    vector<Item> & items;
    GildedRose(vector<Item> & items);

    void updateQuality();
};