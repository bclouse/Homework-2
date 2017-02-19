#include "Classes.h"

//===============================
//	GridWorld Class
//===============================

GridWorld::GridWorld(int sx, int sy, int gx, int gy) {
	sizeX = sx; sizeY = sy;
	goal = (gy-1)*sx+(gx-1);
	grid = get_array(sx,sy);
}

int GridWorld::give_reward(int state) {
	int reward = 0;
	if (state == goal) {
		reward = 100;
	}
	return reward - 1;
}

int GridWorld::new_state(int state, int direction) {

}

void GridWorld::display(int agent) {
	int current_state;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			current_state = i*sizeX+j;
			if (current_state == goal) {
				cout << "G ";
			} else if (current_state == agent) {
				cout << "A ";
			} else {
				cout << "_ ";
			}
		}
		cout << endl;
	}
}

//===============================
//	Agent Class
//===============================
/*
Agent(int,double,double,double) {
	
}

void set_pos(int,int) {
	
}

void move(int x, int y) {
	
}

void decide() {
	
}

void action() {
	
}

*/
//===============================
//	Functions
//===============================

float **get_array(int n, int m) {
	float **arr = new float* [n]();
	for (int i = 0; i < n; i++) {
		arr[i] = new float [m]();
	}
	return arr;
}