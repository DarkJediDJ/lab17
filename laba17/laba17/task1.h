#pragma once
#include <iostream>
struct donor {
	char name[10];
	char surname[10];
	char adress[20];
	struct birtday {
		int birthday : 14;
	};
	enum group {
		group1 = 1,
		group2,
		group3,
		group4,
	};
};
struct size {
	int height;
	int width;
};
struct material {
	char holst[10];
	char tree[10];
	char paper[10];
};
struct material2 {
	char mramor[10];
	char gips[10];
	char bronza[10];
};
struct material3 {
	char mramor[10];
	char gips[10];
	char bronza[10];
};
struct scuplture {
	size scup1;
	material2 scup2;
};
struct jewelery {
	int weight;
	material3 jew1;
	int cost;
};
struct picture {
	size pic1;
	material pic2;
};