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
	 * 		Name   -> Function PrimalItemConsumable_Kibble_LanternBirdEgg.PrimalItemConsumable_Kibble_LanternBirdEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_LanternBirdEgg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Kibble_LanternBirdEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_LanternBirdEgg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_LanternBirdEgg.PrimalItemConsumable_Kibble_LanternBirdEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_LanternBirdEgg");
		
		UPrimalItemConsumable_Kibble_LanternBirdEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_LanternBirdEgg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Kibble_LanternBirdEgg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Kibble_LanternBirdEgg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_LanternBirdEgg.PrimalItemConsumable_Kibble_LanternBirdEgg_C");
		return ptr;
	}

}


