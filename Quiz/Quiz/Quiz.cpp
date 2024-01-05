#include <iostream>
#include <cstdlib>
using namespace std;
string answer;
void print(string topr)
{
	cout << topr << "\n";
}

void level_three()
{
	print("A = ?, B = 128, C = 5740. A * B = C. A = ?");
	print("1.47");
	print("2.46");
	print("3.45");
	cin >> answer;
	if (answer == "3")
	{
		print("Right!!!");
		print("You WIN!!!");
		system("pause");
	}
	else {
		print("Wrong!!!");
		system("pause");

	}
}

void level_two()
{
	print("A = 10, B = ?, C = 3. A - B = C. B = ?");
	print("1.4");
	print("2.7");
	print("3.8");
	cin >> answer;
	if (answer == "2")
	{
		print("Right!!!");
		print("Level 3:");
		level_three();
	}
	else {
		print("Wrong!!!");
		system("pause");
	}
}

int main()
{
	print("Quiz!");
	print("A = 2, B = 2. A + B = ?");
	print("1.3");
	print("2.5");
	print("3.4");
	cin >> answer;
	if (answer == "3")
	{
		print("Right!!!");
		print("Level 2:");
		level_two();
	} else {
		print("Wrong!!!");
		system("pause");
	}
}