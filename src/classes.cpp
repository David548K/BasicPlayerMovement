#include <iostream>
#include "raylib.h"
#include <string>
#include <cmath>

class player{
    public:
    //  Miembros
        int vidaJugador;
        Texture2D texturaJugador;
        Vector2 posicionJugador;
        int velocidadJugador;

    //  Constructor & Destructor
        player(){
            std::cout << "Constructor DEFAULT Inicializado." << std::endl;
        }
        player(int vidaJugador_def, Texture2D texturaJugador_def, Vector2 posicionJugador_def, int velocidadJugador_def): vidaJugador(vidaJugador_def), texturaJugador(texturaJugador_def), posicionJugador(posicionJugador_def), velocidadJugador(velocidadJugador_def){
            std::cout << "Constructor PARAMETRIZADO Inicializado." << std::endl;
        }
        ~player(){
            std::cout << "Destructor Iniciado." << std::endl;
        }

    //  Metodos
        void DrawHimSelf(){
            DrawTexture(texturaJugador, posicionJugador.x, posicionJugador.y, WHITE);
        }
        void TalkBuddy(){
            DrawText("Well, Hello There!", (posicionJugador.x - 10), (posicionJugador.y - 10), 20, RED);
        }
        void MoveBuddy(){
            Vector2 direccionJugador;
            if(IsKeyDown(KEY_RIGHT)){
                direccionJugador.x += 1;
            }
            if(IsKeyDown(KEY_LEFT)){
                direccionJugador.x -= 1;
            }
            if(IsKeyDown(KEY_UP)){
                direccionJugador.y = -1;
            }
            if(IsKeyDown(KEY_DOWN)){
                direccionJugador.y = +1;
            }

            double magnitud = std::sqrt(direccionJugador.x * direccionJugador.x + direccionJugador.y * direccionJugador.y);
            if(magnitud > 0){
                direccionJugador.x /= magnitud;
                direccionJugador.y /= magnitud;
            }

            posicionJugador.x += direccionJugador.x * velocidadJugador;
            posicionJugador.y += direccionJugador.y * velocidadJugador;
        }
};