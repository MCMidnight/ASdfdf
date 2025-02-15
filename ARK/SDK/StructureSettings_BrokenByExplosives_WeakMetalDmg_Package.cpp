﻿/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStructureSettings_BrokenByExplosives_WeakMetalDmg_C::ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg");
		
		UStructureSettings_BrokenByExplosives_WeakMetalDmg_C_ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByExplosives_WeakMetalDmg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByExplosives_WeakMetalDmg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C");
		return ptr;
	}

}


