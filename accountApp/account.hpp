//
//  account.hpp
//  accountApp
//
//  Created by Erol Ozdemir on 1/13/22.
//
#pragma once
//#ifndef account_hpp
//#define account_hpp

#include <stdio.h>
#include <iostream>

class CryptoAccount {
    private:
    std::string walletAddress;
    //no get function yet.
    float transFee;
    float balance;
    int numTransactions;
   
    public:
// Method definitions for Accessors and Mutator functions below Private member variables
//constructors
//additional methods
    
        std::string getWalletAddress(std::string wA);

        float getFee(float tFee);
        
        float getBalance(float bal);

        int getNumTransactions();

        void setNumTransactions();
// Please create default constructor as well as parameterized Constructors - to create an object with the given name/id/balance and setstransactions to zero.

        CryptoAccount();
    
        CryptoAccount(std::string walletAddress);

        CryptoAccount(std::string walletAddress, float transFee);

        CryptoAccount(std::string walletAddress, float transFee, float balance);

    
// Additional methods

        
        void deposit(float amount);// Deposit - Adds amount to balance. Also counts as 1 transaction.

        void withdraw(float amount);// Subtracts amount from balance if user has enough money. Counts as 1 transaction.

        void printOutput();// This will output to screen, the account info: name/ID and balance and num transactions.
};
    


// This will output to screen, the account info: name/ID and balance and num transactions.

//#endif /* account_hpp */
