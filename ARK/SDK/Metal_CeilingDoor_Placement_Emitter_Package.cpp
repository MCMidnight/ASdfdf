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
	 * 		Name   -> Function Metal_CeilingDoor_Placement_Emitter.Metal_CeilingDoor_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMetal_CeilingDoor_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Metal_CeilingDoor_Placement_Emitter.Metal_CeilingDoor_Placement_Emitter_C.UserConstructionScript");
		
		AMetal_CeilingDoor_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Metal_CeilingDoor_Placement_Emitter.Metal_CeilingDoor_Placement_Emitter_C.ExecuteUbergraph_Metal_CeilingDoor_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMetal_CeilingDoor_Placement_Emitter_C::ExecuteUbergraph_Metal_CeilingDoor_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Metal_CeilingDoor_Placement_Emitter.Metal_CeilingDoor_Placement_Emitter_C.ExecuteUbergraph_Metal_CeilingDoor_Placement_Emitter");
		
		AMetal_CeilingDoor_Placement_Emitter_C_ExecuteUbergraph_Metal_CeilingDoor_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMetal_CeilingDoor_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMetal_CeilingDoor_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Metal_CeilingDoor_Placement_Emitter.Metal_CeilingDoor_Placement_Emitter_C");
		return ptr;
	}

}


