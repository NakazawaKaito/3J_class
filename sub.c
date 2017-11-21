#include<stdio.h>

int sub(struct NUMBER *a, struct NUMBER *b, struct NUMBER *c) {
	int minus;
	int borrow = 0;
	if (getSign(&a) == -1 || getSign(&b) == -1) {
		return -1;
	}
	for (int i = 0; i < KETA; i++) {
		if (a->n[i] < b->n[i]) {
			borrow = 1;

		}
	}
}