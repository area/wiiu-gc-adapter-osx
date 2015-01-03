unsigned char XBOControllerHIDReport[] = {
    0x05, 0x01,         //USAGE_PAGE (Generic Desktop)
    0x09, 0x05,         //USAGE (Game Pad)
    0xa1, 0x01,         //COLLECTION (Application)
    0xa1, 0x00,         //   COLLECTION (Physical)
    0x05, 0x09,         //        USAGE_PAGE (Button)
    0x19, 0x01,         //        USAGE_MINIMUM (Button 1)
    0x29, 0x0c,         //        USAGE_MAXIMUM (Button 12)
    0x15, 0x00,         //        LOGICAL_MINIMUM (0)
    0x25, 0x01,         //        LOGICAL_MAXIMUM (1)
    0x95, 0x0c,         //        REPORT_COUNT (12)
    0x75, 0x01,         //        REPORT_SIZE (1)
    0x81, 0x02,         //        INPUT (Data,Var,Abs)
    
    0x05, 0x01,         //        USAGE_PAGE (Generic Desktop)
    0x09, 0x39,                    //   USAGE (Hat switch)
    0x15, 0x01,                    //   LOGICAL_MINIMUM (1)
    0x25, 0x08,                    //   LOGICAL_MAXIMUM (8)
    0x35, 0x00,                    //   PHYSICAL_MINIMUM (0)
    0x46, 0x3b, 0x01,              //   PHYSICAL_MAXIMUM (315)
    0x65, 0x20,                    //   UNIT (Degrees?)
    0x75, 0x04,                    //   REPORT_SIZE (4)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x81, 0x42,                    //   INPUT (Data,Var,Abs,Null)
    
//    0x75, 0x10,         //        REPORT_SIZE (16)
    0x75, 0x08,         //        REPORT_SIZE (8)
    0x16, 0x00, 0x00,   //        LOGICAL_MINIMUM (0)
//    0x26, 0xff, 0x03,   //        LOGICAL_MAXIMUM (1023)
    0x26, 0xFF, 0x00,  //   Logical Maximum (255)

    0x95, 0x02,         //        REPORT_COUNT (2)
    0x05, 0x01,         //        USAGE_PAGE (Generic Desktop)
    0x09, 0x32,         //        USAGE (Z)
    0x09, 0x35,         //        USAGE (Rz)
    0x81, 0x02,         //        INPUT (Data,Var,Abs)
    
    0x05, 0x01,         //        USAGE_PAGE (Generic Desktop)
    0x09, 0x01,         //        USAGE (Pointer)
    0xa1, 0x00,         //        COLLECTION (Physical)
    0x75, 0x10,         //              REPORT_SIZE (16)
    0x16, 0x00, 0x80,   //              LOGICAL_MINIMUM (-32768)
    0x26, 0xff, 0x7f,   //              LOGICAL_MAXIMUM (32767)
    0x95, 0x02,         //              REPORT_COUNT (2)
    0x05, 0x01,         //              USAGE_PAGE (Generic Desktop)
    0x09, 0x30,         //              USAGE (X)
    0x09, 0x31,         //              USAGE (Y)
    0x81, 0x02,         //              INPUT (Data,Var,Abs)
    0xc0,               //        END_COLLECTION
    0x05, 0x01,         //        USAGE_PAGE (Generic Desktop)
    0x09, 0x01,         //        USAGE (Pointer)
    0xa1, 0x00,         //        COLLECTION (Physical)
    0x75, 0x10,         //              REPORT_SIZE (16)
    0x16, 0x00, 0x80,   //              LOGICAL_MINIMUM (-32768)
    0x26, 0xff, 0x7f,   //              LOGICAL_MAXIMUM (32767)
    0x95, 0x02,         //              REPORT_COUNT (2)
    0x05, 0x01,         //              USAGE_PAGE (Generic Desktop)
    0x09, 0x33,         //              USAGE (Rx)
    0x09, 0x34,         //              USAGE (Ry)
    0x81, 0x02,         //              INPUT (Data,Var,Abs)
    0xc0,               //        END_COLLECTION
    0xc0,               //    END COLLECTION
    0xc0,               //END COLLECTION
};

//unsigned char XBOControllerHIDReport[] = {
//    0x05, 0x05,        // Usage Page (Game Ctrls)
//    0x09, 0x00,        // Usage (Undefined)
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x11,        //   Report ID (17)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x05,        //   Report Count (5)
//    0x91, 0x00,        //   Output (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x21,        //   Report ID (33)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x25,        //   Report Count (37)
//    0x81, 0x00,        //   Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x12,        //   Report ID (18)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x01,        //   Report Count (1)
//    0x91, 0x00,        //   Output (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x22,        //   Report ID (34)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x19,        //   Report Count (25)
//    0x81, 0x00,        //   Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x13,        //   Report ID (19)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x01,        //   Report Count (1)
//    0x91, 0x00,        //   Output (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x23,        //   Report ID (35)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x02,        //   Report Count (2)
//    0x81, 0x00,        //   Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x14,        //   Report ID (20)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x01,        //   Report Count (1)
//    0x91, 0x00,        //   Output (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x24,        //   Report ID (36)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x02,        //   Report Count (2)
//    0x81, 0x00,        //   Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x15,        //   Report ID (21)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x01,        //   Report Count (1)
//    0x91, 0x00,        //   Output (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
//    0xC0,              // End Collection
//    
//    0xA1, 0x01,        // Collection (Application)
//    0x85, 0x25,        //   Report ID (37)
//    0x19, 0x00,        //   Usage Minimum (Undefined)
//    0x2A, 0xFF, 0x00,  //   Usage Maximum (0xFF)
//    0x15, 0x00,        //   Logical Minimum (0)
//    0x26, 0xFF, 0x00,  //   Logical Maximum (255)
//    0x75, 0x08,        //   Report Size (8)
//    0x95, 0x02,        //   Report Count (2)
//    0x81, 0x00,        //   Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
//    0xC0,              // End Collection
//    
//    // 214 bytes
//}
//;

