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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Large_Sarco.DinoDropInventoryComponent_Carnivore_Large_Sarco_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Large_Sarco
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Large_Sarco_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Large_Sarco(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Large_Sarco.DinoDropInventoryComponent_Carnivore_Large_Sarco_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Large_Sarco");
		
		UDinoDropInventoryComponent_Carnivore_Large_Sarco_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Large_Sarco_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Large_Sarco_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Large_Sarco_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Large_Sarco.DinoDropInventoryComponent_Carnivore_Large_Sarco_C");
		return ptr;
	}

}


