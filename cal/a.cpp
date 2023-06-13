#include<mpi.h>
#include<iostream>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    //example if  to detect odd and even then printy
    if(world_rank % 2 == 0) {
        std::cout << "Hello, world, I am even" << world_rank << " of " << world_size << std::endl;
    } else {
        std::cout << "Hello, world, I am odd " << world_rank << " of " << world_size << std::endl;
    }
    // Print off a hello world message
    std::cout << "Hello, world, I am " << world_rank << " of " << world_size << std::endl;

    // Finalize the MPI environment.
    MPI_Finalize();
}
