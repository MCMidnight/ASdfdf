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
	 * 		Name   -> Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalItem_Spawner_Exosuit_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse");
		
		UPrimalItem_Spawner_Exosuit_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        Stat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StatConvertMapIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      StatDisplay                                                (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      ValueDisplay                                               (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               ShowInTooltip                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_Spawner_Exosuit_C::GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString");
		
		UPrimalItem_Spawner_Exosuit_C_GetStatDisplayString_Params params {};
		params.Stat = Stat;
		params.Value = Value;
		params.StatConvertMapIndex = StatConvertMapIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatDisplay != nullptr)
			*StatDisplay = params.StatDisplay;
		if (ValueDisplay != nullptr)
			*ValueDisplay = params.ValueDisplay;
		if (ShowInTooltip != nullptr)
			*ShowInTooltip = params.ShowInTooltip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_Spawner_Exosuit_C::ExecuteUbergraph_PrimalItem_Spawner_Exosuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit");
		
		UPrimalItem_Spawner_Exosuit_C_ExecuteUbergraph_PrimalItem_Spawner_Exosuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Spawner_Exosuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Spawner_Exosuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C");
		return ptr;
	}

}


