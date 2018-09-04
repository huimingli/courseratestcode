////ÈýÎ¬×ø±êµÄ¾àÀëÅÅÐò
//#include <iostream>  
//#include <algorithm> 
//#include<vector>
//#include<string>
//#include<iomanip>
//using namespace std;
//class DistanceMod {
//public:
//	bool operator >(const DistanceMod &a) const {
//		return this->key > a.key;
//	}
//	
//	DistanceMod(double k,string str) {
//		this->key = k;
//		this->str = str;
//	}
//	double getKey() {
//		return key;
//	}
//	string getStr() {
//		return str;
//	}
//	 
//private:
//	double key;
//	string str;
//};
//
//bool myf( DistanceMod &a, DistanceMod &b) {
//	return b.getKey() < a.getKey();
//}
//int main() {
//	vector<vector<int>> nums;
//	cout << fixed << setprecision(2);
//	vector<DistanceMod> v;
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		vector<int> temp;
//		temp.push_back(a);
//		temp.push_back(b);
//		temp.push_back(c);
//		nums.push_back(temp);
//	}
//	for (int i = 0; i < nums.size(); i++) {
//		for (int j = i + 1; j < nums.size(); j++) {
//			vector<int> ni = nums[i];
//			vector<int> nj = nums[j];
//			double key =sqrt( pow(ni[0]-nj[0],2) + pow(ni[1] - nj[1], 2)+pow(ni[2] - nj[2], 2));
//			string str1 =  "("+ to_string(ni[0]) +"," + to_string(ni[1]) + "," + to_string(ni[2]) + ")";
//			string str2  = "(" + to_string(nj[0]) + "," + to_string(nj[1]) + "," + to_string(nj[2]) + ")";
//			string str = str1 +"-"+ str2+"=";
//			v.push_back(DistanceMod(key, str));
//		}
//	}
//	 
//	sort(v.begin(), v.end(), myf);
//
//	for (DistanceMod i : v) {
//		cout << i.getStr()<<i.getKey() << endl;
//	}
//	return 0;
//}
