// Weapon Chams
			if (MenuSettings::weaponchams) {
				DWORD_PTR MyLocalplayer = read<DWORD_PTR>(oBaseAddress + OFFSET_LOCAL_ENT);

				DWORD64 ViewModelHandle = read<DWORD64>(MyLocalplayer + OFFSET_ViewModels) & 0xFFFF; //m_hViewModels
				DWORD64 ViewModelPtr = read<DWORD64>(oBaseAddress + OFFSET_ENTITYLIST + ViewModelHandle * 0x20);

				write<int>(ViewModelPtr + 0x3C8, 1);
				write<int>(ViewModelPtr + 0x3D0, 2);
				write<GlowMode>(ViewModelPtr + 0x2C4, { 101,101,46,0 });
				write<float>(ViewModelPtr + 0x1D0, 1.f);
				write<float>(ViewModelPtr + 0x1D4, 19.f);
				write<float>(ViewModelPtr + 0x1D8, 20.f);
			}
		}