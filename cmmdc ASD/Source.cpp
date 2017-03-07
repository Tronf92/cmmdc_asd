#include <iostream>
using namespace std;

int main()
{
	int nr1,nr2,calcul;
	cout << "Introduceti un numar:" << endl;
	cin >> nr1;
	cout << "Introduceti al doilea numar:" << endl;
	cin >> nr2;

	while((nr1>0) && (nr2>0)){
		if(nr1>nr2){
			calcul=nr1-nr2;
			nr1 =nr2;
			nr2 =calcul;
		}
		else{
			calcul=nr2-nr1;
			nr2=nr1;
			nr1=calcul;
		}
	}

	if(nr1==0){
		cout << "Cmmdc este: " << nr2 << endl;
	}
	if(nr2==0){
		cout << "Cmmdc este: " << nr1 << endl;
	}

	system("pause");
	return 0;
}