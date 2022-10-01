//Homework 6

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to calculate the net
 *                      profit of a business (which is desired to be 10%) 
 *                      after paying all of the operating expenses. These 
 *                      expenses include merchandise cost, store rent, 
 *                      employee salaries, and the cost of electricity. The 
 *                      program will determine the markup that should be 
 *                      applied to the inventory in order to put the item 
 *                      on a 15% "sale". The net profit desired should be 
 *                      10% of the merchandise cost. The user will be 
 *                      prompted to enter the total cost of merchandise,
 *                      the total cost of employee salaries, the yearly 
 *                      rent, and the estimated electricity costs. The 
 *                      program will then output the total price the 
 *                      merchandise should be sold at. The program will 
 *                      then display that total revenues (after the 15%         
 *                      sale), as well is the net profit after the operating 
 *                      costs. The program will then verify that the net 
 *                      profit is 10% of the initial merchandise cost.
 * 
 *                      The desired profit percentage and sale percentage 
 *                      are constant double variables named "percProfit" and
 *                      "percSale", respectively.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               1/21/2017 12:13 PST
 */

#include<iostream>
#include<cstdlib>
#include<iomanip>


using namespace std;

int main()
{
    //Global constants for profit percentage and sale percentage
    //Also included is the markup percentage (too be determined)
    const double percProfit = 10.0; //Desired profit percentage
    const double percSale = 15.0;   //Desired sale price
    
    
    //Declare variables for program
    double costMerch = 0;       //Cost of merchandise
    double costEmp = 0;         //Cost of employee salaries
    double costRent = 0;        //Cost of rent
    double costElec = 0;        //Cost of electricity
    double costOp = 0;          //Operating cost
    double priceMU = 0;         //Price after applied markup
    double priceSale = 0;       //Price after sale   
    double profitNet = 0;       //Profit after merchandise sold on sale
    double amountMU = 0;
    
    //Declare "junk" char variable to read in '$'
    char junk;
    
    //Prompt user for input
    cout << "Please enter the total cost of the merchandise: " << endl;
    cin >> junk >> costMerch;
    cout << "Please enter the total cost of all employee salaries: " << endl;
    cin >> junk >> costEmp;
    cout << "Please enter the yearly rent: " << endl;
    cin >> junk >> costRent;
    cout << "Please enter the estimated electricity costs: " << endl;
    cin >> junk >> costElec;
    cout << endl << endl;
    
    //Determine total operating costs
    costOp = costMerch + costEmp + costRent + costElec;
    
    //Determine desired net profit (percentage from operating costs)
    profitNet = (percProfit/100) * costMerch;
     //Determine sale price
    priceSale = profitNet + costOp;
    
    //Determine markup price (0.85*priceMU = priceSale)
    priceMU = priceSale * (100.0 / (100.0 - percSale));
    
    //Determine total markup amount
    amountMU = priceMU - costMerch;
    
 
    //Output Statements
    cout << "Merchandise should be sold at $" << setprecision(2) << fixed 
         << showpoint << priceMU << "." << endl << endl;
    cout << "With a 15% sale, total revenues are $" << priceSale 
         << setprecision(2) << fixed << showpoint << endl << endl;
    cout << "After operating costs, the net profit is $" << profitNet
         << setprecision(2) << fixed << showpoint << "." << endl << endl;
    cout << "The net profit is calculated to be " << setprecision(1) << fixed
         << showpoint << percProfit << "%" << endl;
    cout << "of the initial $" << setprecision(2) << fixed << showpoint 
         << costMerch << " merchandise cost." << endl;
    
    //Terminate program upon successful completion
    exit(EXIT_SUCCESS);
}