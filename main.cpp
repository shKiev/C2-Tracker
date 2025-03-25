#include <iostream>
#include <cpr/cpr.h>  // Подключаем библиотеку cpr для работы с HTTP-запросами

int main() {
    // Отправка GET-запроса на сайт
    cpr::Response r = cpr::Get(cpr::Url{"http://example.com"});

    // Проверка успешности запроса
    if (r.status_code == 200) {
        std::cout << "Request was successful!" << std::endl;
        std::cout << "Response Text: " << r.text << std::endl;  // Выводим текст ответа
    } else {
        std::cerr << "Error: Unable to fetch data. Status code: " << r.status_code << std::endl;
    }

    return 0;
}
