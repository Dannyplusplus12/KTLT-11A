#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

int n, m;
int a[1000];
int b[1000];
int c[1000];

void nhap() {
	scanf("%d %d", &n, &m);
	int i;
	for(i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	for(i = 0; i < m; ++i)
		scanf("%d", &b[i]);
}

void hop() {
	int i, j;
	for(i = 0; i < n; ++i)
		c[i] = a[i];
	int cnt; cnt = n;
	for(i = 0; i < m; ++i) {
		bool check; check = true;
		for(j = 0; j < n; ++j) {
			if(a[j] == b[i]) {
				check = false;
			}
		}
		if(check) {
			c[cnt] = b[i];
			++cnt;
		}
	}
}

void giao() {
	int i, j;
	int cnt = 0;
	for(i = 0; i < n; ++i) {
		for(j = 0; j < m; ++j) {
			if(a[i] == b[j]) {
				c[cnt] = a[i];
				++cnt;
			}
		} 
	}	
}

void hieu() {
	int i, j;
	int cnt = 0;
	for(i = 0; i < n; ++i) {
		int check = true;
		for(j = 0; j < m; ++j) {
			if(a[i] == b[j]) check = false;
		} 
		if(check) {
			c[cnt] = a[i];
			++cnt;
		}
	} 
}

bool con() {
	int i, j;
	for(j = 0; j < m; ++j) {
		bool check = false;
		for(i = 0; i < n; ++i) {
			if(a[i] == b[j])
				check = true;
		}
		if(check == false) return false;
	}
	return true;
}


int main() {
	
    nhap(); 

    return 0;
}
