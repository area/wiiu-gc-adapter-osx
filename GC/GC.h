#include <IOKit/hid/IOHIDDevice.h>

class IOUSBInterface;
class IOUSBPipe;

typedef struct JoystickState {
    int16_t x_axis;
    int16_t y_axis;
} JoystickState;

typedef struct XBOControllerState {
    uint16_t buttons;
    uint8_t left_trigger;
    uint8_t right_trigger;
    JoystickState left_stick;
    JoystickState right_stick;
} XBOControllerState;

//typedef struct XBOControllerState {
//    uint8_t c0[5];
//    uint8_t c1[37];
//    uint8_t c2[8];
//    uint8_t c3;
//    uint8_t c4[8];
//    uint8_t c5[25];
//    uint8_t c6;
//    uint8_t c7[2];
//    uint8_t c8;
//    uint8_t c9[2];
//} XBOControllerState;

class com_anthonyvd_driver_XBOControllerDriver : public IOHIDDevice {
    OSDeclareDefaultStructors(com_anthonyvd_driver_XBOControllerDriver)
public:
    //IOService methods
    virtual bool init(OSDictionary* dictionary = 0);
    virtual void free(void);
    virtual IOService* probe(IOService* provider, SInt32* score);
    virtual bool start(IOService* provider);
    virtual void stop(IOService* provider);
    virtual IOReturn message(UInt32 type, IOService* provider, void* argument);
    virtual bool requestTerminate(IOService* provider, IOOptionBits options);
    
    //IOHIDDevice methods
    virtual IOReturn newReportDescriptor(IOMemoryDescriptor ** descriptor ) const;
    
    //com_anthonyvd_driver_XBOControllerDriver methods
    bool async_data_received(unsigned char* data, size_t length);
    void destroy();
    
private:
    bool write_data(void* buffer, size_t size);
    bool send_magic_values();
    bool setup_async_read();
    
    IOUSBDevice* device;
    IOUSBInterface* attached_interface;
    IOUSBPipe* in_pipe;
    IOUSBPipe* out_pipe;
    
    XBOControllerState current_state;
    
    bool terminated;
};