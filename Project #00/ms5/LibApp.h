/* Citation and Sources...
Final Project Milestone 5
Module: LibApp
Filename: LibApp.h
Version 1.0
Author	Ved Patel
Revision History
-----------------------------------------------------------
Date      Reason
2021/10/15  Preliminary release

I have done all the coding by myself and only copied the code
that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------*/

/*
Name: Patel Ved Rajendrakumar
Id: 149409203
Section:NAA
Email:vrpatel33@myseneca.ca
*/
#pragma once
#ifndef SDDS_LIBAPP_H
#define SDDS_LIBAPP_H
#include <cstring>
#include "Menu.h"
#include "Publication.h"
namespace sdds
{
    class LibApp
    {
        bool m_changed;
        Menu m_mainMenu;
        Menu m_exitMenu;
        char m_filename[256];
        Publication* m_pubsPtrArr[SDDS_LIBRARY_CAPACITY]{ nullptr };
        int m_noOfLoadedPubs;
        int m_lastLibRefNo;
        Menu m_pubTypeMenu;

        bool confirm(const char* message);
        void load();
        void save();
        int search(int choice);
        Publication* getPub(int libRef);

        void newPublication();
        void removePublication();
        void checkOutPub();
        void returnPub();

    public:
        LibApp(const char filename[]);
        ~LibApp();
        void run();
    };
}
#endif // !SDDS_LIBAPP_H
