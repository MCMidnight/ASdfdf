﻿#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass WeapStoneHatchet.WeapStoneHatchet_C
	 * Size -> 0x0000 (FullSize[0x0D90] - InheritedSize[0x0D90])
	 */
	class AWeapStoneHatchet_C : public AWeapBaseHatchet_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapStoneHatchet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
