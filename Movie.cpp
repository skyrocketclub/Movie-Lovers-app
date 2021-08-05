#include "Movie.hpp"
//THe getter functions are methods in the class Movie and 
//any Movie MEthod can be used on any movie object
//any movie attribute can be obtained from any movie object (in this case through the getter functions)
string Movie::getname() const{
    return movie_title;
}

string Movie::getrating() const {
    return rating;
}
int Movie::getcount() const{
    return count;
}

int Movie::increasecount (){
    count+=1;
    return (count + 1);
}
Movie::Movie(string title, string rating_val, int count_val)
{
    movie_title = title;
    rating = rating_val;
    count = count_val;
}

Movie::Movie(string title){
    movie_title= title;
    rating = " ";
    count = 1;
}

Movie::~Movie()
{
}

