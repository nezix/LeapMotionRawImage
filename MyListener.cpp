#include "Leap.h"
#include "MyListener.h"

void MyListener::onConnect(const Controller& controller) {
    std::cout << "Connected" << std::endl;
}

void MyListener::onFrame(const Controller& controller) {
    //std::cout << "Frame available" << std::endl;
    Frame current = controller.frame();
    if(current.isValid()){
    	Image curimg = current.images()[0]; //Only left camera;
    	if(curimg.isValid()){
    		if(curimg.width() > 0 )
    			cout << "My frame is good !"<<endl;
    		//Do whatever you want with the frame
    	}
    }
}

void MyListener::onDisconnect(const Controller& controller) {
  // Note: not dispatched when running in a debugger.
  std::cout << "Disconnected" << std::endl;
}

void MyListener::onExit(const Controller& controller) {
  std::cout << "Exited" << std::endl;
}