#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[32], learning[100];
	int age;
	cout << "Як вас звуть? = "; cin >> name;
	cout << "Скільки вам років? = "; cin >> age;
	cout << "Де Ви навчаєтеся? = "; 
	cin.ignore();
	cin.getline(learning, 100);
	cout << "Доброго дня, " << name << "!" << endl;
	cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп'ютером! ";
	cout << learning << " буде пишатися Вами!";
}