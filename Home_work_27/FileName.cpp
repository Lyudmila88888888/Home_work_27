#include <iostream>
#include <string>

// Задание.
struct Movie {
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int price;
};
// Задача 1.
void print_movie(const Movie& MM) { 
	std::cout << " Название фильма: " << MM.title << std::endl;
	std::cout << " Год выхода фильма: " << MM.year << std::endl;
	std::cout << " Жанр фильма: " << MM.genre << std::endl;
	std::cout << " Продолжительность фильма в минутах: " << MM.duration << std::endl;
	std::cout << " Цена за диск фильма: " << MM.price << std::endl;
}
// Задача 2.
Movie expensive(Movie arr[], int length) {
	Movie maxPricedMovie = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i].price > maxPricedMovie.price) {
			maxPricedMovie = arr[i];
			std::cout << " Самая высокая цена за диск:\n";
		}
	}
	return maxPricedMovie;
}

// Задача 3.
void update_info(Movie& MM) {

	    std::cout << "Обновить информацию о фильме: " << MM.title << std::endl;

		std::cout << "Введите новое название  (или нажмите enter): ";
		std::string newTitle;
		std::getline(std::cin, newTitle);
		if (newTitle.length() != 0) {
			MM.title = newTitle;
		}

		std::cout << "Введите новый год выхода фильма (или нажмите enter): ";
		std::string newYear;
		std::getline(std::cin, newYear);
		if (newYear.length() != 0) {
			MM.year = std::stoi(newYear);
		}

		std::cout << "Введите новый жанр (или нажмите enter): ";
		std::string newGenre;
		std::getline(std::cin, newGenre);
		if (newGenre.length() != 0) {
			MM.genre = newGenre;
		}

		std::cout << "Введите новую продолжительность (или нажмите enter): ";
		std::string newDuration;
		std::getline(std::cin, newDuration);
		if (newDuration.length() != 0) {
			MM.duration = std::stoul(newDuration);
		}

		std::cout << "Введите новую цену (или нажмите enter): ";
		std::string newPrice;
		std::getline(std::cin, newPrice);
		if (newPrice.length() != 0) {
			MM.price = std::stoul(newPrice);
		}
	}

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1.
	std::cout << " Задача 1.\n";
	Movie M1{ "Человек-муравей и Оса: Квантомания", 2023, "Боевик/Приключения", 125, 350 };
	print_movie(M1);

	std::cout << "---------------------------------\n";

	// задача 2.
	std::cout << " Задача 2.\n";
	Movie M2{ "Черный Адам", 2022, "Боевик/Приключения", 125, 1000}; 
	Movie M3{ "Охотники за привидениями: Наследники", 2021, "Комедия/Фэнтези", 124, 400 };
	Movie M4{ "Аквамен", 2018, " Боевик/Фэнтези", 133, 500 };
	Movie M5{ "Области тьмы", 2011, "Триллер/Научная фантастика", 105, 300 };
	Movie M6{ "Чудо-женщина", 2017, " Боевик/Военный", 141, 800 };
	
	const int size = 6;
	Movie arr1[size]{ M1, M2, M3, M4, M5, M6 };
	print_movie(expensive(arr1, size));

	std::cout << "---------------------------------\n";

	// Задача 3.

	update_info(M2);
	
	return 0;
}