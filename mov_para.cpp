#include<iostream>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;


int main (){
  double V1,hmax,Xmax,Tt,theta,v,Vx,Vy,V;
  cout<<"Ingrese angulo en radianes"<<endl;
  cin>>theta;
  cout<<"Ingrese el valor de velocidad"<<endl;
  cin>>V1;
  Vx=V1*cos(theta);
  Vy=V1*sin(theta);
  cout<<"La componente de velocidad en x  es "<<Vx<<endl;
  cout<<"La componente de velocidad en y es "<<Vy<<endl;
  V=Vx+Vy;
  cout<<"La magnitud de la velocidad es "<<V<<endl;
  cout<<"Ingrese  aceleracion de la gravedad "<<v<<endl;
  cin>>v;
  hmax=V*(V/v)+0.5*v*(V/v*V/v);
  cout<<"La altura maxima es "<<hmax<<endl;
  Xmax=(V*cos(theta))*2*V/v;
  cout<<" El alcanze maximo es "<<Xmax<<endl;

}
 
 
