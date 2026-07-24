bool (*get_IsMine)(void* player);

void *(*get_main)();

Vector3 (*WorldToScreenPoint)(void* p1, Vector3 p2);

void *(*get_transform)(void* p1);

Vector3 (*get_position)(void* p1);

bool (*get_isMine)(void *instance);

static std::vector<void*> players;

bool playerFind(void *player) {
    if (player != NULL) {
        for (int i = 0; i < players.size(); i++) {
            if (player == players[i]) return true;
        }
    }
    return false;
}
