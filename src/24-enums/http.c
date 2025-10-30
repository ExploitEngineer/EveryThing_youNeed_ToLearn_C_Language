/* http.c */

#include <stdio.h>

#include "http.h"

char *http_to_str(http_error_code_t code)
{
    switch(code)
    {
    case HTTP_BAD_REQUEST:
        return "400 Bad Request";
    case HTTP_UNAUTHORIZED:
        return "401 Unauthorized";
    case HTTP_NOT_FOUND:
        return "404 Not Found";
    case HTTP_TEAPOT:
        return "418 I AM A TEAPOT!";
    case HTTP_INTERNAL_SERVER_ERROR:
        return "500 Internal Server Error";
    default:
        return "Unknown HTTP error code";
    }
}

int main(void)
{
    http_error_code_t code = HTTP_NOT_FOUND;
    const char *message = http_to_str(code);
    printf("HTTP code %d: %s\n", code, message);
    return 0;
}
