#include <iostream>
#include <string>
using namespace std;

class MobileDevice {
	private:
		string modelName;
		const int IMEINumber = 84
	public:
		MobileDevice(string n, int Num) {
			modelName = n;
		}
		void verifyDevice() const {
			cout << "Mobile Device Model Name: " << modelName << endl;
			cout << "IMEI Number: " << IMEINumber;
		}		
};

int main() {
	MobileDevice mobile1("Phoenix Iron");
	MobileDevice mobile2("Phoenix Gold");
	
	cout << "Initial Mobile Details: " << endl;
	mobile1.verifyDevice();
	cout << "Initial Mobile Details: " << endl;
	mobile2.verifyDevice();
	
	return 0;
}