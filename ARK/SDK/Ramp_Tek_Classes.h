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
	 * BlueprintGeneratedClass Ramp_Tek.Ramp_Tek_C
	 * Size -> 0x0008 (FullSize[0x0AF8] - InheritedSize[0x0AF0])
	 */
	class ARamp_Tek_C : public ARamp_Base_SM_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Ramp_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
