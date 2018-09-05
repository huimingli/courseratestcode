//ÈıÎ¬×ø±êµÄ¾àÀëÅÅĞò
#include <iostream>  
#include <algorithm> 
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
class ReversePair {
public:
	string str;
	int count = 0;
 };
bool myfun(ReversePair &a, ReversePair&b) {
	return a.count < b.count;

}
int main() {
	int m, k;
	cin >> m >> k;
	vector< ReversePair> res;
	for (int i = 0; i < k; i++) {
		ReversePair rp;
	    string temp;
		cin >> temp;
		rp.str = temp;

		for (int k = 0; k < rp.str.size(); k++) {
			for (int n = k + 1; n < rp.str.size(); n++) {
				if (rp.str[n] < rp.str[k]) {
					rp.count++;
				}
			}
		}
		res.push_back(rp);

	}
	sort(res.begin(), res.end(), myfun);
	for (ReversePair rp : res) {
		for (char c : rp.str) {
			cout << c;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
