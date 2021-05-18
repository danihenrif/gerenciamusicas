#Compila todos os arquivos e gera o executável
all: create_dir main

#Cria pasta para armazenar os arquivos objetos
create_dir: 
	mkdir -p bin

#Compila o arquivo musica.cpp e gera o arquivo objeto musica.o
bin/musica.o: src/musica.cpp
	g++ src/musica.cpp -Iinclude -O0 -g -Wall -pedantic -std=c++11 -c -o bin/musica.o

#Compila o arquivo no.cpp e gera o arquivo objeto no.o
bin/no.o: src/no.cpp bin/musica.o
	g++ src/no.cpp -Iinclude -O0 -g -Wall -pedantic -std=c++11 -c -o bin/no.o

#Compila o arquivo lista.cpp e gera o arquivo objeto lista.o
bin/lista.o: src/lista.cpp bin/no.o
	g++ src/lista.cpp -Iinclude -O0 -g -Wall -pedantic -std=c++11 -c -o bin/lista.o

#Compila o arquivo sistema.cpp e gera o arquivo objeto sistema.o
bin/sistema.o: src/sistema.cpp bin/lista.o
	g++ src/sistema.cpp -Iinclude -O0 -g -Wall -pedantic -std=c++11 -c -o bin/sistema.o

# Compila o arquivo main.cpp, gera o arquivo objeto main.o e o executável
bin/main.o: src/main.cpp bin/sistema.o
	g++ src/main.cpp -Iinclude -O0 -g -Wall -pedantic -std=c++11 -c -o bin/main.o

# Cria o arquivo executável
main: bin/main.o
	g++ bin/*.o -Iinclude -O0 -g -Wall -pedantic -std=c++11 -o main

# Executa o programa
run: all
	./main

# Apaga a pasta de arquivos objetos e o executável
clean:
	rm -rf bin main