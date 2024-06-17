#include <iostream>
using namespace std;

class Device {
public:
    virtual bool isEnabled() const = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual int getVolume() const = 0;
    virtual void setVolume(int percent) = 0;
    virtual int getChannel() const = 0;
    virtual void setChannel(int channel) = 0;
};

class Radio : public Device {
private:
    bool enabled;
    int volume;
    int channel;
public:
    Radio() : enabled(false), volume(30), channel(1) {}

    bool isEnabled() const override {
        return enabled;
    }
    void enable() override {
        enabled = true;
        cout << "Radio is enabled." << endl;
    }
    void disable() override {
        enabled = false;
        cout << "Radio is disabled." << endl;
    }
    int getVolume() const override {
        return volume;
    }
    void setVolume(int percent) override {
        volume = percent;
        cout << "Radio volume set to " << volume << "%" << endl;
    }
    int getChannel() const override {
        return channel;
    }
    void setChannel(int channel) override {
        this->channel = channel;
        cout << "Radio channel set to " << channel << endl;
    }
};

class TV : public Device {
private:
    bool enabled;
    int volume;
    int channel;
public:
    TV() : enabled(false), volume(20), channel(2) {}
    bool isEnabled() const override {
        return enabled;
    }
    void enable() override {
        enabled = true;
        cout << "TV is enabled." << endl;
    }
    void disable() override {
        enabled = false;
        cout << "TV is disabled." << endl;
    }
    int getVolume() const override {
        return volume;
    }
    void setVolume(int percent) override {
        volume = percent;
        cout << "TV volume set to " << volume << "%" << endl;
    }
    int getChannel() const override {
        return channel;
    }
    void setChannel(int channel) override {
        this->channel = channel;
        cout << "TV channel set to " << channel << endl;
    }
};

class Remote {
protected:
    Device* device;
public:
    Remote(Device* dev) : device(dev) {}
    void togglePower() {
        if (device->isEnabled()) {
            device->disable();
        }
        else {
            device->enable();
        }
    }
    void volumeDown() {
        int volume = device->getVolume();
        device->setVolume(volume - 10);
    }
    void volumeUp() {
        int volume = device->getVolume();
        device->setVolume(volume + 10);
    }
    void channelDown() {
        int channel = device->getChannel();
        device->setChannel(channel - 1);
    }
    void channelUp() {
        int channel = device->getChannel();
        device->setChannel(channel + 1);
    }
};

class AdvancedRemote : public Remote {
public:
    AdvancedRemote(Device* dev) : Remote(dev) {}
    void mute() {
        device->setVolume(0);
        cout << "Device is muted." << endl;
    }
};

int main() {
    Device* tv = new TV;
    Remote* remote = new Remote(tv);
    remote->togglePower();
    remote->volumeUp();
    remote->channelUp();
    cout << endl;

    Device* radio = new Radio;
    AdvancedRemote* advancedRemote = new AdvancedRemote(radio);
    advancedRemote->togglePower();
    advancedRemote->mute();

    delete tv;
    delete remote;
    delete radio;
    delete advancedRemote;

    return 0;
}