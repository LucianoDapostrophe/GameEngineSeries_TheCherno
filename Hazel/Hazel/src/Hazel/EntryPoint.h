#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	//for now, we should initialize the engine separately
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	int a = 8;
	HZ_INFO("initialized client log: var={0}", a);
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif

