#include "IDevice.h"
class TV :
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

    TV(const string& device = "TV", const string& power = "off", const size_t& loud = 0, const size_t& channel = 1)
        :device{ device }, power_{ power }, loudness{ loud }, channel{ channel } {}

    // Inherited via IDevice

    void setPower(const string& power)
    {
        this->power_ = power;
    }
    
    void setLoud(const size_t& loud)
    {
        this->loudness = loud;
    }
    
    void setChannel(const size_t& channel)
    {
        this->channel = channel;
    }
    
    string getPower() const
    {
        return power_;
    }
    
    size_t getLoud() const
    {
        return loudness;
    }
    
    size_t getChannel() const
    {
        return channel;
    }


    void power() override
    {
        if (this->power_ == "off")
        {
            this->power_ = "on";
            cout << typeid(TV).name() << " (" << "Devise on" << ")" << endl;
        }
        else
        {
            this->power_ = "off";
            cout << typeid(TV).name() << " (" << "Devise on" << ")" << endl;
        }
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
        else
            this->channel++;
    }

    void prev() override
    {
        if (this->channel == 1)
            this->channel = maxChannel;
        else
            this->channel--;
    }

    void showinfo() const override
    {
        cout << typeid(*this).name() << endl;
    }

    virtual void allPrint() const
    {
        cout << "\n=============================================\n";
        cout << typeid(*this).name() << endl;
        cout << "Power    --> " << getPower() << endl;
        cout << "Loudness --> " << getLoud() << endl;
        cout << "Channel  --> " << getChannel() << endl;
        cout << "\n=============================================\n";

    }

};
