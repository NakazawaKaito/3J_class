#include<stdio.h>

int add(struct NUMBER *a, struct NUMBER *b, struct NUMBER *c) {
	int plus;
	int carry = 10;
	for (int i = 0; i < KETA; i++) {
		plus = (a->n[i] + b->n[i] + carry) % 10;
		carry = plus / 10;
	}
	if (carry != 0) {
		return -1;
	}

	return 0;
}