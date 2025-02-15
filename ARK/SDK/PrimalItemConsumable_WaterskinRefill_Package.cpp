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
	 * 		Name   -> Function PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_WaterskinRefill_C::ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill");
		
		UPrimalItemConsumable_WaterskinRefill_C_ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_WaterskinRefill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_WaterskinRefill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C");
		return ptr;
	}

}


