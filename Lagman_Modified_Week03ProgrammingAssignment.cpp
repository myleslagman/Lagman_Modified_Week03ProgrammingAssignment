// Lagman_Week03_ProgrammingAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a Item Shipping Calculator program that does the following:

//Prompt and retrieve the following input from the user(through the console) :
//    Item name
//    Is the item fragile(add in $2.00 if the item is fragile)
//    The order total(without shipping)
//    The destination to which the item will be shipped(USA, Canada, Australia)
// 
//If item is fragile, add $2.00 to shipping cost

// Modified to add Planet Saturn as a destination

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
# include <fstream>

using namespace std;

const float fragileItemShipCost = 2.00;

const float usaFeeOne = 6.00;
const float usaFeeTwo = 9.00;
const float usaFeeThree = 12.00;

const float canFeeOne = 8.00;
const float canFeeTwo = 12.00;
const float canFeeThree = 15.00;

const float ausFeeOne = 10.00;
const float ausFeeTwo = 14.00;
const float ausFeeThree = 17.00;

const float satFeeOne = 500.00;
const float satFeeTwo = 540.00;
const float satFeeThree = 570.00;

int main()
{
    ofstream orderDetails;
    orderDetails.open("Order.txt");

    //Opening banner
    cout << setw(50) << setfill('.') << '.' << endl;
    orderDetails << setw(50) << setfill('.') << '.' << endl;
    cout << "ITCS 2350 - Programming Assignment for week #3" << endl;
    orderDetails << "ITCS 2350 - Programming Assignment for week #3" << endl;
    cout << setw(50) << '.' << endl;
    orderDetails << setw(50) << '.' << endl;
    cout << endl;
    orderDetails << endl;

    //Getting inputs from the user
    string sItem;
    cout << left << setw(49) << "Please enter the item name (no spaces)" << ':';
    orderDetails << left << setw(49) << "Please enter the item name (no spaces)" << ':';
    cin >> sItem;
    orderDetails << sItem;
    orderDetails << endl;

    char fragile;
    cout << left << setw(49) << "Is the item fragile? (y=yes/n=no)" << ':';
    orderDetails << left << setw(49) << "Is the item fragile? (y=yes/n=no)" << ':';
    cin >> fragile;
    orderDetails << fragile;
    orderDetails << endl;

    float orderTotal;
    string itemDestination;
    float totalShippingCost{};

    switch (fragile)
    {
    case 'y': case 'Y':
        //continue the program >> add $2 for shipping
        cout << left << setw(49) << "Please enter your order total" << ':';
        orderDetails << left << setw(49) << "Please enter your order total" << ':';
        cin >> orderTotal;
        orderDetails << orderTotal;
        orderDetails << endl;

        cout << left << setw(49) << "Please enter destination. (usa/can/aus/saturn)" << ':';
        orderDetails << left << setw(49) << "Please enter destination. (usa/can/aus)" << ':';
        cin >> itemDestination;
        orderDetails << itemDestination;
        cout << endl;
        orderDetails << endl;

        if (itemDestination == "usa" || itemDestination == "USA")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + usaFeeOne + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + usaFeeTwo + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << setprecision(2) << "Your shipping cost is" << '$' << usaFeeTwo + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << setprecision(2) << "Your shipping cost is" << '$' << usaFeeTwo + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + usaFeeThree + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeThree + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeThree + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF USA SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "can" || itemDestination == "CAN")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + canFeeOne + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeOne + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeOne + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + canFeeTwo + fragileItemShipCost;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeTwo + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeTwo + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + canFeeThree + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeThree + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeThree + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << setprecision(2) << fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << setprecision(2) << fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF CANADA SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "aus" || itemDestination == "AUS")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + ausFeeOne + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeOne + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeOne + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + ausFeeTwo + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeTwo + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeTwo + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + ausFeeThree + fragileItemShipCost;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeThree + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeThree + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF AUSTRALIA SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "saturn" || itemDestination == "SATURN")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + satFeeOne + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeOne + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeOne + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + satFeeTwo + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeTwo + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeTwo + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + satFeeThree + fragileItemShipCost;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeThree + fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeThree + fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << fragileItemShipCost << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        else
        {
            cout << endl;
            orderDetails << endl;
            cout << "Invalid entry, exiting";
            orderDetails << "Invalid entry, exiting";
        }

        break;

    case 'n': case 'N':
        // continue program >> don't add $2 for shipping
        cout << left << setw(49) << "Please enter your order total" << ':';
        orderDetails << left << setw(49) << "Please enter your order total" << ':';
        cin >> orderTotal;
        orderDetails << orderTotal;
        orderDetails << endl;

        cout << left << setw(49) << "Please enter destination. (usa/can/aus/saturn)" << ':';
        orderDetails << left << setw(49) << "Please enter destination. (usa/can/aus)" << ':';
        cin >> itemDestination;
        orderDetails << itemDestination;
        cout << endl;
        orderDetails << endl;

        if (itemDestination == "usa" || itemDestination == "USA")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + usaFeeOne;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + usaFeeTwo;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeTwo << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeTwo << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + usaFeeThree;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeThree << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeThree << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF USA SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "can" || itemDestination == "CAN")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + canFeeOne;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeOne << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeOne << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + canFeeTwo;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeTwo << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeTwo << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + canFeeThree;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << canFeeThree << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << canFeeThree << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << usaFeeOne << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF CANADA SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "aus" || itemDestination == "AUS")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + ausFeeOne;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeOne << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeOne << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal <= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + ausFeeTwo;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeTwo << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeTwo << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + ausFeeThree;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << ausFeeThree << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << ausFeeThree << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal + fragileItemShipCost;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
        ///////////////////////////////////////// END OF AUS SECTION ////////////////////////////////////////////////////////
        else if (itemDestination == "saturn" || itemDestination == "SATURN")
        {
            if (orderTotal < 50)
            {
                totalShippingCost = orderTotal + satFeeOne;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeOne << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeOne<< endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 50.01 && orderTotal <= 100.00)
            {
                totalShippingCost = orderTotal + satFeeTwo;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeTwo << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeTwo << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else if (orderTotal >= 100.01 && orderTotal <= 150.00)
            {
                totalShippingCost = orderTotal + satFeeThree;
                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << satFeeThree << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << satFeeThree << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }
            else
            {
                totalShippingCost = orderTotal;

                //Outputting order details
                cout << left << setw(40) << "Your item is";
                orderDetails << left << setw(40) << "Your item is";
                transform(sItem.begin(), sItem.end(), sItem.begin(), std::toupper);
                cout << sItem;
                orderDetails << sItem;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;
                orderDetails << left << setw(40) << "Your shipping cost is" << '$' << 0 << endl;

                cout << left << setw(40) << "You are shipping to";
                orderDetails << left << setw(40) << "You are shipping to";
                transform(itemDestination.begin(), itemDestination.end(), itemDestination.begin(), std::toupper);
                cout << itemDestination;
                orderDetails << itemDestination;
                cout << endl;
                orderDetails << endl;

                cout << left << setw(40) << "Your total shipping costs are";
                orderDetails << left << setw(40) << "Your total shipping costs are";
                cout << setprecision(2) << fixed << '$' << totalShippingCost;
                orderDetails << setprecision(2) << fixed << '$' << totalShippingCost;
                cout << endl;
                orderDetails << endl;

                cout << endl;
                orderDetails << endl;
                cout << right << setw(50) << setfill('-') << "Thank You!";
                orderDetails << right << setw(50) << setfill('-') << "Thank You!";
                cout << endl;
                orderDetails << endl;
            }

        }
    default:
        cout << "Invalid entry, exiting";
        break;
    }
    orderDetails.close();
    return 0;
}


