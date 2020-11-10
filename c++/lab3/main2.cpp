#include <iostream>
#include <string>
#include "Photographer.h"
#include "Designer.h"
#include <ctime>

int main() {
	/*
	¬ариант 8
 ласс ‘ќ“ќ√–ј‘ + классы ƒ»«ј…Ќ≈–, —ќ“–”ƒЌ» .
–еализовать схему наследовани€ классов и корректно распределить по классам данные:
им€, фамили€, пол, год рождени€, год начала де€тельности, рейтинг, телефон,
количество фотографий в портфолио.
»нтерфейс обработки компьютерных изображений IPictureProcessor с методом void
process(const std::string& photo_path). –еализаци€ метода в классе фотографа:
вывод на экран сообщени€ УPhoto was processed by /им€_фотографа/Ф, а также
наращивание количества фотографий в портфолио. –еализаци€ метода в классе
дизайнера: вывод на экран сообщени€ УImage was produced by /им€_дизайнера/Ф, а также
изменение рейтинга на некоторую величину. ¬ main() cоздать 2 фотографов и 2
дизайнеров, продемонстрировать полиморфизм process().*/

	setlocale(0, "");
	srand(time(0));


	Photographer Alfred("Alfred", "Steiglitz ", "man", "19.06.1996", "2015", 13, 6);
	Alfred.print();
	Photographer Ansel("Ansel", "Adams ", "man", "13.05.2001", "2015", 6, 6);
	Ansel.print();

	Designer Raphael("Raphael", "Santi ", "man", "13.05.2001", "2015", 3, 7);
	Raphael.print();
	Designer Claude("Claude", "Monet ", "man", "13.05.2001", "2015", 5, 3);
	Claude.print();

	cout << "-------------------------------------" << endl;

	Alfred.process("photo_path");
	Ansel.process("photo_path");
	Raphael.process("photo_path");
	Claude.process("photo_path");


	Alfred.print();
	Ansel.print();

	Raphael.print();
	Claude.print();
	return 0;

}




