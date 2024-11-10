# Nombre del archivo fuente
SRC = equals.cc

# Nombre del archivo ejecutable
EXEC = equals

# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -g

# Regla por defecto (compila el programa)
all: $(EXEC)

# Cómo compilar el archivo ejecutable
$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

# Regla para limpiar los archivos generados
clean:
	rm -f $(EXEC) *.o

# Regla para mostrar un mensaje cuando se ejecute 'make help'
help:
	@echo "Usa 'make' para compilar el programa."
	@echo "Usa 'make clean' para eliminar los archivos generados."