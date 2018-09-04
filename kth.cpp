////ÈýÎ¬×ø±êµÄ¾àÀëÅÅÐò
//#include <iostream>  
//#include <algorithm> 
//#include<vector>
//#include<string>
//#include<iomanip>
//using namespace std;
//vector<int> res;
//int n = 0;
//void shiftDown(vector<int>&v, int k,int n) {
//	while (2 * k + 1 < n) {
//		int j = 2 * k + 1;
//		if (j + 1 < n&&v[j] > v[j + 1])
//			j = j + 1;
//		if (v[k] <= v[j])
//			break;
//		swap(v[k], v[j]);
//		k = j;
//	}
//}
//
//int extractMin() {
//	int temp = res[0];//´æ´¢¶Ñ¶¥ÔªËØ
//	swap(res[0], res[n - 1]);
//	n--;
//	shiftDown(res, 0, n);
//	return temp;
//}
//int main() {
//	int m, k;
//	cin >> m >> k;
//	for (int i = 0; i < m; i++) {
//		int temp;
//		cin >> temp;
//		res.push_back(temp);
//		n++;
//	}
//
//	for (int i = (m - 1) / 2; i >= 0; i--) {
//		shiftDown(res, i, m);
//	}
//
//	for (int i = 0; i < k-1; i++) {
//		extractMin();
//	}
//	cout << extractMin() << endl;
//	return 0;
//}
