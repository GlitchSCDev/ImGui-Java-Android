
void (*old_PlayerUpdate)(void *pl);
void PlayerUpdate(void *pl) {
    if (pl != NULL) {
    }
    if(!playerFind(pl)) players.push_back(pl);
    old_PlayerUpdate(pl);
}




void StartModding(){
	get_transform = (void *(*)(void*))getAbsoluteAddress("libil2cpp.so", 0x169EA20);
    
    get_position = (Vector3 (*)(void*))getAbsoluteAddress("libil2cpp.so", 0x16ABB30);
    
    get_main = (void *(*)())getAbsoluteAddress("libil2cpp.so", 0x1692678);
    
    WorldToScreenPoint = (Vector3 (*)(void*, Vector3))getAbsoluteAddress("libil2cpp.so", 0x1691DB4);
	
    A64HookFunction((void *)getAbsoluteAddress("libil2cpp.so", 0x1EC3CA0), (void *)PlayerUpdate, (void **)&old_PlayerUpdate);
    
}
