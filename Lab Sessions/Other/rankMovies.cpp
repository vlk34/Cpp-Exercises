#include <iostream>
using namespace std;
#define N_MOVIES 10

// swap function template 
template <class T>
void swapGenetic(T &a, T&b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    string movies[N_MOVIES];    // array with titles
    float ratings[N_MOVIES];    // array with ratings

    // initializing arrays
    movies[0] = "The Godfather"; ratings[0] = 9.2f;
    movies[1] = "Home Alone"; ratings[1] = 7.6f;
    movies[2] = "Jurassic Park"; ratings[2] = 8.1f;
    movies[3] = "The Matrix"; ratings[3] = 8.7f;
    movies[4] = "Forrest Gump"; ratings[4] = 8.8f;
    movies[5] = "Pulp Fiction"; ratings[5] = 8.8f;
    movies[6] = "The Shawshank Redemption"; ratings[6] = 9.2f;
    movies[7] = "Scarface"; ratings[7] = 8.3f;
    movies[8] = "Schindler's List"; ratings[8] = 8.9f;
    movies[9] = "Alien"; ratings[9] = 8.4f;

    // bubble sorting arrays
    for (int i=0; i<N_MOVIES-1; i++) {

        for (int j=i+1; j <N_MOVIES; j++) {

            if (ratings[i] < ratings[j]) {
                
                swapGenetic(movies[i], movies[j]);     // swap title
                swapGenetic(ratings[i], ratings[j]);   // swap rate
            }
        }
    }

    // print final ranking
    for (int i=0; i<N_MOVIES; i++) {
        cout << i+1 << ". " << movies[i] << " (" << ratings[i] << ")" << endl;
    }

    return 0;
}