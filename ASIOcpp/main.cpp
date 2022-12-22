/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: longkg
 *
 * Created on November 3, 2022, 1:26 PM
 */

#include <iostream>
#include <cstdlib>
#include "asio.hpp"

void print(const asio::error_code&)
{
    std::cout << "Hello worLd !" << std::endl;
}

int main(int argc, char** argv) {
    //Commented for fun
    asio::io_context io;
    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.async_wait(&print);
    std::cout<<"Press Enter to continue !";
    std::cin.get();
    std::cout<<"Kono Dio da !" << std::endl;
    io.run();
    
    return 0;
}

