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

size_t size(const char *buffer);
char *file_to_str(const char *filepath);

#endif /* !HASH_H_ */
