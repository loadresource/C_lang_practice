# Compilador y opciones
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I.
LDFLAGS =
LIBS =

# Archivos del proyecto
SRCS = main.c MathOperators.c
OBJS = $(SRCS:.c=.o)
TARGET = lesson_08

# Regla por defecto
all: $(TARGET)

# Enlazado
$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^ $(LIBS)

# Compilación con dependencia del .h (si cambia MathOperators.h, se recompilan los .c que lo incluyen)
%.o: %.c MathOperators.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza
clean:
	rm -f $(OBJS) $(TARGET)

# No son archivos reales
.PHONY: all clean