// Solution by : Ahmed Ibrahim Abdullatif


#include<iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	a--;
	int city[100];

	for (int i = 0; i < n; i++)
		cin >> city[i];

	int max_step;

	if ((n - a-1) > a)
		max_step = n - a-1;
	else
		max_step = a;

	int caught_thieves = 0;

	if (city[a])
		caught_thieves++; 

	for (int step = 1; step <= max_step; step++)
	{
		int known_thieves = 0;
		int valid_places = 0;

		if (step + a < n)
		{
			valid_places++;
			if (city[a + step])
				known_thieves++;
		}
		if (a - step >= 0)
		{
			valid_places++;

			if (city[a - step])
				known_thieves++;
		}
		if (known_thieves == valid_places)
			caught_thieves += known_thieves;


	}
	cout << caught_thieves;

	return 0;
}