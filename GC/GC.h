#include <IOKit/hid/IOHIDDevice.h>

class IOUSBInterface;
class IOUSBPipe;

#pragma pack(push, 1)
typedef struct XBOControllerState {
    uint8_t report_id;
    int8_t left_stick_x;
    int8_t left_stick_y;
    int8_t right_stick_x;
    int8_t right_stick_y;
    int8_t left_trigger;
    int8_t right_trigger;
    uint16_t buttons;
} XBOControllerState;
#pragma pack(pop)


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
    
//    GCAdapterState current_state;
    XBOControllerState current_state;
    
    bool terminated;
};