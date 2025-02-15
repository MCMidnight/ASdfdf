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
	 * BlueprintGeneratedClass WaterTap_Metal.WaterTap_Metal_C
	 * Size -> 0x0008 (FullSize[0x0E28] - InheritedSize[0x0E20])
	 */
	class AWaterTap_Metal_C : public AWaterTap_Base_C
	{
	public:
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterTap_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
