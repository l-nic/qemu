#include <stdint.h>

uint64_t lnic_get_port_id(void);
uint64_t lnic_load_uint64(void);
uint64_t lnic_num_messages_ready(void);
uint64_t lnic_is_last_word_read(void);
uint64_t lnic_read_src_ip_lower(void);
uint64_t lnic_read_src_ip_upper(void);
uint64_t lnic_read_src_port(void);

void lnic_set_own_port_id(uint64_t val);
void lnic_store_uint64(uint64_t val);
void lnic_write_message_end(void);
void lnic_set_dst_ip_lower(uint64_t val);
void lnic_set_dst_ip_upper(uint64_t val);
void lnic_set_dst_port(uint64_t val);