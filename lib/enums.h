#ifndef ENUMS_H
#define ENUMS_H

class Enums
{
public:
    Enums();

    enum Command // actual base-16 int
    {
        PrintTextCommand = 0x00,
        MessageCommand = 0x01,
        JoinCommand = 0x02,
        UnjoinCommand = 0x03,
        UserListCommand = 0x04,
        ChannelListCommand = 0x05,
        JoinChannelCommand = 0x06,
        UnjoinChannelCommand = 0x07,
        UserJoinedChannelCommand = 0x08,
        UserLeftChannelCommand = 0x09
    };

    enum Length // number of bits
    {
        MessageLength = 4,
        NameLength = 2,
        NameListLength = 8,
        IdLength = 2,
        IdListLength = 8,
        ColourLength = 2,
        ColourListLength = 8,
        UserListLength = 8,
        ChannelIdLength = 2,
        ChannelIdListLength = 8,
        ChannelNameLength = 2,
        ChannelNameListLength = 8,
    };
};

#endif // ENUMS_H