#include <iostream>
#include <string.h>
#include "Leap.h"
#include "MyListener.h"

//g++ Hello.cpp MyListener.cpp -I~/LeapSDK/include/ ~/LeapSDK/lib/libLeap.dylib -o Hello
//install_name_tool -change @loader_path/libLeap.dylib ~/LeapSDK/lib/libLeap.dylib Hello

using namespace Leap;

int main(int argc, char** argv) {

	MyListener listener;
    Controller controller;

    controller.addListener(listener);
    controller.setPolicyFlags(Controller::POLICY_IMAGES);

    // Keep this process running until Enter is pressed
    std::cout << "Press Enter to quit..." << std::endl;
    std::cin.get();

    controller.removeListener(listener);

    return 0;
}