// {create a package named student info, inside the define a row class student with the 
// fields rollno name and course 
// write a min class in another package to create and display student data.}
// File: Student.java
// Package: studentinfo
import java.util.*;
 Package studentinfo;
public class Student {
   int rollno;
   String name;
   String course;
   
   public Student(int rollno, String name, String course) {
        this.rollno = rollno;
        this.name = name;
        this.course = course;
    }

    // Method to display student details
    public void display() {
        System.out.println("Roll No: " + rollno);
        System.out.println("Name: " + name);
        System.out.println("Course: " + course);
    }
}