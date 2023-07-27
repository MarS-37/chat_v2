# chat_v2
for skillfactory

версия консольного чата

ПЛАНИРУЕТСЯ РЕАЛИЗОВАТЬ:
 
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
 - если есть авторизованный пользователь и введен текст текс отправляется как 
	сообщение для всех пользователей
 - если будет указано @username где username имя зарегистрированного пользователя
	будет отправлено сообщение пользователю username
 - не подходящий к этим условиям введеный текст не рассматривается программой
 
РЕАЛИЗОВАНО:
 - закрытие программы командой /exit
 - вывод справки по использованию программы командой /help
 - при регистрации проверяем ввод пустого логина или пароля
 - при регистрации проверяем ввод допустимых символов A-Z,a-z,"-","_"
 - при регистрации проверяем не используется ли логин уже зарегистрированным пользователем 
 - при авторизации проверяем правильность пароля зарегистрированного пользователя
 - при успешной авторизации вывести приветствие по имени пользователя
 - при удачной авторизации в строку ввода выводится логин авторизованного пользователя
 - при авторизованом пользователе не доступна регистрация
 - выход авторизованного пользователя
 - удаление авторизованного пользователя
 - авторизованный пользователь может отправить сообщение всем пользователям
 - авторизованный пользователь может отправить сообщение зарегистрированному пользователю
	если в начале сообщения указать @username
 - когда нет авторизованного пользователя выполняются только команды, все остальное ошибка
 
 #########################################################################################