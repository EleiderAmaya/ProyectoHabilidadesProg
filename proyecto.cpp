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
	string placaBuscar;
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
	       	case 1: 
			   cout << "mostrar parque automotor"<<endl;
			   for (int i = 0; i< 5;i++){
			   	    cout <<"****************************************"<<endl;
			   		cout <<" Auto No: "<<i+1<<endl;
			   		cout <<" Placa: "<<autosS[i][0]<<" Marca: "<<autosS[i][1]<<" Kilometraje: "<<autosN[i][0]<<" Modelo: "<<autosN[i][1]<<endl;
					cout <<" Tipo Soat: "<<autosN[i][2]<<" Costo: "<<autosN[i][3]<<" Tipo vehiculo: "<<autosN[i][4]<<" Alquilado: "<<autosN[i][5]<<endl;
					cout <<"****************************************"<<endl;
			   }
			break;
			//registro de un vehiculo nuevo, si hay espacio
    		case 2 : 
    			cout<<"Eliminar Auto";
				cout<<"Digite la placa del auto a eliminar: ";
				cin >> placaBuscar;
				for(int i = 0; i<5;i++){
					if(autosS[i][0]==placaBuscar){
						cout <<"****************************************"<<endl;
				   		cout <<" Auto No: "<<i+1<<endl;
				   		cout <<" Placa: "<<autosS[i][0]<<" Marca: "<<autosS[i][1]<<" Kilometraje: "<<autosN[i][0]<<" Modelo: "<<autosN[i][1]<<endl;
						cout <<" Tipo Soat: "<<autosN[i][2]<<" Costo: "<<autosN[i][3]<<" Tipo vehiculo: "<<autosN[i][4]<<" Alquilado: "<<autosN[i][5]<<endl;
						cout <<"****************************************"<<endl;
						break;
					}
				}
				cout<<"Busqueda completa o placa no encontrada"<<endl;
				break;
    		
    		case 3 :
				cout<<"Eliminar Auto";
				cout<<"Digite la placa del auto a eliminar: ";
				cin >> placaBuscar;
				for(int i = 0; i<5;i++){
					if(autosS[i][0]==placaBuscar){
						autosS[i][0]=autosS[i][1]="";
						autosN[i][0]=autosN[i][1]=autosN[i][2]=autosN[i][3]=autosN[i][4]=autosN[i][5]=0;
						cant_autos--;
						cout<<"Auto No:"<<i+1<<" Eliminado!"<<endl;;
						break;
					}
				}
				cout<<"Eliminacion completa o placa no encontrada"<<endl;
				break;
    		case 4:
			cout<< "\cantidad de vehiculos: "<< cant_autos <<" \n \n";
			//si lacantidad de vahiculos es menor o igual a 4 deja ingresar, porque quedaria un espacio el 5
			  if(cant_autos<=4){
			  	//busca en el arreglo donde esta vacio para ingresar un nuevo vehiculo
			  	for(int i = 0; i<5;i++){
			  		if(autosS[i][0]==""){
			  			cout<< "\tIngreso de vehiculos \n \n";
						cout<< "\tIngresar un Vehiculo \n"<<endl;
			  			cout<< "\tIngresar auto No: "<< i+1 <<endl;
			  			//ingresamos cada uno de los campos de un vehiculo
			  			cout<< "\tIngresar datos del vehiculo \n"<<endl;
			  			cout<< "\tIngresar placa del vehiculo: \n"<<endl;
			  			cin >> autosS[i][0];
			  			cout<< "\tIngresar marca del vehiculo: \n"<<endl;
			  			cin >> autosS[i][1];
			  			cout<< "\tIngresar kilometraje: \n"<<endl;
			  			cin >> autosN[i][0];
			  			cout<< "\tIngresar modelo: \n"<<endl;
			  			cin >> autosN[i][1];
			  			cout<< "\tIngresar tipo soat: \n"<<endl;
			  			cin >> autosN[i][2];
			  			cout<< "\tIngresar costo alquiler: \n"<<endl;
			  			cin >> autosN[i][3];
			  			cout<< "\tIngresar tipo vehiculo: \n"<<endl;
			  			cin >> autosN[i][4];
			  			//ponemos el nuevo carro como disponible
			  			autosN[i][5]=0;
			  			//una vez ingresado el vehiculo confirmamos el ingreso imprimiendo los datos
			  			cout <<"Ingresado Nuevo Vehiculo"<<endl;
			  			cout <<"Placa: "<<autosS[i][0]<<"\nMarca: "<<autosS[i][1]<<"\nKilometraje: "<<autosN[i][0]<<"\nModelo: "<<autosN[i][1]<<endl;
						cout <<"Tipo Soat: "<<autosN[i][2]<<"\nCosto: "<<autosN[i][3]<<"\nTipo vehiculo: "<<autosN[i][4]<<"\nAlquilado: "<<autosN[i][5]<<endl;
						//aumento la cantidad de autos guardados
						cant_autos++;
						//si se guarda el vehiculo 5 se llena el cupo y salimos
						if(cant_autos==5){
							cout << "no hay espaciopara mas vehiculos"<<endl;
							break;
						}
						//como ya se lleno los datos salimos y volvemos al menu
						break;
					}
				}
			  }else{
			  	//somo la cantidad no es menor ni igual a 4, sino que es 5 no deja ingresar
			  	//avisa al usuario que no hay mas cupos
			  	cout << "no hay espaciopara mas vehiculos"<<endl;
			  }
				break;
    		case 5 :
				cout<<"5"; 
				break;
    		default: ;
    	}

 	cout << "    digite s para regresar al menu, si no otra letra para salir  \n"<<endl;  
	 cin >> continua ; 		
   }while(continua=='s');
   


    return 0;
}

