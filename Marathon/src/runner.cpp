#include <string>
#include "runner.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
int rnd;
using namespace std;

vector <int> rndp;

string Names[20]={"Pierre   ", "Paul     ", "Jacques  ", "Jasmine  ", "Elise    ", "Julie    ", "Jean     ", "Baptiste ", "Kevin    ", "Charlotte", "Katty    ", "Lucie    ", "Gérard   ", "Thomas   ", "Alexandre", "Lisa     ", "Anna     ", "Romane   ", "Mathieu  ", "François " };

runner::runner() {
  int c = 0;
  int sizeVec;
  float speed = randNum(7, 20);
  this->size = randNum(130, 200);
	this->mass = randNum(45, 120);
	this->shoes = randNum(100, 300);
	this->avg_speed = speed;
	this->prep = randNum(8, 16);

  while (c ==0){
      c =1;
      rnd = randNum(0,19);
      sizeVec = rndp.size();
      for(int i=0; i < sizeVec; i++){
          if(rnd == rndp[i]){
              c = 0;
              i = 1000;
          }
      }
  }
  this->doss = rnd;
  this->time = 0;
  this->tmps="0";
  this->Name = Names[rnd];
  this->act_speed = speed;
  this->done = false;
  this->hyd = (0.5 * (speed / 5.250));
  rndp.push_back(rnd);
}

void runner::print(){
  cout << "Nom :" << setw(3) << this->Name << endl;
  //cout << "dst_done :" << setw(3) << this->dst_done << endl;
  //cout << "temps :" << setw(3) << this->tmps << endl;
	cout << "Numéro de dossard :" << setw(3) << this->doss << endl;
	//cout << "Taille :" << setw(3) << this->size << " cm" << endl;
	//cout << "Masse :" << setw(3) << this->mass << " kg" << endl;
  //cout << "Hydratation :" << setw(3) << this->hyd << " L"  << endl;
	//cout << "Poids de la chaussure :" << setw(3) << this->shoes << " g" << endl;
	//cout << "Vitesse moyenne précedente :" << setw(3) << this->avg_speed << " Km/h" << endl;
  //cout << "avg_speed : " << this->get_avg() << endl;
	//cout << "Semaine de préparation :" << setw(3) << this->prep << endl;
}

float randNum(int min, int max) {
    float Rand = rand() % (max - min + 1) + min;
    return Rand;
}

void runner::set_speed(float new_speed){
    act_speed = new_speed;
}

float runner::get_avg(){
    return avg_speed;
}

float runner::get_shoes(){
    return shoes;
}

float runner::get_act(){
    return act_speed;
}
