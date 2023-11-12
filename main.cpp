#include "Header.h"

void displayDeveloperResume() {
	cout << "Developer Resume" << endl;
	cout << "Objective: \n";
	cout << "Enthusiastic and results-driven software developer with a strong background in [mention specific technologies or programming languages, e.g., Java, Python, JavaScript].\n";

	cout << "Technical Skills: \n";
	cout << "Programming Languages: [mention all programming languages you know]\n";
	cout << "Frameworks: [Mention frameworks you are familiar with, e.g., React, Django]\n";
	cout << "Databases: [Mention databases you are familiar with, e.g., MySQL, MongoDB]\n";
}

void displayStudentResume() {

	cout << "Student Resume" << endl;
	cout << "Objective: \n";
	cout << "As a motivated and aspiring IT student, my goal is to acquire a comprehensive \n";
	cout << "understanding of cutting-edge technologies and methodologies within the dynamic field of Information Technology.\n ";
	cout << "Eager to leverage my academic foundation and hands-on experiences\n";
	cout << "I aim to contribute my skills towards real-world projects, honing my abilities in software development, system administration, and network management.\n";
	cout << "Seeking opportunities for professional growth and collaboration \n";
	cout << " I am excited to embark on a journey that allows me to apply theoretical knowledge in practical settings, fostering innovation and problem-solving within the IT landscape.\n";

	cout << "Skills: \n";
	cout << "Baisc knowledge of C++, Python, HTML, CSS, \n";
	cout << "Mid-level knowledg english languahe \n";
	cout << "Teamwork: Actively participated in group projects at the university level, collaborating with fellow students to achieve common goals and solve tasks successfully.\n";
	cout << "Working with Diverse Personalities: Successful experience collaborating with colleagues with varying levels of experience and expertise, allowing for adaptability to different team dynamics and interaction with diverse groups.\n";
}
		int main(){
			string mode;
			cout <<"Chouse a mode: (DEV or PROD)"<< endl;
			cin >> mode;

			if (mode == "DEV") {
				displayDeveloperResume();
			}
			else if (mode == "PROD") {
				displayStudentResume();
			}
			else {
				cout << "Error: Invalid mode" << endl;
			}
			return 0;

}