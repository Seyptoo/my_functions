/*
 * header
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "requests.h"

void requester(char *filename, char *url)
{
    req_t req;
    CURL *curl = requests_init(&req);
    FILE *fd = fopen(filename, "r");
    char *line = malloc(sizeof(char) * 256);
    char *test = malloc(sizeof(char) * sizeof(line) + strlen(url));

    strcat(test, url);
    while (fgets(line, sizeof(line), fd) != NULL) {
        strtok(line, "\n");
        strcat(test, line);
        requests_get(curl, &req, test);
        test[strlen(url)] = '\0';

        printf("%lu\n", req.code);
    }
    requests_close(&req);
}

/* ./bin url.com list.txt */
int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("Error: no such arguments\n");
        exit(EXIT_FAILURE);
    }
    else
        requester(argv[2], argv[1]);
    return (0);
}
