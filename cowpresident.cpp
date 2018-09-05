//三维坐标的距离排序
#include <iostream>  
#include <algorithm> 
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
class Cow {
public:
	int num;//编号
	int one;//第一轮投票
	int two;//第二轮投票
	Cow(int num, int one, int two) {
		this->num = num;
		this->one = one;
		this->two = two;
	}
};
vector<Cow> res;
int n = 0;
void shiftDown(vector<Cow>&v, int k,int n) {
	while (2 * k + 1 < n) {
		int j = 2 * k + 1;
		if (j + 1 < n&&v[j].one < v[j + 1].one)
			j = j + 1;
		if (v[k].one >= v[j].one)
			break;
		swap(v[k], v[j]);
		k = j;
	}
}

Cow extractMax() {
	Cow temp = res[0];//存储堆顶元素
	swap(res[0], res[n - 1]);
	n--;
	shiftDown(res, 0, n);
	return temp;
}
int main() {
	int m, k;
	cin >> m >> k;
	int count = 1;
	for (int i = 0; i < m; i++) {
		int temp1;
		cin >> temp1;
		int temp2;
		cin >> temp2;
		res.push_back(Cow(count,temp1, temp2));
		n++;
		count++;
	}

	for (int i = (m - 1) / 2; i >= 0; i--) {
		shiftDown(res, i, m);
	}

	Cow resNum(-1,-1,-1);
	for (int i = 0; i < k; i++) {
		Cow temp = extractMax();
		if (temp.two > resNum.two) {
			resNum.num = temp.num;
			resNum.two = temp.two;
		}
		
	}
	cout << resNum.num << endl;
	system("pause");
	return 0;
}
