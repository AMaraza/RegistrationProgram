#include <iostream>
#include <fstream>

struct loginStruct{
    std::string user;
    std::string password;
};

void registerUser(std::string &username, std::string &password, int &users);
void login(std::string &username, std::string &password);
void newPassword(std::string &username, std::string &password);
void deleteUser(std::string &username, std::string &password);

int main(){
    bool running = true;
    std::string username;
    std::string password;
    int users = 0;
    int choice;

    do {
        std::cout << "____________________\n";
        std::cout << "Enter an Option (1-5)\n";
        std::cout << "1. Register User\n";
        std::cout << "2. Login\n";
        std::cout << "3. Reset Password\n";
        std::cout << "4. Delete User\n";
        std::cout << "5. Exit\n";
        std::cin >> choice;

        switch (choice){
            case 1:
                    system("clear");
                    std::cin.clear();
                    std::cin.ignore();
                    registerUser(username, password, users);
                    break;
            case 2: 
                    system("clear");
                    std::cin.clear();
                    std::cin.ignore();
                    login(username, password);
                    break;
            case 3: 
                    system("clear");
                    std::cin.clear();
                    std::cin.ignore();
                    newPassword(username, password);
                    break;
            case 4:
                    system("clear");
                    std::cin.clear();
                    std::cin.ignore();
                    deleteUser(username, password);
                    break;
            case 5: std::cout << "Thank You for Using My Program!\n";
                    running = false;
                    break;
            default: system("clear");
                    std::cin.clear();
                    std::cin.ignore();
                    break;
        }
    } while (running);
    
    return 0;
}

void registerUser(std::string &username, std::string &password, int &users){
    std::string tempUser;
    std::string tempPass;
    bool userValid = false;
    bool passValid = false;
    std::string blank;

    std::cout << "Enter Your Username(No Spaces Allowed): ";
    getline(std::cin, tempUser);

    for (int i = 0; i < tempUser[i]; i++){
        if (tempUser[i] == ' '){
            std::cout << "Username Cannot Contain Spaces, Please Try Again!\n";
        } else {
            userValid = true;
        }
    }

    if (userValid){
        username = tempUser;
    }

    system("clear");

    std::cout << "Enter Password(No Spaces Allowed): ";
    getline(std::cin, tempPass);

    for (int i = 0; i < tempPass[i]; i++){
        if (tempPass[i] == ' '){
            std::cout << "Password Cannot Contain Spaces, Please Try Again!\n";
        } else {
            passValid = true;
        }
    }

    if (passValid){
        password = tempPass;
    }

    system("clear");

    std::cout << "User " << username << " Was Registered!\n";
    users++;
}

void login(std::string &username, std::string &password){
    std::string tempUser;
    std::string tempPass;
    int tries = 4;

    if (username == ""){
        std::cout << "No Users Registered\n";
        return;
    }

    while (tempUser != username){
        std::cout << "Enter Username, or Enter 1 to Go Back: ";
        getline(std::cin, tempUser);

        if (tempUser == username){
            system("clear");
            break;
        }
        else if (tempUser == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            std::cout << "Invalid Username, Please Try Again\n";
        }
    }

    system("clear");

    while (tempPass != password){
        std::cout << "Enter Password, or Enter 1 to Go Back: ";
        getline(std::cin, tempPass);

        if (tempPass == password){
            system("clear");
            break;
        }
        else if (tempPass == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            tries--;
            std::cout << "Invalid Password, You have " << tries << " Tries Left!\n";
        }

        if (tries == 0){
            system("clear");
            std::cout << "You Have Reached Maximum Amount of Attempts!\n";
            return;
        }
    }

    std::cout << "User " << username << " has Logged In!\n";
}

void newPassword(std::string &username, std::string &password){
    std::string tempUser;
    std::string tempPass;
    int tries = 4;
    bool passValid = false;

    if (username == ""){
        std::cout << "No Users Registered\n";
        return;
    }

    while (tempUser != username){
        std::cout << "Enter Username, or Enter 1 to Go Back: ";
        getline(std::cin, tempUser);

        if (tempUser == username){
            system("clear");
            break;
        }
        else if (tempUser == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            std::cout << "Invalid Username, Please Try Again\n";
        }
    }

    system("clear");

    while (tempPass != password){
        std::cout << "Enter Current Password, or Enter 1 to Go Back: ";
        getline(std::cin, tempPass);

        if (tempPass == password){
            system("clear");
            break;
        }
        else if (tempPass == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            tries--;
            std::cout << "Invalid Password, You have " << tries << " Tries Left!\n";
        }

        if (tries == 0){
            system("clear");
            std::cout << "You Have Reached Maximum Amount of Attempts!\n";
            return;
        }
    }

    system("clear");

    std::cout << "Enter New Password: ";
    getline(std::cin, tempPass);

    for (int i = 0; i < tempPass[i]; i++){
        if (tempPass[i] == ' '){
            std::cout << "Password Cannot Contain Spaces, Please Try Again!\n";
        } else {
            passValid = true;
        }
    }

    if (passValid){
        password = tempPass;
    }

    system("clear");
    std::cout << "A New Password for User " << username << " Has Been Set!\n";
    return;
}

void deleteUser(std::string &username, std::string &password){
    std::string tempUser;
    std::string tempPass;
    int tries = 4;

    if (username == ""){
        std::cout << "No Users Registered\n";
        return;
    }

    while (tempUser != username){
        std::cout << "Enter Username, or Enter 1 to Go Back: ";
        getline(std::cin, tempUser);

        if (tempUser == username){
            system("clear");
            break;
        }
        else if (tempUser == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            std::cout << "Invalid Username, Please Try Again\n";
        }
    }

    system("clear");

    while (tempPass != password){
        std::cout << "Enter Password, or Enter 1 to Go Back: ";
        getline(std::cin, tempPass);

        if (tempPass == password){
            system("clear");
            break;
        }
        else if (tempPass == "1"){
            system("clear");
            return;
        }
        else {
            std::cout << "\n";
            tries--;
            std::cout << "Invalid Password, You have " << tries << " Tries Left!\n";
        }

        if (tries == 0){
            system("clear");
            std::cout << "You Have Reached Maximum Amount of Attempts!\n";
            return;
        }
    }

    username = "";
    password = "";

    std::cout << "User " << tempUser << " has Been Deleted!\n";
}