#include "IDevice.h"
class SmartRemote :
    public IDevice
{
protected:
    string device;
    string power_ = "off";
    size_t loudness;
    static const size_t maxLoudness = 100;
    static const size_t maxChannel = 12;
    size_t channel = 1;

public:

    SmartRemote(const string& device, const string& power, const size_t& loud, const size_t& channel)
        :device{device}, power_{power}, loudness{loud}, channel{channel}{}

    // Inherited via IDevice
    void power() override
    {
        if (this->power_ == "off")
            cout << "Devise on" << endl;
        else
            cout << "Devise off" << endl;
    }

    void plus() override
    {
        if (this->loudness == maxLoudness)
        {
            this->loudness = maxLoudness;
            cout << "volume at maximum (100%)" << endl;
        }
        this->loudness++;
    }

    void minus() override
    {
        if (this->loudness == 0)
        {
            this->loudness = 0;
            cout << "volume at minimum (0%)" << endl;
        }
        this->loudness--;
    }

    void next() override
    {
        if (this->channel == maxChannel)
            this->channel = 1;
        this->channel++;
    }

    void prev() override
    {
        if (this->channel == 1)
            this->channel = maxChannel;
        this->channel--;
    }

    void showinfo() const override
    {
        cout << typeid(*this).name() << endl;
    }

};
