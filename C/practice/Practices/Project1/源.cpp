#include<iostream>
#include<vector>

using namespace std;

typedef struct tagObject
{
	int weight;
	int price;
	int status;
}OBJECT;

typedef struct tagKnapsackProblem
{
	std::vector<OBJECT> objs;
	int totalC;
}KNAPSACK_PROBLEM;

void GreedyAlgo(KNAPSACK_PROBLEM *problem,SELECT)