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
	 * BlueprintGeneratedClass SM_AdobeGateDoor_Large_BP.SM_AdobeGateDoor_Large_BP_C
	 * Size -> 0x0010 (FullSize[0x0B88] - InheritedSize[0x0B78])
	 */
	class ASM_AdobeGateDoor_Large_BP_C : public AGate_Large_AdobeBase_C
	{
	public:
		class UStaticMeshComponent*                                SecondDoor;                                              // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SecondDoorTransform;                                     // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_AdobeGateDoor_Large_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
