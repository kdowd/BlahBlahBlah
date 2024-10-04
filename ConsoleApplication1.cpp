#include <iostream> 

#include <algorithm> 

#include <vector> 

#include <utility> 



using namespace std;


int getHighest(vector<int> v) {

	int highest{};

	for (auto i : v) {

		if (i > highest) {

			highest = i;
		}

	}

	return highest;
}





int main()

{

	int res = getHighest({ 2,5,7,8,99,6,5,9 });
	cout << "highest is = " << res << endl;
}
