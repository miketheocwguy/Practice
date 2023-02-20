Q1------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
    int x, y, z;
    std::cout << "Enter three integers: " << std::endl;   //user prompt
    std::cin >> x >> y >> z;                          //variable input
   
    int sum;  //internal variables
    int avg;

    sum = x + y + z;
    avg = (sum / 3);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << avg << std::endl;

    if ((x < y) && (x < z)) //if the first number is bigger than the 2nd and 3rd is the biggest,same for the 2nd ,else the 3rd is the greatest
        std::cout << "Min: " << x << std::endl;
    else if ((y < x) && (y < z))
        std::cout << "Min: " << y << std::endl;
    else
        std::cout << "Min: " << z << std::endl;

    if ((x > y) && (x > z))
        std::cout << "Max: " << x << std::endl;
    else if ((y > x) && (y > z))
        std::cout << "Max: " << y << std::endl;
    else
        std::cout << "Max: " << z << std::endl;

    return 0;
}
Q2--------------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
    unsigned int x;    // user difined 4 digit binary number
    unsigned int num = 0;
    char hex = 'A';
   



    std::cout << "Enter a binary number not exceeding 4 bits:  ";
    std::cin >> x;

    unsigned int a = (x / 1000);                  // first digit within the 4 bit binary number
    unsigned int b = (x % 1000 / 100);          // second digit
    unsigned int c = (x % 1000 % 100 / 10);    //third digit
    unsigned int d = (x % 1000 % 100 % 10);    // fourth digit


    int array[] = {a, b, c, d};
    int j = 0;

         if (a == 1)
             num += 8;
         if (b == 1)
             num += 4;
         if (c == 1)
             num += 2;
         if (d == 1)
             num += 1;

         for (int z : array) {
             if (z > 1) {
                 j = j + 1;
                 std::cout << "Invaild, Binary number ";
                 break;
             }
         }
             
         if (j == 0) {
             if (num <= 9) {
                 std::cout << a << b << c << d << " = " << num;
             }
             else {
                 for (int i = 0; i < (num - 10); i++) {
                     hex++;
                 }
                 std::cout << a << b << c << d << " = " << hex;
             }
         }
     
    return 0;
}



Q3--------------------------------------------------------------------------------------------------------------

#include <iostream>

int main()
{
    char log[10];                        //character array of 9 chars + \0 will be used check for usernames
    int pass;
    int sec;



    std::cout << "Username: ";
    std::cin >> log;
    std::cout << std::endl;
    std::cout << "Password: ";
    std::cin >> pass;
    std::cout << std::endl;
    std::cout << "Security code: ";
    std::cin >> sec;

    if (log[0] == 'T' && log[1] == 'o' && log[2] == 'm') {  //the position and elements of the array must be == for the username to login
        if (pass == 1234 || sec == 4321)    //if the positions of the KEY elements are correct and the pass or security matches the intended you can login
            std::cout << "Successful login";
    }
   else                                       // if pass or security key is wrong then the the user must try again
      std::cout << "Invalid, try again."; //for future reference...we can make the user try again, by adding a do-while loop.

    return 0;
}

Q4-------------------------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
	char a;
	char b;
	char c;

	std::cout << "Enter 3-character identifier: ";
	std::cin >> a >> b >> c;                                            //user input
	int user[] = { a,b,c };                                           //char array needed for the for loop
	int n = 0;                                                   //counter that if = 2 means the identifier is valid                                                  
	
	
	for (int i = 0; i < 3;i++) {                         //the loop will check the char array for any special characters outside the ascii (65-122)
		n++;
		if ((user[i] < 65) || (user[i] > 122)) {
			std::cout << a << b << c << " " << "is an invalid identifier. Check char " << i + 1;  // if it finds any special chars it will print its loction in the array "i"
			break;
		}else if (n == 3)
			std::cout << a << b << c << " " << "is a valid identifier";	
	}
	return 0;
}



Q5-------------------------------------------------------------------------------------------------------------------------
#include <iostream>

int main()
{
    int year;
    int mon;
    int day;
    int age;
    int cy;
    int cm;
    int cd;

    std::cout << "Welcome to the Permanent Code System (PCS)" << std::endl;
    std::cout << "Enter your date of birth (yyyy mm dd): ";
    std::cin >> year >> mon >> day;
    std::cout << "Enter the current date (yyyy mm dd): ";
    std::cin >> cy >> cm >> cd;

    int newday = cd - day;
    int newmon = cm - mon;
    int newyear = cy - year;

    if (newday < 0)
    {
        newday += 30;
        newmon -= 1;
    }
    if (newmon < 0)
    {
        newmon += 12;
        newyear -= 1;
    }
    std::cout << "Your age is " << newyear << "y" << " " << newmon << "m" << " " << newday << "d" << std::endl;

    int pass1 = (year % 1000 % 100 / 10); // gets 2nd to last digit in year of birth
    int pass2 = (year % 1000 % 100 % 10); // gets last digit in year of birth
    char letter = 65;
    char let2 = 65;

    for (int i = 1;i < newyear;i++)        //alphabet loop
    {
        if (letter > 90)
        {
            letter = 65;
        }
        letter++;
    }
    for (int j = 1; j < newday; j++)
    {
        if (let2 > 90)
        {
            let2 = 65;
        }
        let2++;
    }

     if (day < 10)
        std::cout << "Your Permanent code: " << letter << let2 << pass1 << pass2 << mon << "0" << day;
    else if (mon < 10)
        std::cout << "Your Permanent code: " << letter << let2 << pass1 << pass2 <<"0" << mon << day;
    else if ((mon < 10)&&(day < 10 ))
        std::cout << "Your Permanent code: " << letter << let2 << pass1 << pass2 << "0" << mon <<"0"<< day;
    else
         std::cout << "Your Permanent code: " << letter << let2 << pass1 << pass2 << mon << day;
    
    return 0;
}
