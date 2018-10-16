/*
	Составить описание класса прямоугольников со сторонами,
	параллельными осям координат.
	Предусмотреть возможность перемещения прямоугольников на плоскости,
	изменения размеров, построения наименьшего прямоугольника,
	содержащего два заданных прямоугольника, и прямоугольника,
	являющегося общей частью (пересечением) двух прямоугольников.
	Написать программу, демонстрирующую работу с этим классом.
	Программа должна содержать меню, позволяющее осуществить проверку всех методов класса.
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
struct Dots {
	float x;
	float y;
};

class Rectangle {
private:
	Dots R[4];
public:
	void Resize(float r) {for (int i = 0; i <4; i++) {R[i].x = R[i].x *r; R[i].y = R[i].y * r;}};  
	void Move(int t, int tt) {for ( int  i = 0; i < 4; i++) {R[i].x = R[i].x + t; R[i].y = R[i].y + tt;}};
	void Input(int Dot, float x, float y) {R[Dot].x = x; R[Dot].y = y;};
	void Out() { for (int i = 0; i < 4; i++) std::cout << "Dot " << i + 1 << " " << "(" << R[i].x << ";" << R[i].y << ")" << std::endl;};

};





int main() { 
	Rectangle *A;
	A = new Rectangle;
	for (;;) {
		#ifdef linux
                	system("/bin/bash -c clear");
        	#else
                	system("CLS");
        	#endif
		
		std::cout << "1. Input dots" << std::endl;
		std::cout << "2. Move"<< std::endl;
		std::cout << "3. Resize"<< std::endl;
		std::cout << "4. Show dots"<< std::endl;
		std::cout << "0. Exit" << std::endl;
		int choice;
		std::cout << "Make a choice (0-4): " << std::endl; std::cin >> choice;
		switch (choice) {
			case 0:
				#ifdef linux
                			system("/bin/bash -c clear");
        			#else
                			system("CLS");
        			#endif
							std::cout << "Exiting..."; 
				return 0;
				break;
			case 1:
				std::cout << "Enter x then y of each dot one by one" << std::endl;
				for ( int i = 0; i < 4; i++) {
					int tmp, tmp1;
					std::cin >> tmp >> tmp1;
					A -> Input(i, tmp, tmp1);
				}
				std::cout << "Dots Added Successfully" << std::endl; 
				#ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			case 2:
				int t, tt; 
				std::cout << "Enter how much do you want to move x: ";
				std::cin >> t; 
				std::cout << "Enter how much do you want to move y: ";
				std::cin >> tt; 

				A -> Move(t, tt);
                std::cout << "Moved Successfully" << std::endl; 
				#ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			case 3: 
				float temp; 
				std::cout << "Enter resize coefficient: ";
				std::cin >> temp; 
				A -> Resize(temp);
				std::cout << "Resized Successfully"<< std::endl ; 
				#ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			case 4:  
				A -> Out();
				#ifdef linux
                                        system("/bin/bash -c read");
                                #else
                                        system("pause");
                                #endif
				break;
			default:
				break;
		}
	}; 
	system("pause");
	return 0; 
	

}
