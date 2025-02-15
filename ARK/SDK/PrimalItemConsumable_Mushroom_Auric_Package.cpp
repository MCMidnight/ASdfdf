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
	 * 		Name   -> Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.Add Immunity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_Mushroom_Auric_C::AddImmunity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.Add Immunity");
		
		UPrimalItemConsumable_Mushroom_Auric_C_AddImmunity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_Mushroom_Auric_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.BlueprintUsed");
		
		UPrimalItemConsumable_Mushroom_Auric_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Mushroom_Auric_C::ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric");
		
		UPrimalItemConsumable_Mushroom_Auric_C_ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Mushroom_Auric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Mushroom_Auric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C");
		return ptr;
	}

}


