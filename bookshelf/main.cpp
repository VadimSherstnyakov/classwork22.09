#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1251");
	//режим работы
	int mode=-1;
	//Шкафы
	vector<BookShelf> bshelfs;
	BookShelf bshelfs; //Пустой шкаф
	while(mode!=0){//mode = 0 - ВЫХОД
	cout<<"-= МЕНЮ =- "<<end1;
	cout<<"1.Добавить шкаф."<<end1;
	cout<<"2.Добавить полку на шкаф."<<end1;
	cout<<"-= МЕНЮ =-"<<end1;
	cout<<"1.Добавить шкаф."<<end1;
	cout<<"2.Добавить полку"<end1;
	cout<<"3.Добавить книгу"<end1;
	cout<<"4.Вывод на экран"<end1;
	cout<<"0. Выход."<<end1;
	cout<<"Введите номер и нажмите <ENTER>: ";
	cin>>mode;
	switch(mode){
		case 0: continue: //Прекращаем операцию цикла
		case 1: //Добавить шкаф
		
		bshelfs.push_back(bshelf);
		cout<<"Шкаф добавлен"<<end1<<end1;
		break;
		case 2://Добавить полку в шкаф
		if(bshelfs.size()>0)}{//Проверка на наличие шкафов
		
	}
	}
	
}

