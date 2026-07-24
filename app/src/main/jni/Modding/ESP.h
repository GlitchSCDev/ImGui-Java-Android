void DrawESP(ImDrawList* draw, int screenWidth, int screenHeight)
{
    for (int i = 0; i < players.size(); i++) {
        auto Player = players[i];
        if (Player != NULL) {
            Vector3 position = get_position(get_transform(Player));
            Vector3 PosPlayer = WorldToScreenPoint(get_main(), Vector3(position.X, position.Y + 1.0, position.Z));
            Vector3 NewPosPlayer = WorldToScreenPoint(get_main(), Vector3(position.X, position.Y - 1.15, position.Z));

            if (NewPosPlayer.Z < 0) continue;

            if (ESPLine) {
                draw->AddLine(ImVec2(screenWidth / 2, screenHeight - 950), ImVec2(PosPlayer.X, screenHeight - PosPlayer.Y), IM_COL32(255, 255, 255, 255), 1.5f);
            }
       }
     }
}

