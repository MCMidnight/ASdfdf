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
	 * BlueprintGeneratedClass SM_BaseCeilingDoorWay_Giant_BP.SM_BaseCeilingDoorWay_Giant_BP_C
	 * Size -> 0x0000 (FullSize[0x0B00] - InheritedSize[0x0B00])
	 */
	class ASM_BaseCeilingDoorWay_Giant_BP_C : public ACeiling_Doorway_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_BaseCeilingDoorWay_Giant_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
