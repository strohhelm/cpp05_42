




# C++ Project 04 - Nested classes | Exceptions

###  General Rules for these projects: 
The purpose of these c++ projects is to get introduced into OOP. We are allowed to use standard c++17. 

- code must be coiled with `c++` and the flags `-Wall -Werror -Wextra`.
- there must be a Makefile for each exercise.
- Class names and corresponding filenames must be written in UpperCamelCase format.
- The `using namespace <ns_name>` and `friend` keywords are forbidden.
- There must be no memory leaks.
- Classes must be designed in the Orthodox Canonical Form.
- There can be no function implementations in headerfiles.
- Headers must be able to be used independently from others.
- Use of STL in the Module 08 and 09 only->no containers / Algorithm header


## 🔶 ex00 Mommy, when I growup, I want to be a bureaucrat!
### Objective: Implement  Bureaucrat class. Each Bureaucrtat has a grade between 1 and 150. Implement exceptions if the grade gets set outside of that range.
### Usage:
  ```
  cd ex00
  make
  ./Bureaucrat
```


### My thoughts: 
-  The concept of having a exception class inside of a class was so unnatural to me and then to overload its inherited what() function took me long to understand.

## 🔶 ex01 Form up, maggots!
### Ojective: Implement a Form class and some specified funcitons to make Bureaucrat and Form interact with each other.
  ```
  cd ex01
  make
  ./Bureaucrat
```

### My thoughts:
- It was incredibly tricky to implement the functions because the subject is vague in some aspects and very unlogical.

## 🔶 ex02 No, you need form 28B, not 28C...
### Ojective: Imlenent different forms htat inherit from the form class as specified in the suject.
### Usage:
  ```
  cd ex02
  make
  ./Bureaucrat
```

### My thoughts:
- That was fun but a lot of writing the classes as they had some really wierd behaviours and intteractions with the bureaucrats.

  ## 🔶 ex03 At least this beats coffee-making..
### Ojective: Implement the Intern class. The intern has one important capacity: the makeForm() function. Avoid using a if/elseif/else forest.
### Usage:
  ```
  cd ex03
  make
  ./Bureaucrat
```

### My thoughts:
- The tricky part here was to come up with a way not to if/ else everything so i used a an array of strings corresponding to an array of template functions. so there had to be only one if statement.

  
