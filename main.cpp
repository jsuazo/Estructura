// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)
{
   return mi_cola.front(); //obtiene primer elemento de la cola


}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
  return  mi_cola.size(); // Obtiene tamaño de la cola

}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
  while(!mi_cola.empty()) //Verifica que la cola no este vacia
    {
    if(mi_cola.front()==str)// verifica si existe el elemento

        return true;
        mi_cola.pop();

  }
    return false;
}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    int aux= 0;
    while(!mi_cola.empty())  //Verifica que la cola no este vacia
    {
       if(mi_cola.front()>aux) //verifica si el frente de la cola es mayor que la variable
       {                     //auxiliar, esta tome la e valor del elemento del frente hasta
          aux = mi_cola.front(); // encontrar el mayor
       }
       mi_cola.pop();
    }
   return aux;
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    int aux = mi_cola.front();

     while(!mi_cola.empty()) //Verifica que la cola no este vacia
     {
       if(mi_cola.front()<aux) //verifica si el frente de la cola es menor que la variable
       {                    //auxiliar, esta tome la e valor del elemento del frente hasta
          aux = mi_cola.front(); // encontrar el menor
       }
       mi_cola.pop();
    }
   return aux;

}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    float prom =0;
    float suma =0;
    float tam = mi_cola.size();

    while(!mi_cola.empty())
    {
        suma += mi_cola.front(); // suma los elementos de la cola
        mi_cola.pop();
    }
    prom = suma/tam; // calcula el promedio

    return prom;
}

int main ()
{
    //Funcion evaluadora*/
  evaluar();
    return 0;
}
