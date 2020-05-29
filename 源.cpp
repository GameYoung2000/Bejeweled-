#include<iostream>
#include<stdlib.h>
using namespace std;

bool isThreeLinked(int x, int y,int** map) {
	int count = 1,n=8;
	if (x + 1 < n) {
		for (int i = x + 1;i < n;i++) {
			if (map[i][y] == map[x][y]) {
				count++;
			}
			else {
				break;
			}
		}
	}

	if (x - 1 >= 0) {
		for (int i = x - 1;i >= 0;i--) {
			if (map[i][y] == map[x][y]) {
				count++;
			}
			else {
				break;
			}
		}
	}

	if (count >= 3) {
		return true;
	}

	count = 1;

	if (y + 1 < n) {
		for (int i = y + 1;i < n;i++) {
			if (map[x][i] == map[x][y]) {
				count++;
			}
			else {
				break;
			}
		}
	}

	if (y - 1 >= 0) {
		for (int i = y - 1;i >= 0;i--) {
			if (map[x][i] == map[x][y]) {
				count++;
			}
			else {
				break;
			}
		}
	}

	if (count >= 3) {
		return true;
	}


	return false;
}
void down(int** map) {
	int n = 8;
	int EMPTY = -1;
	for (int i = n - 1;i >= 0;i--) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] == EMPTY) {
				int temp = i;
				while (temp >= 0) {
					if (map[temp][j] != EMPTY) {
						int help = map[i][j];
						map[i][j] = map[temp][j];
						map[temp][j] = help;
						break;
					}
					temp--;
				}
			}
		}
	}

}
void removeThreeLinked(int x, int y,int**map) {
	int count = 1;
	int linked = 1;
	int n = 8, EMPTY = -1;

	if (x + 1 < n) {//向下探测
		for (int i = x + 1;i < n;i++) {
			if (map[i][y] == map[x][y]) {
				linked++;
			}
			else {
				break;
			}
		}
	}

	if (x - 1 >= 0) {//向上探测
		for (int i = x - 1;i >= 0;i--) {
			if (map[i][y] == map[x][y]) {
				linked++;
			}
			else {
				break;
			}
		}
	}

	if (linked >= 3) {//上下相邻超过三个方块
		for (int i = x - 1;i >= 0;i--) {
			if (map[i][y] == map[x][y]) {
				count++;
				map[i][y] = EMPTY;
			}
			else {
				break;
			}
		}
		for (int i = x + 1;i < n;i++) {
			if (map[i][y] == map[x][y]) {
				count++;
				map[i][y] = EMPTY;
			}
			else {
				break;
			}
		}

	}

	linked = 1;

	if (y + 1 < n) {//向右探测
		for (int i = y + 1;i < n;i++) {
			if (map[x][i] == map[x][y]) {
				linked++;
			}
			else {
				break;
			}
		}
	}

	if (y - 1 >= 0) {//向左探测
		for (int i = y - 1;i >= 0;i--) {
			if (map[x][i] == map[x][y]) {
				linked++;
			}
			else {
				break;
			}
		}
	}

	if (linked >= 3) {//左右相邻超过三个方块
		for (int i = y - 1;i >= 0;i--) {
			if (map[x][i] == map[x][y]) {
				count++;
				map[x][i] = EMPTY;
			}
			else {
				break;
			}
		}
		for (int i = y + 1;i < n;i++) {
			if (map[x][i] == map[x][y]) {
				count++;
				map[x][i] = EMPTY;
			}
			else {
				break;
			}
		}

	}

	map[x][y] = EMPTY;
	//score += count * 10;
}

int main() {
	int** map = new int*[8];
	for (int i = 0;i < 8;i++) {
		map[i] = new int[8];
	}

	for (int i = 0;i < 8;i++) {
		for (int j = 0;j < 8;j++) {
			map[i][j] = rand() % 8;
		}

	}
	for (int i = 0;i < 8;i++) {
		for (int j = 0;j < 8;j++) {
			cout<<map[i][j];
		}
		cout << "\r\n";
	}
	for (int i = 0;i < 8;i++) {
		for (int j = 0;j < 8;j++) {      
			if (isThreeLinked(i, j, map)) {
				cout << true << "\r\n";
			}
		}

	}
}