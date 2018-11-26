#include "ccHeader.h"
#include "main.h"
#include "AppDelegate.h"

USING_NS_CC;

// uncomment below line, open debug console
// #define USE_WIN32_CONSOLE

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

#ifdef USE_WIN32_CONSOLE
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
#endif

    AppDelegate app;
    SharedApplication.setAppDelegate(&app);
    // create the application instance
    int ret = SharedApplication.run();

#ifdef USE_WIN32_CONSOLE
    FreeConsole();
#endif

    return ret;
}