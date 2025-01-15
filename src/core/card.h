#ifndef HIVE_MIND_CORE_CARD_H_
#define HIVE_MIND_CORE_CARD_H_

#include <vector>
#include <map>

#include "util/common.h"

constexpr int PACK_NUM = 3;
constexpr int CARD_NUM_PER_PACK = 15;

struct Card {
    std::string name;
    std::string text;
    std::string zhsname;
    std::string zhstext;
    std::string image_url;
};

using CardPack = std::vector<Arc<Card>>;

void init_card_db();
Arc<Card> get_card(std::string name);

std::vector<Arc<Card>> parse_cardlist(const std::string &s);

#endif
