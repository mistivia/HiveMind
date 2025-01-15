#!/bin/bash

curl https://mtgjson.com/api/v5/AllPrintings.json.gz > mtg.json.gz
gzip -d mtg.json.gz
python3 card_process.py > ../resource/mtgzhs
