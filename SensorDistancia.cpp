#include "Arduino.h"
#include "SensorDistancia.h"

SensorDistancia::SensorDistancia(int pinesConexion1, int pinesConexion2,double distanciaSensada,boolean ondaLanzada){

  this.pinesConexion1=pinesConexion1;
  this.pinesConexion2=pinesConexion2; 
  this.distanciaSensada=distanciaSensada; 
  this.ondaLanzada = ondaLanzada; 
}

// Función que ayude a inicializar los pines 
SensorDistancia::inicializar(){

  pinMode(this.pinesConexion1,INPUT);
  pinMode(this.pinesConexion2,INPUT); 
  
}


SensorDistancia:: getValorSensado(){
  return this.ValorSensado;
}

SensorDistancia:: distancia (){
  int distancia = this.ValorSensado*0.5;
  return distancia; 
}

SensorDistancia::setondaLanzada(boolean lanzada){
  this.ondaLanzada=Lanzada; 
}

SensorDistancia:: getondaLanzada(){
  return ondaLanzada;
}

SensorDistancia:: setPinesConexion( int eleccion, int pinModificar){
  if(eleccion==1){
    this.pinesConexion1=pinModificar;
  }else{
    this.pinesConexion2=pinModificar;
  }
}
