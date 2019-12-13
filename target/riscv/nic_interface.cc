#include "nic.h"

extern "C" {
	nic_t *lnic = nullptr;
	void lnic_init() {
		if (lnic == nullptr) {
			lnic = new nic_t;
		}
	}
	uint64_t lnic_get_port_id(void) {
		lnic_init();
		return lnic->get_port_id();
	}
	uint64_t lnic_load_uint64() {
		lnic_init();
		return lnic->load_uint64();
	}
	uint64_t lnic_num_messages_ready(void) {
		lnic_init();
		return lnic->num_messages_ready();
	}
	uint64_t lnic_is_last_word_read(void) {
		lnic_init();
		return lnic->is_last_word_read();
	}
	uint64_t lnic_read_src_ip_lower(void) {
		lnic_init();
		return lnic->read_src_ip_lower();
	}
	uint64_t lnic_read_src_ip_upper(void) {
		lnic_init();
		return lnic->read_src_ip_upper();
	}
	uint64_t lnic_read_src_port(void) {
		lnic_init();
		return lnic->read_src_port();
	}

	void lnic_set_own_port_id(uint64_t val) {
		lnic_init();
		lnic->set_own_port_id(val);
	}
	void lnic_store_uint64(uint64_t val) {
		lnic_init();
		lnic->store_uint64(val);
	}
	void lnic_write_message_end() {
		lnic_init();
		lnic->write_message_end();
	}
	void lnic_set_dst_ip_lower(uint64_t val) {
		lnic_init();
		lnic->set_dst_ip_lower(val);
	}
	void lnic_set_dst_ip_upper(uint64_t val) {
		lnic_init();
		lnic->set_dst_ip_upper(val);
	}
	void lnic_set_dst_port(uint64_t val) {
		lnic_init();
		lnic->set_dst_port(val);
	}
};