#include <iostream> 
#include <windows.h> // Para conseguir o efeito de loading
#include <cstdlib> // Para usar system("cls")
#include <locale>
using namespace std;

void Pausar() {
    cout << "\nPressione Enter para continuar...";
    cin.ignore(); // Ignora qualquer entrada anterior no buffer
    cin.get();    // Aguarda o usuário pressionar Enter
}

int MenuJogo(){ // Função para o menu do jogo
    int opcao;
    cout << "Bem-vindo ao Jogo!" << endl;
    for(int i = 0; i < 3; i++){
        cout<<".";
        Sleep(1000); // Efeito de loading
    }
    Sleep(2000); // Pausa de 1 segundo
    system("cls");

    cout << "======================" << endl;
    cout << "|     MasterMind     |" << endl;
    cout << "|   Deluxe Edition   |" << endl;
    cout << "======================" << endl;

    cout << "opcao uma opcao:" << endl;
    cout << "1. Iniciar Jogo" << endl;
    cout << "2. Dificuldade" << endl;
    cout << "3. Sobre" << endl;
    cout << "4. Sair" << endl;

    cout << "Selecione a opção digitando o numero: ";
    cin >> opcao;

    return opcao;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao; //Setagem de variaveis

do{
    opcao = MenuJogo();

    switch(opcao){ //Switch para o menu
        case 1:
            cout << "Iniciando o jogo..." << endl;
            // Aqui você pode chamar a função que inicia o jogo
            break;
        case 2:
            cout << "Escolhendo a dificuldade..." << endl;
            // Aqui você pode chamar a função que define a dificuldade
            break;
        case 3:
        system("cls");
        cout << "Sobre o jogo";
        for(int i = 0; i < 3; i++){
            cout<<".";
            Sleep(1500); // Efeito de loading
        }
        Sleep(2000); // Pausa de 1 segundo
        system("cls");

        cout << "Maio de 2025" << endl;
        cout << "Este é um jogo de adivinhação onde você deve descobrir a combinação correta!" << endl << endl;
        cout << "Desenvolvido por Erick Leonardo de Cól Silva e Jorge Alexsandro de Oliveira." << endl;
        cout << "Sistema desenvolvido para o trabalho da disciplina de Algoritmos de Programação, ministrada pelo professor Alex Rese." << endl;
        Pausar();
        system("cls");
            break;
        case 4:
            cout << "Saindo do jogo";
            for(int i = 0; i < 3; i++){
                cout<<".";
                Sleep(1000); // Efeito de loading
            }
            system("cls");
            break;
        default:
            cout << "Opção inválida! Tente novamente." << endl;
    }
    
}while(opcao != 4);

cout << "Obrigado por jogar!" << endl;
    return 0;
}