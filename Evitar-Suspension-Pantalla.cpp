//Libreria principal
#include<iostream>

//Libreria que permite el uso del MOUSE
#include<windows.h>

int main()
{
	//Declaramos los valores que tomara el cursor en X --> _ , y Y|
	int x = 10000, y = 10000;

	//Indicamos al usuario como puede cancelar o detener el programa
	std::cout<<"De clic en la X o presione ALT + F4 para cerrar el programa";

	//Este ciclo nunca se detendra, acaso que se cierre el programa
	while(true)
	{
		
		//Posicionamos el cursor de nuestro mouse fuera de la pantalla	
		SetCursorPos(x,y);
		
		//Simulamos un clic izquierdo del mouse 
		mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,0,0);
		mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);	
		
		//Esperamos 10 segundos para dar otro clic 
		Sleep(10000);
	}	
	//Evitamos la terminacion del programa
	system("pause");
	
	return 0;
}
