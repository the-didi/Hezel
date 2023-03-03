#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
#include "hzpch.h"

namespace Hazel {
	Application::Application()
	{
	}

	Application::~Application()
	{
	}
	void Application::Run()
	{
		WindowResizedEvent e(1200, 720);
		HZ_INFO(e);
		while (true);
	}
}

