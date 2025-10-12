#include <iostream>
using namespace std;

class ServerSession {
private:
    int sessionID;

public:
    ServerSession(int id) {
        sessionID = id;
        cout << "Session " << sessionID << " started. Resource acquired." << endl;
    }

    ~ServerSession() {
        cout << "Session " << sessionID << " ending. Resource released." << endl;
    }
};

int main() {
    cout << "Entering session block..." << endl;

    {
        ServerSession session1(101);
    }

    cout << "Exited session block." << endl;
    return 0;
}
