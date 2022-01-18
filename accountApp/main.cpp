//
//  main.cpp
//  accountApp
//
//  Created by Erol Ozdemir on 1/13/22.
//

#include <iostream>
#include "account.hpp"

int main(int argc, const char * argv[3]) {

//main can take in up to 3 arguments from the command line .
    
    std::string wAdd;
    float a,b;
   
    std::cout<<"This is an example crypto ledger command line application that I am developing \n\n";
    std::cout<<"enter (example) wallet address \n";
    std::cin>> wAdd ;
    
    
    
    
    
    //wAdd = "0x345e8d9fff9034aBdcBFF";           example of address
    a = .25; //
    b = .00008;
   
    
    
    CryptoAccount cryptoCoin(wAdd,a,b);
    //CryptoAccount erolCoin("\"this will display hex address\"",.000000000002,.000000008);
    cryptoCoin.deposit(.000001000);
    cryptoCoin.deposit(.000000004);
    cryptoCoin.deposit(.000009);
    cryptoCoin.deposit(.0000034);
    cryptoCoin.withdraw(.000004);
    cryptoCoin.printOutput();// also prints ballance
    
    return 0;
}
