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
	 * BlueprintGeneratedClass LadderBaseBP.LadderBaseBP_C
	 * Size -> 0x0008 (FullSize[0x0B50] - InheritedSize[0x0B48])
	 */
	class ALadderBaseBP_C : public APrimalStructureLadder
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LadderBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
