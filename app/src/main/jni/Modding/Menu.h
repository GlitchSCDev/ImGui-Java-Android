void BeginDraw() {
	
     ImGuiIO &io = ImGui::GetIO();
     DrawESP(ImGui::GetBackgroundDrawList(), screenWidth, screenHeight);
     if (ImGui::Begin("ImGui Android", 0, ImGuiWindowFlags_NoSavedSettings)) {
        g_window = ImGui::GetCurrentWindow();
    
        if (ImGui::BeginTabBar("Tab", ImGuiTabBarFlags_FittingPolicyScroll)) {      
            if (ImGui::BeginTabItem("ESP MENU")) {
                
                ImGui::Checkbox("Line", &ESPLine);
                
                ImGui::EndTabItem();           
            }
              
            ImGui::EndTabBar();

        }
    }
	
	
}
