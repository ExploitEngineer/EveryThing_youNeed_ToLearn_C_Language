/* exercise.h */

typedef enum SnekObjectKind
{
    INTEGER,
    FLOAT,
    BOOL,
} snek_object_kind_t;

typedef struct SnekInt
{
    char *name;
    int value;
} snek_int_t;

typedef struct SnekFloat
{
    char *name;
    float value;
} snek_float_t;

typedef struct SnekBool
{
    char *name;
    unsigned int value;
} snek_bool_t;

void snek_zero_out(void *ptr, snek_object_kind_t kind);
