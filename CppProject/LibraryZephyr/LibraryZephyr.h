#pragma once

#include "SocketManager.h"

using namespace System;

namespace LibraryZephyr {
	public class KreonZephyr
	{
	public:
		KreonZephyr();
		~KreonZephyr();

	private:
		CSocketManager *socketManager;
		char *calibrationFile;
		bool kreonInitialized
		
	};
}
