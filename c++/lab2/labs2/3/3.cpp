#include <iostream>
#include <string>
#include "Photographer.h"
#include <ctime>
/*
Написать собственный класс, в соответствии с вариантом. Продемонстрировать в коде
инкапсуляцию данных, применение конструкторов без параметров и с параметрами
для инициализации данных. Класс должен содержать метод serialize() для
сохранения данных класса в файл и метод deserialize() для чтения данных класса
из файла по умолчанию в текущей директории, а также перегруженные методы
serialize(const std::string& filename) и deserialize(const std::string&
filename) для работы с файлом с указанным в параметре именем.
Класс ФОТОГРАФ.
Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с
помощью сеттеров, а третий проинициализировать с помощью конструктора с
параметрами. В главной функции проимитировать три фотосессии и голосование
зрителей по их результатам (нарастить рейтинг каждого фотографа на случайное число
из диапазона 0.0..1.0; если количество проголосовавших людей меньше 10, то не
наращивать рейтинг). Вывести список фотографов в порядке убывания суммарного
рейтинга.

*/
using namespace std;

void selectionOfPhotographers(Photographer ph1, Photographer ph2, Photographer ph3);

int main() {

	setlocale(0, "");
	srand(time(0));

	Photographer* Alfred = new Photographer();
	Alfred->setName("Alfred ");
	Alfred->setLastName("Steiglitz ");
	Alfred->setGender("man");
	Alfred->setYearBirth("19.06.1996");
	Alfred->setYearActivity("2015");
	Alfred->setRating(4.5);


	Photographer* Robert = new Photographer();
	Robert->setName("Robert ");
	Robert->setLastName("Capa ");
	Robert->setGender("man");
	Robert->setYearBirth("23.04.2002");
	Robert->setYearActivity("2015");
	Robert->setRating(2.7);

	Photographer Ansel("Ansel", "Adams ", "man", "13.05.2001", "2015", 3.5);
	

	Ansel.photosession();
	Alfred -> photosession();
	Robert -> photosession();


	Photographer judge;
	judge.selectionOfPhotographers(Ansel, *Alfred, *Robert);

	
	return 0;
}

