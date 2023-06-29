#include<iostream>
#include<cstdlib>
#include<stdexcept>
#include"first_app.hpp"
#include<iostream>
int main(){
	lve::FirstApp app;
	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
		return EXIT_FAILURE;
	}
	std::cout<<"ff";
	return EXIT_SUCCESS;
}