#include "Schoolsystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	while (true)
	{
		std::cout << "Välkommen till detta SkolSystem!, välj vad du vill göra!" << "\n";
		std::cout << "1. Lägg till en användare" << "\n";
		std::cout << "2. Ta bort elev" << "\n";
		std::cout << "3. Flytta Student" << "\n";
		std::cout << "4. Avsluta Programmet" << "\n";
		std::string input = "";

		std::getline(std::cin, input);
		switch(input)
		{
			case "1":
				
				break;
		}

		
		std::cout << "Loop: " << counter << "\n";
		counter++;
		std::cin.get();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.Name = "Blabla";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{


}


