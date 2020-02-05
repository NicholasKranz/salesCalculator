#include <fstream>


#include <iostream>//Converts percentage output into a float. 
#include <iomanip>

using namespace std;


int main() {

	double oneScoop = 1.49,
		   twoScoop = 2.49,
		   threeScoop = 3.49;

	int oneScoopsold,
	    twoScoopsold,
	    threeScoopsold;

	cout << "Enter amount of Delight cones sold: " << endl;
	cin >> oneScoopsold;

	cout << "Enter amount of Double Delight cones sold: " << endl;
	cin >> twoScoopsold;

	cout << "Enter the amount of Triple Delight cones sold: " << endl;
	cin >> threeScoopsold;

			
	double delightProfit = oneScoopsold * oneScoop,
		   doubdelProfit = twoScoopsold * twoScoop,
		   tripledelProfit = threeScoopsold * threeScoop;

	int totalCones = oneScoopsold + twoScoopsold + threeScoopsold;
	double totalProf = delightProfit + doubdelProfit + tripledelProfit;

	cout << "Number of single scoops sold: " << oneScoopsold   << endl;
	cout << "Number of double scoops sold: " << twoScoopsold   << endl;
	cout << "Number of triple scoops sold: " << threeScoopsold << endl;
	cout << "\n";
	cout << "\n";

	cout << "DeLightful cones:           " << oneScoopsold   << "            $" << delightProfit   << endl;
	cout << "Double Delight cones:       " << twoScoopsold   << "            $" << doubdelProfit   << endl;
	cout << "Triple Delight cones:       " << threeScoopsold  << "           $" << tripledelProfit << endl;
	cout << "\n";
	cout << "\n";
	cout << "Total:                      " << totalCones     << "            $" << totalProf       << endl;



	return 0;

}
