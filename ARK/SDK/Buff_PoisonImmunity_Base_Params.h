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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_PoisonImmunity_Base_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.UserConstructionScript
	 */
	struct ABuff_PoisonImmunity_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.ExecuteUbergraph_Buff_PoisonImmunity_Base
	 */
	struct ABuff_PoisonImmunity_Base_C_ExecuteUbergraph_Buff_PoisonImmunity_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
