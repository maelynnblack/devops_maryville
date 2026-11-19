#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

int main(int argc, char *argv[])
{
    // Make sure filename entered
    if (argc < 2)
    {
        printf("Please provide an XML filename.\n");
        return 1;
    }

    // Open and read the XML file
    xmlDoc *doc = xmlReadFile(argv[1], NULL, 0);

    // Check if the file opened
    if (doc == NULL)
    {
        printf("Could not open XML file.\n");
        return 1;
    }