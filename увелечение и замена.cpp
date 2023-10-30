// увелечение и замена.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
using namespace std;
void pomni(float &x){
	x=(x >= 0)? 2 * x : -x;
	
}


int main()
{
	float x;
	cout << "enter number" << endl;
	cin >> x;
	pomni(x);
	(x >= 0) ? cout<< 2 * x:cout << -x;
	return 0;
}
