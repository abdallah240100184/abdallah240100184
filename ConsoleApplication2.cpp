
	    int a;
	    cout << "Enter an integer: ";
	    if (!(cin >> a)) {
	        cerr << "Invalid input\n";
	        return 1;
	    }
	
	    if (a % 2 == 0) {
	        cout << (a * 8) << '\n';
	    }
	    else {
	        cout << (a * 9) << '\n';
	    }
	
	    return 0;
	
#include <iostream>

	int simpleFunction(int a) {
		if (a % 2 == 0) {
			return a * 8;
		}
		else {
			return a * 9;
		}
	}

	int main() {
		int a = cin>>;
		std::cout << simpleFunction(a) << std::endl;
		return 0;
	}
#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "enter a number: ";
	cin >> num;
	cout << "you entered: " << num << endl;
	return 0;
	
}
#include <iostream>
using namespace std;
int main() {
	int num;
		cout <<"enter a valid number: ";
		cin >> num;
		cout << "you entered: " << num;
		return 0;
}
#include <iostream>
using namespace std;
int main() {
	int age = 20;
	float height = 180.4;
	char grade = 'a';
	string Name = "Ahmed";
	cout << "name:" << Name << ",Age:" << age << ",Height:" << height << ",Grade:" << grade;
#include <iostream>
using namespace std;
int rectangle() {
	float width;
	float height;
	
	cout<<"enter width and height";
	cin >> width>> height;
	float area = width * height ;
	cout << "the Area of the rectangle equals: " << area  << endl;
		return 0;
}
int main()
{
	rectangle();
	return 0;
}