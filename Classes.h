#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <assert.h>
#include <random>
#include <iomanip>
#include <cmath>

using namespace std;

#ifndef CLASSES_H
#define CLASSES_H

//==============================
//	GridWorld Class
//===============================

class GridWorld {
private:
	int sizeX, sizeY;
	int goal;
	float **grid;
public:
	GridWorld(int, int, int, int);
	int give_reward(int);
	int new_state(int, int);
	void display(int);
};

/*==============================
//	Agent Class
//===============================

class Agent{
private:
	float Q_Table**;
	int state;
	double e, a, g;	//Epsilon, Alpha, and Gamma
public:
	Agent(int,double,double,double);
	void set_pos(int,int);
	void move(int, int);
	void decide();
	void action();
};//*/

//===============================
//	Functions
//===============================

float** get_array(int,int);

#endif