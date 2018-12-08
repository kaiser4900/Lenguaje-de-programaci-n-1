
# Uso:
#     make        - Construye todos los codigos
#     make clean  - Limpia todos los ejecutables
#     make test   - Ejecuta los main
#

INCLUDES = 
LIBS     = -lstdc++
CXXFLAGS = $(INCLUDES) -Wall -time -O3 -DNDEBUG
LIBFLAGS =  
AR       = ar

.SUFFIXES: .cpp .o

# Crea una lista de archivos fuente.
SOURCES  = $(shell ls *.cpp)
# Crea una lista de codigo objeto.
OBJECTS = ${SOURCES:.cpp=.o}     
# Crea la lista de ejecutables.
TARGETS = ${SOURCES:.cpp=.exe}     
TARGET = main

# Construye todos los ejecutables por default
all:	$(TARGET)

# Archivos con extension .no-link.cpp no se linkean 
%.no-link.exe: %.no-link.o
	@echo Linking se salto para $@
	@echo ================================================================================
	@echo Construccion finalizada $@
	@echo ================================================================================
	@echo
	@echo

# Una regla para construir un archivo .exe a partir de un archivo .o
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(LIBFLAGS) $(LIBS)
	@echo ================================================================================
	@echo Construccion finalizada $@
	@echo ================================================================================
	@echo
	@echo

# Una regla para construir un archivo .o a partir de un archivo .cpp
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Una regla para limpiar todos los archivos intermedios y ejecutables.
clean:	
	rm -rf $(TARGET) $(OBJECTS) *.out *.stackdump

# Una regla para ejecutar un conjunto de pruebas.
test:
	@for file in *.exe; do \
	    name=`basename $$file .exe` ; \
	    name=`basename $$name .crash` ; \
	    if (ls $$name.crash.exe >/dev/null 2>&1) ; then \
	        continue ; \
	    fi ; \
	    echo ======================================== [ $$file ] ; \
	    if (ls $$name.*in >/dev/null 2>&1) ; then \
	        for f in $$name.*in; do \
	            echo ; \
	            echo ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ { "$$f" } ; \
	            cat "$$f" ; \
	            echo ; \
	            echo ---------------------------------------- ; \
	            ./$$file < "$$f" ; \
	        done ; \
	    else \
	      ./$$file ; \
	    fi \
	done ; \
	echo -n 
