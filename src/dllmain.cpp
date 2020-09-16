#include "WeaponSwitch.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            WeaponSwitch::Init();
            break;

        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
