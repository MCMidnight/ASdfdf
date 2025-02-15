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
	 * 		Name   -> Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemWeaponGenericNoStats_C::ExecuteUbergraph_PrimalItemWeaponGenericNoStats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats");
		
		UPrimalItemWeaponGenericNoStats_C_ExecuteUbergraph_PrimalItemWeaponGenericNoStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemWeaponGenericNoStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeaponGenericNoStats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C");
		return ptr;
	}

}


