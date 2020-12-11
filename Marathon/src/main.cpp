#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "runner.h"
#include "parcour.h"
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <fstream>

using namespace std;

/*void progress(int value){
  value++;
}*/

int main() {
    int var = 1;
    int oui = 1;
    srand(time(NULL));
    vector<runner>Allrunner;
    for(int i=0; i < 20; i++){
        Allrunner.push_back(runner());
        cout << endl;
        Allrunner[i].print();
    }
    parcour test;
    
    Allrunner = test.run(Allrunner);


    //creation of  scores.txt
    string const MyFile("./src/scores.txt");
    ofstream monFlux(MyFile.c_str());

    if(monFlux){
      for(int i=0; i < 20; i++){
        if(Allrunner[i].rip ==true){
          monFlux << "n°" << i+1 << " : " << setw(2) << Allrunner[i].Name << " temps : " << "not finish" << endl;
        }
        else{
          if(i+1 < 10){
            monFlux << "n°" << setw(2) << i+1 << setw(3) << " : " << setw(2) << Allrunner[i].Name << " temps : " <<  Allrunner[i].tmps << endl;
          }
          else{
            monFlux << "n°" << i+1 << " : " << setw(2) << Allrunner[i].Name << " temps : " << Allrunner[i].tmps << endl;
          }
        }
      }
    }
    else{
      cout << "Error no file found !"<<endl;
    }

    return 0;
}
