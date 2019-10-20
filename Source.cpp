#include <iostream>

using namespace std;

class drob{
public:

	void Init(int ch, int zn){
		this->chisl = ch;
		this->znam = zn;
	}

	void Read(){
		cin >> this->chisl;
		cin >> this->znam;
	}

	void Display(){
		cout << "Chislitel: " << this->chisl << endl;
		cout << "Znamenatel: " << this->znam << endl;
	}

	static drob Add(drob d1, drob d2){
		drob d;
		d.chisl = d1.chisl * d2.znam + d2.chisl * d1.znam;
		d.znam = d1.znam * d2.znam;
		return d;
	}

	float drob_ch(){
		float a;
		int b = this->chisl % this->znam;
		a = b / float(this->znam);
		return a;
	}

private:
	int chisl;
	int znam;
};

int main(){
	drob *d1 = new drob;
	drob *d2 = new drob;
	drob *d3 = new drob;
	d1->Read();
	d2->Read();
	*d3 = drob::Add(*d1, *d2);
	d3->Display();
	cout << d3->drob_ch() << endl;
	delete d1, d2, d3;
	return 0;
}