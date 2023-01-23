#include <iostream>
#include <string>


int main(){
    int choice;
    std::cout << "***********************************\n";
    std::cout << "Welcome to the part inventory system\n";
    std::cout << "***********************************\n";
    std::cout << "Please enter a selection below \n";
    std::cout << "***********************************\n";
    std::cout << " 1.view current inventory\n 2.add part to list\n 3.remove part from list\n 4.exit menu\n";
    std::cout << "***********************************\n";
    std::cin >> choice;

    if(choice == 1){





    }
    else if(choice == 2){

        std::string partnumber[10];
        int size = sizeof(partnumber)/sizeof(partnumber[0]);
        std::string temp;
            for(int i = 0; i < size; i++){
                std::cout << "Please enter part number you would like to add to column " << i + 1  << ". \nIf you would like to exit early please enter q\n ";
                std::getline(std::cin >> std::ws, temp);
                if(temp == "q"){
                    break;
                }
                else{
                    partnumber[i] = temp;
                }
            }
        std::cout << "Part numbers listed are:\n";

        for(int i = 0; !partnumber[i].empty(); i++){
            std::cout << partnumber[i] << "\n";
        }


    }
    else if (choice == 3){


    }
    else{
        std::cout << "Incorrect selection , please try again\n";
        main();
    }

    return 0 ;
}