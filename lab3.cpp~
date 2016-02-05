#include <iostream>
#include <ctime>
#include<cstdlib>

using std::cout;
using std::cin;
using std::endl;

void eje1();

int main(int argc,char* argv[]){

int res_menu;

cout << "MENU: " << endl << "1-ejercicio 1 (la tabla de score se borra al salir de este programa)" << endl << "2-ejercicio 2" << endl << endl;
cin >> res_menu;

if(res_menu == 1){
	eje1();
}else if(res_menu == 2){

}else{
	cout << "Opcion no valida" << endl;
}

return 0;
}

void eje1(){
	int resp=1,con=0,res,con_reinicio;
	int score[10]={50,50,50,50,50,50,50,50,50,50};

	do{

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
				for(int j=i;j<10;i++){
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
