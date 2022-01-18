//
//  account.cpp
//  accountApp
//
//  Created by Erol Ozdemir on 1/13/22.
//
#include <stdio.h>
#include <iostream>
#include "account.hpp"
//using namespace std;


CryptoAccount::CryptoAccount(){
    
    numTransactions=0;
};


CryptoAccount::CryptoAccount(std::string id){
    getWalletAddress(id);
    numTransactions=0;
};

CryptoAccount::CryptoAccount(std::string walletAddress, float transFee){
    getWalletAddress(walletAddress);
    getFee(getFee(transFee));
    numTransactions=0;
};

CryptoAccount::CryptoAccount(std::string walletAddress, float transFee, float balance){

    getWalletAddress(walletAddress);
    getFee(getFee(transFee));
    getBalance(balance);
    numTransactions=0;
};


    // Accessors and Mutator functions
   //additional methods
std::string CryptoAccount::getWalletAddress(std::string wA){
            walletAddress=wA;

            return walletAddress;
        }// No set method required. It will be set using contructors

    
        float CryptoAccount::getFee(float tFee){
            transFee=tFee;
            return transFee;
        }
    // No set method required. It will be set using contructors
        float CryptoAccount::getBalance(float bal){
            balance=bal+balance;
            return balance;
        } // No set Method required. It will be initialized with constructor and then by Deposit method.

    int CryptoAccount::getNumTransactions(){
        return numTransactions;
    }

    void CryptoAccount::setNumTransactions(){

        numTransactions++;
    }
// Please create default constructor as well as parameterized Constructors - to create an object with the given name/id/balance and sets transactions to zero.

    

    
    // Additional methods
//1) Please create the method definitions for the methods within the BankAccount classs.
    
    
    // Deposit - Adds amount to balance. Also counts as 1 transaction.
    void CryptoAccount::deposit(float amount){
        
        balance=balance+amount;
        setNumTransactions();
    }

    void CryptoAccount::withdraw(float amount){
        balance-=amount;
        setNumTransactions();
    }// Subtracts amount from balance if user has enough money. Counts as 1 transaction.

    void CryptoAccount::printOutput(){

        std::cout<<"walletId:\t\t\t"<<walletAddress<<"\nTransaction Fee:\t" <<transFee*numTransactions<<"\nbalance:\t\t\t"<<balance<<"\ntrans#:\t\t\t\t"<<numTransactions<<std::endl;
    }


