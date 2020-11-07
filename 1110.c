#include <iostream>
#include <queue>

using namespace std;

int main(){
  int baralho
  while(cin >> baralho && baralho)
  {
    queue <int> fila;
    for(int x=1; x <= baralho; x++)
    {
      fila.push(x);
    }
    cout << "discarded cards:";
    while(fila.size() > 1)
    {
        cout << " " << fila.front();
        fila.pop();
        fila.push(fila.front());
        fila.pop();
        if (fila.size() > 1) cout << ";";
    }
    cout << endl << "remaining card:" << fila.front() << endl;
  }
  return 0
}
