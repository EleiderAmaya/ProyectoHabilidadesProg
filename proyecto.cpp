#include <iostream>
using namespace std;

int main()
{
	//placa=0,kilometraje=1
    int na;
    char continua;
    //kilometraje=0,tiposoat=1,tipovehiculo=2,...
	int autosN[5][6] = {};
	//placa = 0 , marca = 1
	string autosS[5][2] = {};
	int cant_autos = 0;
   do{
   		//imprime el menu del sistema
   	    cout << "            Bienvenido a CaRental        "<<"\n"<<endl;
		cout << "   seleciona la opcion 1:  para ver el parque automotor "<<endl; //Eleider..
		cout << "   seleciona la opcion 2:  para motrar informacion de un auto "<<endl; //David
		cout << "   seleciona la opcion 3:  para eliminar un  auto "<<endl; //David
		cout << "   seleciona la opcion 4:  para registrar un auto "<<endl; //Eleider
		cout << "   seleciona la opcion 5:  para buscar un vehiculo por la placa "<<endl; // Maria Alejandra
		cout << "   seleciona la opcion 6:  para ver los autos disponibles "<<endl; 
		cout << "   seleciona la opcion 7:  para ver los vehiculos alquilados "<<endl;
		cout << "   seleciona la opcion 8:  para ver vehiculos por tipo"<<endl;
		cout << "   seleciona la opcion 9:  ver vehiculos alquilados "<<endl;
		cout << "   seleciona la opcion 10: para devolver un vehiculo de alquilado a disponible  "<<endl;
		cout << "   seleciona la opcion 11: para ver los ingresos  \n"<<endl;
	 	cout << "    digite en numero de la opcion  \n"<<endl;   
	 	//pide la opcion del menu a ejecutar
	 	int opcion;
   		cin >> opcion ;
   		//seleccion  segun opcion que se ejecuta
       switch (opcion)
	   {
	   		//muetra un listado de todos los vehiculos disponibles
	       	case 1: cout << "mostrar parque automotor"<<endl;
			break;
			//registro de un vehiculo nuevo, si hay espacio
    		case 2 : 
    		cout<< "\tIngreso de vehiculos \n \n";
			cout<< "\tIngresar un Vehiculo \n"<<endl;
			//verifica si hay espacio para un nuevo vehiculo
			  if(cant_autos<=5){
			  	//busca en el arreglo donde esta vacio para ingresar un nuevo vehiculo
			  	for(int i = 0; i<5;i++){
			  		if(autosS[i][0]==""){
			  			cout<< "\tIngresar datos del vehiculo \n"<<endl;
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar kilometraje del vehiculo \n"<<endl;
			  			cin >> autosN[i][0];
			  			cout<< "\tIngresar maarca del vehiculo \n"<<endl;
			  			cin >> autosS[i][1];
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar placa del vehiculo \n"<<endl;
			  			cin >> autosS[i][0];
					}
				}
			  }else{
			  	cout << "no hay espaciopara mas vehiculos"<<endl;
			  }
			break;
    		case 3 :cout<<"3"; 
			break;
    		case 4: cout<< "4";                          

			break;
    		case 5 :cout<<"5"; 
			break;
    		default: ;
    	}

 	cout << "    digite s para regresar al menu, si no otra letra para salir  \n"<<endl;  
	 cin >> continua ; 		
   }while(continua=='s');
   


    return 0;
}

