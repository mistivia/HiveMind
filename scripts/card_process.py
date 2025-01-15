import json

j = json.load(open("./mtg.json"))
for setname in j['data'].keys():
    cardset = j['data'][setname]
    for card in cardset['cards']:
        if 'foreignData' in card.keys():
            for fd in card['foreignData']:
                if fd['language'] == 'Chinese Simplified':
                    print(card['name'])
                    print(fd['name'])
                    if 'text' in fd.keys():
                        print(fd['text'].replace('\n', '\x01'))
                    else:
                        print()
