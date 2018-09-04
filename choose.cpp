//ÈıÎ¬×ø±êµÄ¾àÀëÅÅĞò
#include <iostream>  
#include <algorithm> 
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
 
int main() {
	vector<int> v;
	int n;
	int t;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int i = 0;
	int count = 0;
	int j = v.size() - 1;
	while (i < v.size() - 1) {
		int j = v.size() - 1;
		if (i==0) {
			while (i < j) {
				if (v[i] == v[j]) {
					count++;
					break;
				}
				j--;
			 }
		}
		else {
			int tempI = i - 1;
			while (i<j&&v[i] == v[tempI]) {
				i++;
			}
			while (i < j) {
				if (v[i] == v[j]) {
					count++;
					break;
				}
				j--;
			}
		}
		i++;
	}
	 
	cout << count << endl;
	system("pause");
	return 0;
}
