int screenWidth = 0;
int screenHeight = 0;

static int   g_Width    = 0;
static int   g_Height   = 0;
static bool  imgui_init = false;

static float g_MouseX    = 0.0f;
static float g_MouseY    = 0.0f;
static bool  g_MouseDown = false;

static auto  g_LastTime  = std::chrono::steady_clock::now();


bool g_Initialized = false;
ImGuiWindow* g_window = NULL;

bool ESPLine;

