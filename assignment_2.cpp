//question 1--------------------------------------------------------------
#include <iostream>
#include <string>

int main()
{
    
    int width;
    int height;
    bool draw;
    int counter = 0;
    std::string ans;
    std::string& x = ans; //experimental referance variable 
    std::string name;
    std::cout << "Welcome Please Enter Your Name: ";
    std::cin >> name;
    std::cout << "Welcome to the application " << name << ", Do you want me to draw a simple house for you? (yes/no): ";
    std::cin >> ans;
    std::cout << std::endl;
    int num = 0; //will count the amount of houses drawn
    bool k = false; //will be used to signal the program off if the useer has too many attempts 

    if (ans == "yes")
        draw = true;
    else
        draw = false;
   

        switch (draw) //used switch statement insted of stacking if statements for readablitiy
        {
            do {
        case true:

            std::cout << "Enter height of the house you want me to draw: ";
            std::cin >> height;
            std::cout << std::endl;


            do //everything is inside of a loop such that the user can create n-amount of houses when requested..user is given 3 chances to comply
            {
                counter += 1;
                std::cout << std::endl;
                std::cout << "Enter width of the house you want me to build (must be an even number and bigger than 2) ";
                std::cin >> width;
                std::cout << std::endl;
                if (width % 2 != 0) {
                    std::cout << "You enter " << width << " for the width. not an even number! " << std::endl;
                }
                if (counter == 3)
                {
                    std::cout << std::endl;
                    std::cout << "it seems you are having trouble entering even numbers! Program ends now. ";
                    k = true; 
                    break;
                   
                }
             
            } while ((width % 2 != 0) || (width <= 2));
           
            if (k == true)
                break;

           
            for (int i = 1; i < (width / 2)+1;i++) //draws the pyramid (roof of the house) 
            {

               for (int j = (width/2)-i;j > 0;j--) //
                    std::cout << " ";
                for (int a = 1;a <= i;a++)
                    std::cout << "**";
    


                std::cout << "\n";
            } 

            
                for (int k = 1;k <= height + 1;k++) //draws the house body
                {

                    for (int m = 1; m <= width;m++)
                    {
                        if (k == height + 1)//k is the last row ,last row is - (width times)
                            std::cout << "-";

                        if (((m == 1) || (m == width)) && k != (height + 1))//first and last element of each row of the body should be a | (height times)
                            std::cout << "|";
                        else if (((m != 1) || (m != width)) && k != (height + 1)) //anything but the last row should be a space
                            std::cout << " ";

                    }
                    std::cout << "\n"; //rows
                }
                std::cout << "Do you want me to draw a simple house for you? (yes/no): ";
                std::cin >> x;
                if (x == "yes")
                    draw = true;
                num += 1;
                if (x == "no") {
                    draw = false;
                    std::cout << "Hope you like your " << num << " house(s)!";
                }
            } while (draw == true); //redraws houses until user says no 
           

        case false:
            break;

}
     

      return 0;


}

//question 2---------------------------------------------------------------------------

#include <iostream>
int money = 1000; //global variable need this variable in all functions to manipulate....in future will experiment with referances 
int out;
int& k = out;
int in;

void check_deposit()//shows money availbe cant go under 0 based off other functions 
{
    std::cout << money << "$\n";
}

void withdraw()
{
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> out;


    while ((out > money)||(money-out < 0)) { //the widthdrawl contion cant exceed the current balance or be under 0
        std::cout << "Invalid withdrawl\n";
        std::cout << "Please re-enter amount to be withdrawn: ";
        std::cin >> k;
        break;
    }
    money -= out;

    std::cout << "Your new account balance is " << money << "$\n";
}

void deposit()
{
    std::cout << "Enter amount to be deposit: ";
    std::cin >> in;
    while((in < 0) || ((in + money) > 1000) || ((in + money) < 0)){ //you cant deposit a negative number, a number that makes your account surpass 1000$ or have debt
        std::cout << "invalid deposit\n";
        std::cout << "Please re-enter amount to be withdrawn: ";
        std::cin >> in;
        
    }
    money += in;
    std::cout << "Your new account balance is " << money << "$\n";

}

int main()
{
    int name;
    int pass;
    int num;
    bool j = false;
    std::cout << "Enter account num.: ";
    std::cin >> name;
    std::cout <<"\n";
    std::cout << "Enter password: ";
    std::cin >> pass;

    if ((name != 2244578) || (pass != 1234)) {
        std::cout << "Incorrect username or password\n";
    }

   
       while ((name == 2244578) && (pass == 1234)){ //created a loop to have program running until user selects the key to terminate program
           
         std::cout << "1: check balance\n" << "2: withdraw\n" << "3: deposit\n" <<"4: exit\n";
         std::cin >> num;

            switch (num) { // switch for readablitiy
            case 1 :
                check_deposit();
                break;
            case 2 :
                withdraw();
                break;
                    
            case 3 :
                deposit();
                break;
                     
            case 4 :
                j = true;
                break;
            }
            if (j == true) //if user presses 4 when availble to exit the program terminates
                break;
           
        }

    
       return 0;
       
}
