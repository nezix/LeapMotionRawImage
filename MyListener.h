
using namespace Leap;

class MyListener : public Listener {
    public:
    virtual void onConnect(const Controller&);
    virtual void onFrame(const Controller&);
    virtual void onDisconnect(const Controller&);
    virtual void onExit(const Controller&);
};