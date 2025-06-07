#include <iostream>
#include "raylib.h"
#include <string>

class player{
    public:
    //  Miembros
        int VidaJugador;
        Texture2D TexturaJugador;
        Vector2 PosicionJugador;
        int VelocidadJugador;

    //  Constructor & Destructor
        player(){
            std::cout << "Constructor DEFAULT Inicializado." << std::endl;
        }
        player(int VidaJugador_def, Texture2D TexturaJugador_def, Vector2 PosicionJugador_def, int VelocidadJugador_def): VidaJugador(VidaJugador_def), TexturaJugador(TexturaJugador_def), PosicionJugador(PosicionJugador_def), VelocidadJugador(VelocidadJugador_def){
            std::cout << "Constructor PARAMETRIZADO Inicializado." << std::endl;
        }
        ~player(){
            std::cout << "Destructor Iniciado." << std::endl;
        }

    //  Metodos
        void DrawHimSelf(){
            DrawTexture(TexturaJugador, PosicionJugador.x, PosicionJugador.y, WHITE);
        }
        void TalkBuddy(){
            DrawText("Well, Hello There!", (PosicionJugador.x - 10), (PosicionJugador.y - 10), 20, RED);
        }
        void MoveBuddy(){
            
            if(IsKeyDown(KEY_RIGHT)){
                PosicionJugador.x += VelocidadJugador;
            }
            if(IsKeyDown(KEY_LEFT)){
                PosicionJugador.x -= VelocidadJugador;
            }
            if(IsKeyDown(KEY_UP)){
                PosicionJugador.y -= VelocidadJugador;
            }
            if(IsKeyDown(KEY_DOWN)){
                PosicionJugador.y += VelocidadJugador;
            }
        }
};