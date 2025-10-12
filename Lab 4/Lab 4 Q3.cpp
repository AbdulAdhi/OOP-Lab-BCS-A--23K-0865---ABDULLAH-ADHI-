#include <iostream>
using namespace std;

class PropertyDeed {
private:
    int* ownerID;

public:
    PropertyDeed(int id) {
        ownerID = new int(id);
    }

    PropertyDeed(const PropertyDeed& source, bool deepCopy) {
        if (deepCopy) {
            ownerID = new int(*source.ownerID);
        } else {
            ownerID = source.ownerID;
        }
    }

    void setOwnerID(int id) {
        *ownerID = id;
    }

    void display(const string& label) {
        cout << label << " -> Owner ID: " << *ownerID
             << ", Memory Address: " << ownerID << endl;
    }

    ~PropertyDeed() {
        delete ownerID;
    }
};

int main() {
    PropertyDeed original(1001);
    PropertyDeed shallowCopy(original, false);
    PropertyDeed deepCopy(original, true);

    cout << "Before modifying original:\n";
    original.display("Original");
    shallowCopy.display("Shallow Copy");
    deepCopy.display("Deep Copy");

    cout << "\nAfter modifying original:\n";
    original.setOwnerID(9999);
    original.display("Original");
    shallowCopy.display("Shallow Copy");
    deepCopy.display("Deep Copy");

    return 0;
}
