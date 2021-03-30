#include<iostream>
#include<string.h>
#include<vector>
#include<ctime>

constexpr int codeASCIIde_a = 97;
constexpr int codeASCIIde_A = 65;
constexpr int nombreDeLettres = 26;
constexpr int tailleMinNomVille = 4;
constexpr int tailleMaxNomVille = 12;
constexpr int grainePourLeRand = 1;
constexpr int nombreDeVilles = 4;
constexpr int nombreCombinaisons = 24;
constexpr int tailleCoteCarte = 100;

using namespace std;
void toutesLesPermutations(vector<string>& villes, int debut, int fin);
void randomnames(vector<string> villes);
int main() {
  cout << "ça marche" << endl;
  srand(time(NULL));
  vector<string> villes;
  randomnames(villes);
  cout << "ça marche" << endl;
  cout << villes.size() - 1<<endl;
  toutesLesPermutations(villes, 0, villes.size() - 1);
  cout << "ça marche" << endl;
  return 0;
}
void toutesLesPermutations(vector<string>& villes, int debut, int fin) {
  cout << "oui" << endl;
  if (debut == fin)
  {
    cout << "oui2" << endl;
    for (int i = 0; i < villes.size(); i++)
    {
      cout << "oui3" << endl;
      cout << villes[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "oui4" << endl;
    for (int i = debut; i <= fin; i++)
    {
      swap(villes[debut], villes[i]);
      toutesLesPermutations(villes, debut + 1, fin);
      swap(villes[debut], villes[i]);
    }
  }
}
void randomnames(vector<string> villes){
  for(int i = 0; i < nombreDeVilles; i++){
    int nbLettresNomVille = tailleMinNomVille + rand()%(tailleMaxNomVille - tailleMinNomVille + 1);
    string tmp = "";
    for(int i = 0; i < nbLettresNomVille; i++){
      if(i == 0){
        tmp += rand()%nombreDeLettres + codeASCIIde_A;
      }
      else{
        tmp += rand()%nombreDeLettres + codeASCIIde_a;
      }
    }
    villes.push_back(tmp);
    cout << tmp << endl;
  }
}
