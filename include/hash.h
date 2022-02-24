/*
** EPITECH PROJECT, 2022
** hash.h
** File description:
** hash.h
*/

#ifndef HASH_H_
#define HASH_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct contributor
{
    char *name;
    char *skill;
    int level;
    int is_free;
    contributor_t *next;
}contributor_t;

typedef struct projet
{
    char *name;
    int ask_dev;
    int nb_day;
    projet_t *next;
}projet_t;

typedef struct info
{
    contributor_t dev;
    projet_t projet;
    int nb_projets;
    int nb_dev;
}info_t;

size_t size(const char *buffer);
char *file_to_str(const char *filepath);
char *hashcode(const char *filepath);

#endif /* !HASH_H_ */
