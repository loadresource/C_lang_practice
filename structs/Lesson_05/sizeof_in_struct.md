# Sizeof

As we saw earlier, sizeof can be used to view the size of a type (for once, programmers thought of a name that was actually helpful). But this isn't just true of builtin types like int or float, you can also use it to find out the size of structs!

```c
printf("Size of coordinate_t: %zu bytes\n", sizeof(coordinate_t));
```

## Memory Layout

Structs are stored contiguously in memory one field after another. Take this struct:

```c
typedef struct Coordinate {
    int x;
    int y;
    int z;
} coordinate_t;
```

Assuming int is 4 bytes, the memory layout for coordinate_t would look like: