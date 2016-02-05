#include <iostream>
#include <ctime>
#include<cstdlib>

using std::cout;
using std::cin;
using std::endl;

void eje1();
void eje2();

int main(int argc,char* argv[]){

int res_menu;

cout << "MENU: " << endl << "1-ejercicio 1 (la tabla de score se borra al salir de este programa)" << endl << "2-ejercicio 2" << endl << endl;
cin >> res_menu;

if(res_menu == 1){
	eje1();
}else if(res_menu == 2){
	eje2();
}else{
	cout << "Opcion no valida" << endl;
}

return 0;
}

void eje1(){
	int resp=1,con=0,res,con_reinicio;
	int score[10]={50,50,50,50,50,50,50,50,50,50};

	do{
		con=0;
		int mayor=500,menor=-500;
		srand(time(NULL));
		int random = rand()%mayor+menor;
		cout << "Respuesta = " << random << endl;		

		while(res != random){
			con++;
			cout << "Adivine: " << endl; 
			cin >> res;
			if(res == random){
				cout << "Ganaste" << endl << "Intentos: " << con << endl;
			}else if(res > random){
				cout << "Usted ingreso un numero mayor" << endl;
			}else if(res < random){
				cout << "Usted ingreso un numero menor" << endl;
			}
		}

	for(int i=0;i<10;i++){
		if(con < score[i]){
			if(i!=9){
				score[i+1]=score[i];
			}else
			if(i<8){
				for(int j=i;j<10;j++){
					score[j+1]=score[j];
				}	
			}
			score[i]=con;
			break;		
		}
	}

	cout << endl;
	cout << "SCORES" << endl;
	for(int i=0;i<10;i++){
		cout << score[i] << endl;
	}

	cout << endl;

	cout << "Desea jugar de nuevo [1=si/2=no]: " << endl;
	cin >> resp;
	cout << endl;

	}while(resp == 1);

}

void eje2(){

	srand(time(NULL));
	int row=4,col=3,random;
	int matriz[row][col];
 	
	//ataque
	for(int i=0;i<4;i++){
		random = rand()%29+85;
		matriz[i][0]=random;
	}
	
	//defensa
	for(int i=0;i<4;i++){
		random = rand()%24+50;
		matriz[i][1]=random;
	}
	
	//velocidad
	for(int i=0;i<4;i++){
		random = rand()%49+150;
		matriz[i][2]=random;
	}

	cout << "Ataque          " << "Defensa         " << "Velocidad       " << endl;
	cout << matriz[0][0] << "             " << matriz[0][1] << "              " << matriz[0][2] 		<< endl;
	cout << matriz[1][0] << "             " << matriz[1][1] << "              " << matriz[1][2] 		<< endl;
	cout << matriz[2][0] << "             " << matriz[2][1] << "              " << matriz[2][2] 		<< endl;
	cout << matriz[3][0] << "             " << matriz[3][1] << "              " << matriz[3][2] 		<< endl;

	int player1[3];
	int player2[3];

	//player 1
	random = rand()%4+0;
	player1[0]=matriz[random][0];
	
	random = rand()%4+0;
	player1[0]=matriz[random][1];
	
	random = rand()%4+0;	
	player1[0]=matriz[random][2];

	//player 2
	random = rand()%4+0;
	player2[0]=matriz[random][0];
	
	random = rand()%4+0;
	player2[0]=matriz[random][1];
	
	random = rand()%4+0;	
	player2[0]=matriz[random][2];	

	int resultado_P1,resultado_P2;
	resultado_P1 = player1[0]-player2[1];
	resultado_P2 = player2[0]-player1[1];

	if(resultado_P1>resultado_P2){
	cout << "jugador 1, gano con " << resultado_P1-resultado_P2 << " puntos de diferencia, no gano por velocidad" << endl; 
	}else if(resultado_P1<resultado_P2){
	cout << "jugador 2, gano con " << resultado_P2-resultado_P1 << " puntos de diferencia, no gano por velocidad" << endl;
	}else if(resultado_P1==resultado_P2){
		if(player1[2]>player2[2]){
			cout << "jugador 1, gano con " << resultado_P1-resultado_P2 << " puntos de diferencia, gano por velocidad" << endl;	
		}else if(player1[2]<player2[2]){
			cout << "jugador 2, gano con " << resultado_P2-resultado_P1 << " puntos de diferencia, gano por velocidad" << endl;
		}
	}
}
