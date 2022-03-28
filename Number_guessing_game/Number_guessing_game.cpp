// Number_guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void wrong_answer(string& answer) {
    while ((answer != "yes" && answer != "YES") && (answer != "no" && answer != "NO")) {
        cout << "Sorry, incorect answer. Please try again.\n";
        cin >> answer;
    }
}

void numb(int num) {
    cout << "The number you are thinking of is number " << num << endl;
}


int main()
{

    string ready_to_play = "yes";

    while (ready_to_play == "yes" || ready_to_play == "YES") {

    cout << "Think of a number between 1 and 100 and I will try to guess it\n";
    cout << "\nPlease answer the questions with yes or no\n";
    cout << "\nAre you ready?\n";
    int num{};
    string answer;
    cin >> answer;
    while (answer != "yes" && answer != "YES") {
        cout << "All you have to do is answer the questions with yes or no\n";
        cout << "Are you ready now?\n";
        cin >> answer;
    }
    cout << "Great! Let's begin\n";

    vector<int> numbers;
    vector<int> numbers1;
    string number;
    for (int i = 1; i <= 100; i++) {
        numbers.push_back(i);
    }
    


        cout << "Is the number you are thinking of smaller than or equal to 50?\n";
        cin >> answer;
        wrong_answer(answer);


        if (answer == "yes" || answer == "YES")
            numbers.erase(numbers.begin() + 50, numbers.end());

        else
            numbers.erase(numbers.begin(), numbers.begin() + 50);

        if (numbers.at(numbers.size() - 1) < 51) {
            cout << "Is the number you are thinking of smaller than 25?\n";
            cin >> answer;
            wrong_answer(answer);
            if (answer == "yes" || answer == "YES") {
                numbers.erase(numbers.begin() + 24, numbers.end());
            }

            else {
                numbers.erase(numbers.begin(), numbers.begin() + 24);
            }
        }
        else if (numbers.at(numbers.size() - 1) > 50) {
            cout << "Is the number you are thinking of smaller than 75?\n";
            cin >> answer;
            wrong_answer(answer);
            if (answer == "yes" || answer == "YES") {
                numbers.erase(numbers.begin() + 24, numbers.end());
            }

            else {
                numbers.erase(numbers.begin(), numbers.begin() + 24);
            }
        }

        cout << "Is the number you are thinking of an even number?\n";
        cin >> answer;
        wrong_answer(answer);
        if (answer == "yes" || answer == "YES") {
            for (int i = 0; i < numbers.size(); i++)
                numbers.erase(numbers.begin() + i);
            number = "even";
        }

        else {
            for (int i = 1; i < numbers.size(); i++)
                numbers.erase(numbers.begin() + i);
            number = "odd";
        }

        cout << "Is the number you are thinking of divisible by 3?\n";
        cin >> answer;
        wrong_answer(answer);
        if (answer == "yes" || answer == "YES") {
            for (int i = 0; i < numbers.size(); i++) {
                if (numbers.at(i) % 3 == 0)
                    numbers1.push_back(numbers.at(i));
            }
            numbers = numbers1;
        }
        else {
            for (int i = 0; i < numbers.size(); i++) {
                if (numbers.at(i) % 3 != 0)
                    numbers1.push_back(numbers.at(i));
            }
            numbers = numbers1;
        }


        numbers1.clear();

        if (answer == "yes" || answer == "YES") {
            if (number == "even") {
                if (numbers.at(numbers.size() - 1) < 25) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {

                        cout << "Is the number you are thinking of smaller than 15?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 12;
                            numb(num);
                        }
                        else
                            num = 24;
                        numb(num);
                    }
                    else {
                        cout << "Is the number you are thinking of a single digit number?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 6;
                            numb(num);
                        }
                        else {
                            num = 18;
                            numb(num);
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 25 && numbers.at(numbers.size() - 1) < 51) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of smaller than 40?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 36;
                            numb(num);
                        }
                        else {
                            num = 48;
                            numb(num);
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of less than 40?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 30;
                            numb(num);
                        }
                        else {
                            num = 42;
                            numb(num);
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 50 && numbers.at(numbers.size() - 1) < 75) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of smaller than 65?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 60;
                            numb(num);
                        }
                        else {
                            num = 72;
                            numb(num);
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of smaller than 65?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 54;
                            numb(num);
                        }
                        else {
                            num = 66;
                            numb(num);
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 75) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of larger than 85?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            num = 96;
                            numb(num);
                        }
                        else {
                            num = 84;
                            numb(num);
                        }

                    }
                    else {
                        cout << "Is the number you are thinking of larger than 85?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is number 90\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 78\n";
                        }
                    }
                }

            }
            else if (number == "odd") {
                if (numbers.at(numbers.size() - 1) < 25) {
                    cout << "Is the number you are thinking of a single digit number?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {

                        cout << "Is the number you are thinking of larger than 5?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is number 9\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 3\n";
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of divisible by 5?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is number 15\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 21\n";
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 25 && numbers.at(numbers.size() - 1) < 51) {
                    cout << "Is the number you are thinking of smaller than 35?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of divisible by 9?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is number 27\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 33\n";
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of divisible by 9?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is number 45\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 39\n";
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 50 && numbers.at(numbers.size() - 1) < 75) {
                    cout << "Is the first digit of a number you are thinking of 6?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of divisible by 7?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is 63\n";
                        }
                        else {
                            cout << "The number you are thinking of is 69\n";
                        }
                    }
                    else {
                        cout << "Is the second digit in the number you are thinking of larger than 5?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is 57\n";
                        }
                        else {
                            cout << "The number you are thinking of is 51\n";
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 75) {
                    cout << "Is the number you are thinking of smaller than 88?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of larger 85?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the first digit of a number 7?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is number 75\n";
                            }
                            else {
                                cout << "Is the second digit number 7?\n";
                                cin >> answer;
                                wrong_answer(answer);
                                if (answer == "yes" || answer == "YES") {
                                    cout << "The number you are thinking of is number 87\n";
                                }
                                else {
                                    cout << "The number you are thinking of is number 81\n";
                                }
                            }

                        }

                    }
                    else {
                        cout << "Is the second digit in the number you are thinking of larger than 5?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "The number you are thinking of is 99\n";
                        }
                        else {
                            cout << "The number you are thinking of is number 93\n";
                        }
                    }
                }
            }

        }
        else {
            if (number == "even") {
                if (numbers.at(numbers.size() - 1) < 25) {
                    cout << "Is the number you are thinking of dividible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of a single digit number?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of larger than 5?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 8\n";
                            }
                            else {
                                cout << "The number you are thinking of is 4\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of divisible with 10?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 20\n";
                            }
                            else {
                                cout << "The number you are thinking of is 16\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of larger than 10?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of larger than 15?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 22\n";
                            }
                            else {
                                cout << "The number you are thinking of is 14\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of a divisible with 5?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 10\n";
                            }
                            else {
                                cout << "The number you are thinking of is 2\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 25 && numbers.at(numbers.size() - 1) < 51) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of smaller than 35?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 7?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 28\n";
                            }
                            else {
                                cout << "The number you are thinking of is 32\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of divisible by 8?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 40\n";
                            }
                            else {
                                cout << "The number you are thinking of is 44\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of larger than 40?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 10?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 50\n";
                            }
                            else {
                                cout << "The number you are thinking of is 46\n";
                            }
                        }
                        else {
                            cout << "Is the first digit in a number you are thinking of 3?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "Is the number you are thinking of 38?\n";
                                cin >> answer;
                                wrong_answer(answer);
                                if (answer == "yes" || answer == "YES") {
                                    cout << "Great!";
                                }
                                else {
                                    cout << "The number you are thinking of is 34\n";
                                }
                            }
                            else {
                                cout << "The number you are thinking of is 26\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 50 && numbers.at(numbers.size() - 1) < 75) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of less than 60?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 8?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 56\n";
                            }
                            else {
                                cout << "The number you are thinking of is 52\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of divisible by 8?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 64\n";
                            }
                            else {
                                cout << "The number you are thinking of is 68\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of larger than 65?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 10?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 70\n";
                            }
                            else {
                                cout << "The number you are thinking of is 74\n";
                            }
                        }
                        else {
                            cout << "Is the first digit in a number you are thinking 5?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 58\n";
                            }
                            else {
                                cout << "The number you are thinking of is 62\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 75) {
                    cout << "Is the number you are thinking of divisible by 4?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of smaller than 85?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 10?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 80\n";
                            }
                            else {
                                cout << "The number you are thinking of is 76\n";
                            }
                        }
                        else {
                            cout << "Are all digits in the number you are thinking of the same?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 88\n";
                            }
                            else {
                                cout << "Is the number you are thinking of divisible by 10?\n";
                                cin >> answer;
                                wrong_answer(answer);
                                if (answer == "yes" || answer == "YES") {
                                    cout << "The number you are thinking of is 100\n";
                                }
                                else {
                                    cout << "The number you are thinking of is 92\n";
                                }
                            }
                        }
                    }
                    else {
                        cout << "Is the first digit in the number you are thinking of 8?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of 86?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "Great!";
                            }
                            else {
                                cout << "Then the number you are thinking of must be 82!\n";
                            }
                        }
                        else {
                            cout << "Well, is then the second digit 8?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 98\n";
                            }
                            else {
                                cout << "The number you are thinking of is 94\n";
                            }
                        }
                    }

                }
            }
            else {
                if (numbers.at(numbers.size() - 1) < 25) {
                    cout << "Is the number you are thinking of smaller than 12?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of larger than 6?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of a single digit number?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 7\n";
                            }
                            else {
                                cout << "The number you are thinking of is 11\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 1?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 5!\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of larger than 18?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the first digit in the number you are thinking of 2?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 23\n";
                            }
                            else {
                                cout << "The number you are thinking of is 19\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 13?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 17!\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 25 && numbers.at(numbers.size() - 1) < 51) {
                    cout << "Is the number you are thinking of smaller than 36?\n";
                    cin >> answer;
                    wrong_answer(answer);
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the first digit of a number you are thinking of 2?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the second digit larger than 5?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 29\n";
                            }
                            else {
                                cout << "The number you are thinking of is 25\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of divisible by 5?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 35\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 31!\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of smaller than 45?\n";
                        cin >> answer;
                        wrong_answer(answer);
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of smaller than 40?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is number 37\n";
                            }
                            else {
                                cout << "Is the number you are thinking of number 43?\n";
                                cin >> answer;
                                wrong_answer(answer);
                                if (answer == "yes" || answer == "YES") {
                                    cout << "Of course it is!";
                                }
                                else {
                                    cout << "Then, surely you are thinking about number 41!\n";
                                }
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of divisible by 7?\n";
                            cin >> answer;
                            wrong_answer(answer);
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is number 49\n";
                            }
                            else {
                                cout << "The number you are thinking of is number 47\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 50 && numbers.at(numbers.size() - 1) < 75) {
                    cout << "Is the number you are thinking of smaller than 63?\n";
                    cin >> answer;
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the number you are thinking of smaller than 57?\n";
                        cin >> answer;
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 5?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is number 55\n";
                            }
                            else {
                                cout << "The number you are thinking of is number 53\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 59?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 61!\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the number you are thinking of smaller than 70?\n";
                        cin >> answer;
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 5?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 65\n";
                            }
                            else {
                                cout << "The number you are thinking of is 67\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 73?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 71!\n";
                            }
                        }
                    }
                }
                else if (numbers.at(numbers.size() - 1) > 75) {
                    cout << "Is the number you are thinking of smaller than 88?\n";
                    cin >> answer;
                    if (answer == "yes" || answer == "YES") {
                        cout << "Is the first digit of a number you are thinking of number 7?\n";
                        cin >> answer;
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the number you are thinking of divisible by 7?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is number 77\n";
                            }
                            else {
                                cout << "The number you are thinking of is number 79\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 85?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 83!\n";
                            }
                        }
                    }
                    else {
                        cout << "Is the second digit of a number you are thinking of larger than 5?\n";
                        cin >> answer;
                        if (answer == "yes" || answer == "YES") {
                            cout << "Is the first digit in a number you are thinking of number 8?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "The number you are thinking of is 89\n";
                            }
                            else {
                                cout << "The number you are thinking of is 97\n";
                            }
                        }
                        else {
                            cout << "Is the number you are thinking of 95?\n";
                            cin >> answer;
                            if (answer == "yes" || answer == "YES") {
                                cout << "Of course it is!\n";
                            }
                            else {
                                cout << "Then, surely you are thinking about number 91!\n";
                            }
                        }
                    }
                }

            }
        }

        numbers.clear();
        cout << "\n\nDo you want to play again?\n";
        cin >> ready_to_play;

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
