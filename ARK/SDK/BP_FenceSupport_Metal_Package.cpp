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
	 * 		Name   -> Function BP_FenceSupport_Metal.BP_FenceSupport_Metal_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FenceSupport_Metal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FenceSupport_Metal.BP_FenceSupport_Metal_C.UserConstructionScript");
		
		ABP_FenceSupport_Metal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_FenceSupport_Metal.BP_FenceSupport_Metal_C.ExecuteUbergraph_BP_FenceSupport_Metal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FenceSupport_Metal_C::ExecuteUbergraph_BP_FenceSupport_Metal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FenceSupport_Metal.BP_FenceSupport_Metal_C.ExecuteUbergraph_BP_FenceSupport_Metal");
		
		ABP_FenceSupport_Metal_C_ExecuteUbergraph_BP_FenceSupport_Metal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FenceSupport_Metal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FenceSupport_Metal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FenceSupport_Metal.BP_FenceSupport_Metal_C");
		return ptr;
	}

}


