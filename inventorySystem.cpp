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

            for(int i = 0; i < size; i++){
                std::cout << "Please enter part number you would like to add to column " << i + 1  << ":\n ";
                std::getline(std::cin, partnumber[i]);


            }
        std::cout << "Part numbers listed are:\n";

        for(std::string partnumber : partnumber){
            std::cout << partnumber << "\n";
        }


    }
    else if (choice == 3){


    }
    else{
        std::cout << "Incorrect selection , please try again\n";
    }

    return 0;
}