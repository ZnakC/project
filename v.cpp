#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	float a,b,c;
	cout<<"������� �������:"<<endl;
	cin>>a;
	cout<<"������� �������:"<<endl;
	cin>>b;
	cout<<"������� �������:"<<endl;
	cin>>c;
if
    ((pow(c,2)==pow(a,2)+pow(b,2))||(pow(a,2)==pow(c,2)+pow(b,2))||(pow(b,2)==pow(a,2)+pow(c,2)))
    cout<<"���������: ����������� �������������"<<endl;
else 
    cout<<"���e�����: ����������� �� �������������"<<endl;
return 0;
}
