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
	 * BlueprintGeneratedClass Floor_Wood_SM_New.Floor_Wood_SM_New_C
	 * Size -> 0x0000 (FullSize[0x0B00] - InheritedSize[0x0B00])
	 */
	class AFloor_Wood_SM_New_C : public AFloor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Floor_Wood_SM_New(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
