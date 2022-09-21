#include <iostream>
#include "main.hpp"


int main() {
    std::cout << "Favorite Movies!" << std::endl;
    Movie favorite = {"Whiplash", 2014, R};

    std::cout << getRating(favorite.movieRating) << std::endl;

    displayMovie(favorite);
    return 0;
}

std::string getRating(Rating rating) {
    switch (rating) {
        case G:
            return "G";
        case PG:
            return "PG";
        case PG13:
            return "PG13";
        case R:
            return "R";
        case X:
            return "X";
        default:
            return "";
    }
}

void displayMovie(const Movie& movie) {
    std::cout << movie.movieTitle << ", " << movie.year << ", Rated " << getRating(movie.movieRating) << std::endl;
}