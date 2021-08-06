/*
 * THE MOVIE LOVERS APP
 * 
 * PURPOSE OF THE APP
 *      To keep track of the movies they have watched and how many times they have watched the movie 
 */
#include <iostream>
#include "Movies.hpp"

int main() {
    cout<<"\t\t\t\tYOUR MOVIE DIARY"<<endl;
    
    Movies my_movies;
    my_movies.display_menu();

    return 0;
}
