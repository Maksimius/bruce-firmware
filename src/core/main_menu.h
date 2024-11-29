#ifndef __MAIN_MENU_H__
#define __MAIN_MENU_H__

#include "menu_items/MenuItemInterface.h"

#include "menu_items/BleMenu.h"
#include "menu_items/ClockMenu.h"
#include "menu_items/ConfigMenu.h"
#include "menu_items/ConnectMenu.h"
#include "menu_items/FMMenu.h"
#include "menu_items/IRMenu.h"
#include "menu_items/NRF24.h"
#include "menu_items/OthersMenu.h"
#include "menu_items/RFIDMenu.h"
#include "menu_items/RFMenu.h"
#include "menu_items/ScriptsMenu.h"
#include "menu_items/WifiMenu.h"
#include "menu_items/BadDevicesMenu.h"


class MainMenu {
public:
    BleMenu bleMenu;
    ClockMenu clockMenu;
    ConnectMenu connectMenu;
    ConfigMenu configMenu;
    FMMenu fmMenu;
    IRMenu irMenu;
    NRF24Menu nrf24Menu;
    OthersMenu othersMenu;
    RFIDMenu rfidMenu;
    RFMenu rfMenu;
    ScriptsMenu scriptsMenu;
    WifiMenu wifiMenu;
    BadDevicesMenu badDevicesMenu;

    MainMenu();
    ~MainMenu();

    void begin(void) { _currentIndex = 0; };
    void previous(void);
    void next(void);

    void openMenuOptions(void);
    void draw(void);

private:
    int _currentIndex = 0;
    int _totalItems = 0;
    std::vector<MenuItemInterface*> _menuItems;
};

#endif
