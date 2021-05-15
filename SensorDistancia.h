#ifndef SensorDistancia_h
#define SensorDistancia_h

#include "Arduino.h"

// Sensor de distancia
class SensorDistancia {
  private:
    int pinesConexion1;
    int pinesConexion2;
    double distanciaSensada;
    boolean ondaLanzada;

  public:

    SensorDistancia(int pinesConexion1, int pinesConexion2,double distanciaSensada,boolean ondaLanzada);
    double getValorSensado();
    int distancia();
    void setondaLanzada(boolean lanzada);
    boolean getondaLanzada();
    void setPinesConexion( int eleccion, int pinModificar);
    void inicializar(); 
};
#endif 
