typedef struct Token
{
    char *literal;
    int line;
    int column;
} token_t;

token_t **create_token_pointer_array(token_t *tokens, size_t count);
