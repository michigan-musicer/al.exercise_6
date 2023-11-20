exercises: e6_exercises.c
	gcc e6_exercises.c e6_exercises.h -o exercises
	./exercises

# should not be accessible to students before solution is posted.
exercises_solution: e6_exercises_solutions.c
	gcc e6_exercises_solutions.c e6_exercises.h -o exercises_solution
	./exercises_solution

in_class: e6_in_class_practice.c
	gcc e6_in_class_practice.c e6_in_class_practice.h -O3 -o in_class
	./in_class

clean: 
	rm exercises exercises_solution in_class 
