#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUERY_LENGTH 256
#define MAX_RESULTS 5

typedef struct {
    char title[100];
    char url[100];
} SearchResult;

// Function to display the search interface
void displaySearchInterface();

// Function to handle the search query
void processSearchQuery(const char *query);

// Function to simulate search results
void displaySearchResults(const char *query);

// Function to print individual search result
void printResult(SearchResult result);

#endif // SEARCH_H
