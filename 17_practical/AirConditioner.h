#pragma once
#include "IDevice.h"
class AirConditioner :
    public IDevice
{
protected:
    enum Regime
    { light, average, heavy };
    string device;
    string power_ = "off";
    size_t temperature;
    static const size_t maxTemperature = 25;
    static const size_t minTemperature = 16;
    static const size_t maxChannel = 12;
    Regime regime = Regime::light;

public:

    AirConditioner(const string& device = "TV", const string& power = "off", const size_t& temperature = 17, const Regime& regime = Regime::light)
        :device{ device }, power_{ power }, temperature{ temperature }, regime{ regime } {}

   

    void setPower(const string& power)
    {
        this->power_ = power;
    }

    void setTemperat(const size_t& temp)
    {
        this->temperature = temp;
    }

    void setRegime(const Regime& regime)
    {
        this->regime = regime;
    }

    string getPower() const
    {
        return power_;
    }

    size_t getTemperat() const
    {
        return temperature;
    }

    Regime getRegime() const
    {
        return regime;
    }



    void power() override
    {
        if (this->power_ == "off")
        {
            this->power_ = "on";
            cout << typeid(AirConditioner).name() << " (" << "Devise on" << ")" << endl;
        }
        else
        {
            this->power_ = "off";
            cout << typeid(AirConditioner).name() << " (" << "Devise off" << ")" << endl;

        }
    }

    void plus() override
    {
        if (this->temperature >= minTemperature and this->temperature <= maxTemperature)
        {
            if (this->temperature == maxTemperature)
            {
                this->temperature = maxTemperature;
                cout << "temperature max (25C)" << endl;
            }
            this->temperature++;
        }
    }

    void minus() override
    {
        if (this->temperature >= minTemperature and this->temperature <= maxTemperature)
        {
            if (this->temperature == minTemperature)
            {
                this->temperature = minTemperature;
                cout << "temperature min (16C)" << endl;
            }
            this->temperature--;
        }
    }

    void next() override
    {
        if (this->regime == Regime::light)
            this->regime = Regime::average;
        if (this->regime == Regime::average)
            this->regime = Regime::heavy;
        else
        {
            this->regime = Regime::heavy;
            cout << "Regime max lvl" << endl;
        }
    }

    void prev() override
    {
        if (this->regime == Regime::average)
            this->regime = Regime::light;
        if (this->regime == Regime::heavy)
            this->regime = Regime::average;
        else
        {
            this->regime = Regime::light;
            cout << "Regime min lvl" << endl;
        }
        
    }

    void showinfo() const override
    {
        cout << typeid(*this).name() << endl;
    }
    

    virtual void allPrint() const
    {
        cout << "\n=============================================\n";
        cout << typeid(*this).name() << endl;
        cout << "Power         --> " << getPower() << endl;
        cout << "Temperature   --> " << getTemperat() << endl;
        if (regime == 0)
            cout << "Regime  (1)   --> " << "Light";
        if (regime == 1)
            cout << "Regime  (2)   --> " << "average";
        if (regime == 2)
            cout << "Regime  (3)   --> " << "heavy";
        cout << "\n=============================================\n";

    }


};
