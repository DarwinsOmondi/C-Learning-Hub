#include <iostream>
#include <cmath>
using namespace std;


//shape class
class Shape {
protected:
    string color;

public:
    Shape(string c = "undefined") : color(c) {}

    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w, string c) : Shape(c), length(l), width(w) {}

    float area() const {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, string c) : Shape(c), radius(r) {}

    float area() const {
        return M_PI * radius * radius;
    }
};




// cars class

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
   
    Car(string b, string m, float p, int mi) : brand(b), model(m), price(p), mileage(mi) {}

  
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

 
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage after driving " << distance << " miles: " << mileage << " miles" << endl;
    }
};



// movies class

class Movie {
private:
    string title;
    string director;
    int duration;
    float rating;

public:

    Movie(string t, string d, int dur, float r) : title(t), director(d), duration(dur), rating(r) {}


    void display() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " minutes" << endl;
        cout << "Rating: " << rating << endl;
    }

    void rateMovie(float newRating) {
        if (newRating >= 1.0 && newRating <= 5.0) {
            rating = newRating;
            cout << "Updated Rating: " << rating << endl;
        } else {
            cout << "Invalid rating" << endl;
        }
    }
};




int main() {
   


//Question one    
    Rectangle rect(15, 10, "blue");
    cout << "Rectangle Color: " << rect.getColor() << endl;
    cout << "Rectangle Area: " << rect.area() << endl;

   
    Circle circ(2, "pink");
    cout << "Circle Color: " << circ.getColor() << endl;
    cout << "Circle Area: " << circ.area() << endl;




//Question 2 
    
    Car car("Toyota", "Corolla", 20000, 5000);
    car.display();
    car.drive(150);
    car.drive(300);



//Question 3

    Movie movie("Inception", "Christopher Nolan", 148, 4.8);

    movie.display();

    movie.rateMovie(5.0);

    movie.rateMovie(6.0);

    return 0;
}