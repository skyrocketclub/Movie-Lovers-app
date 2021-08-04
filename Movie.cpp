#include "Movie.hpp"

string Movie::getname() const{
    return movie_title;
}

string Movie::getrating() const {
    return rating;
}
int Movie::getcount() const{
    return count;
}
Movie::Movie(string title, string rating_val, int count_val)
{
    movie_title = title;
    rating = rating_val;
    count = count_val;
}

Movie::~Movie()
{
}

