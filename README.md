# chat_v2
for skillfactory

версия консольного чата

Состав команды:
Максим Вельгач (https://github.com/Lordgprs) - тимлид. Отвечает за реализацию хранения и отправки сообщений и за общую структуру кода
Сергей Маркин (https://github.com/MarS-37) - отвечает за структуру классов chat_mgr (управление), chat_user (пользователи), за хранение списка пользователей в памяти, за обработку команд вида /<command>

РЕАЛИЗОВАНО:
 
Выход из программы (команда /exit)

Вывод справки по работе программы (команда /help) 

Регистрация в чате (команда /signup)
 - при регистрации вводим имя логин и пароль
 - обработка исключений: логин и пароль не должен быть пустым
 - обработка исключений: попытка регистрации уже зарегистрированного пользователя
 - обработка исключений: если есть авторизованный пользователь, регистрация недоступна
 - логин пользователя может состоять только из A-Z,a-z,"-","_"
 
Авторизация в чате (команда /signin)
 - при авторизации вводим логин и пароль
 - обработка исключений: проверка регистрации логина
 - обработка исключений: проверка пароля пользователя
 - обработка исключений: если есть авторизованный пользователь, авторизация недоступна
 - при успешной авторизации вывести приветствие по имени пользователя

Выход авторизованного пользователя (команда /logout)
Удаление авторизованного пользователя (команда /remove)

Реализовать отправку сообщений:
 - если есть авторизованный пользователь и введен текст, текст отправляется как 
	сообщение для всех пользователей
 - если сообщение будет начинаться с @<username> где username - логин зарегистрированного пользователя,
	оно будет отправлено сообщение пользователю username
 - не подходящий к этим условиям введеный текст не рассматривается программой
 
 Пользовательские типы:
 - template dynamic_array: шаблонный контейнер, используется для хранения указателей на сообщения.
 - chat_user: класс для хранения информации о пользователях
 - chat_message: абстрактный класс, описывающий интерфейс работы с сообщениями. Объявлены чистые виртуальные функции:
 print() - печать сообщения, 
 printIfUnreadByUser() - печать сообщения только если оно ещё не прочитано активным пользователем,
 isRead() - проверка, прочитано ли сообщение активным пользователем
 - private_message: унаследованный от chat_message класс для работы с личными сообщениями
 - broadcast_message: унаследованный от chat_message класс для работы с широковещательными сообщениями
 - chat_mgr: основной класс программы, содержащий метод work(), отвечающий за работу программы.
 