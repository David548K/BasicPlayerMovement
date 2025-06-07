#include <iostream>
#include "raylib.h"
#include <string>

class player{
    public:
    //  Constructor & Destructor
        player(){
            std::cout << "Constructor DEFAULT Inicializado." << std::endl;
        }
        player(Texture2D textura_def, int hp_def, int velocidad_def, Vector2 posicion_def){
            std::cout << "Constructor PARAMETRIZADO Inicializado." << std::endl;
            setHp(hp_def);
            setVelocidad(velocidad_def);
            setPosicion(posicion_def);
            setTexture(textura_def);
        }
        ~player(){
            std::cout << "Destructor Iniciado." << std::endl;
        }

    //  Metodos
        void printHelloThere(){
            DrawText("Well, Hello There!", 20, 20, 10, BLUE);
        }
        void drawPlayer(){
            DrawTexture(getTexture(), posicion.x, posicion.y, WHITE);
        }


    //  Getters & Setters
        void setHp(int hp){
            this->hp = hp;
        }
        void setVelocidad(int velocidad){
            this->velocidad = velocidad;
        }
        void setPosicion(Vector2 posicion){
            this->posicion.x = posicion.x;
            this->posicion.y = posicion.y;
        }
        void setTexture(Texture2D textura){
            this->textura = textura;
        }
        int getHp(){
            return hp;
        }
        int getVelocidad(){
            return velocidad;
        }
        Texture2D getTexture(){
            return textura;
        }

    private:
    //  Miembros
        int hp;
        int velocidad;
        Vector2 posicion;
        Texture2D textura;
};