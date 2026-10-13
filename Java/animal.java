// wap that implements a class heirarchy where animal is a base 
// class and having the sub classes like dog cat are the sub classes,
// you have to overight the method for creating the sound respectively.
// Base class
import java.util.*;
// Base class
class Animal{
    public void makeSound() {
        System.out.println("Some animal sound");
    }
}
// Subclass Dog
class Dog extends Animal {
    // @Override
    public void makeSound() {
        System.out.println("Woof! Woof!");
    }
}
// Subclass Cat
class Cat extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Meow! Meow!");
    }
}
// Main class to test
public class Main {   // <-- Must match filename Main.java
    public static void main(String[] args) {
        Animal genericAnimal = new Animal();
        Dog dog = new Dog();
        Cat cat = new Cat();
        genericAnimal.makeSound();
        dog.makeSound();
        cat.makeSound();
    }
}