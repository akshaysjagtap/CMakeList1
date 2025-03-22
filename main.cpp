#include<bits/stdc++.h>
#include "mathop/add.h"

using namespace std;

int main()
{
	cout << "Sample cmake file\n";
	thread t([](){cout << "In thread\n";});
	t.join();
	Add ad;
	int a = 1, b = 2;
	cout << "Sum: " << ad.add(a, b) << "\n";
	return 0;
}
