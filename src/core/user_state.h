#ifndef HIVE_MIND_CORE_USER_STATE_H_
#define HIVE_MIND_CORE_USER_STATE_H_

#include <chrono>
#include <queue>
#include <set>

#include "util/common.h"

struct UserState {
    bool is_creator = false;
    Arc<User> user;
    std::string error_msg;
    std::queue<Arc<CardPack>> card_pack_queue;
    std::vector<Arc<Card>> selected_card;
    std::chrono::time_point<std::chrono::system_clock> time_last_updated;
};

#endif
