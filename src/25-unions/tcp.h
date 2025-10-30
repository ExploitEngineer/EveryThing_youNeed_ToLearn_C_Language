/* tcp.h */

#include <stdint.h>

typedef struct TCP
{
    uint16_t src_port;
    uint16_t dest_port;
    uint32_t seq_num;
} tcp_header_t;

typedef union PacketHeader
{
    tcp_header_t tcp_header;
    uint8_t raw;
} packer_header_t;
