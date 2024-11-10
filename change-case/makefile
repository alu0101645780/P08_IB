# Variables
CXX = g++                 # Compilador
CXXFLAGS = -std=c++11     # Flags para el compilador
SRC = change-case.cc funcion-cambiar-cadena.cc funcion-cambiar-letra.cc
OBJ = $(SRC:.cc=.o)       # Archivos objeto generados
EXEC = change_case        # Nombre del ejecutable

# Regla predeterminada
all: $(EXEC)

# Regla para compilar el ejecutable
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Regla para compilar los archivos fuente a objetos
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJ) $(EXEC)

# Limpiar y generar todo de nuevo
rebuild: clean all

.PHONY: all clean rebuild
