# Adjacency matrix  
This program is a simple implementation of a 10x10 adjacency matrix represents an undirected graph in C.
The program contains 3 simple functions, which are implemented in *my_mat.c*. In *main.c* the program recives the selected function to be 
execute by scaning the user's input.

## How does it word
For initializing the matrix the user inputs 'A' and 10x10 numbers representing the weight of the paths between the vertex in the graph.

### Function 'A' 
This function creates the matrix by scaning 10x10 givin numbers from the user. In the initialization process the function will update the matrix 
by calculating all the optional path in the graph it represents, emphasis on the shortest route posible.

### Function 'B' 
This function scans 2 numbers givin by the user (i,j), and returns "True" if there's a valid path from vertex i to vertex j.

### Function 'C' 
This function scans 2 numbers givin by the user (i,j), and returns the weight of the shortest path between i and j. In case there is no posible route between i and j
the function will return -1.
