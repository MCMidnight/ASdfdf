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
	 * 		Name   -> Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARocketMuzzleFlashEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.UserConstructionScript");
		
		ARocketMuzzleFlashEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.ExecuteUbergraph_RocketMuzzleFlashEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARocketMuzzleFlashEmitter_C::ExecuteUbergraph_RocketMuzzleFlashEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.ExecuteUbergraph_RocketMuzzleFlashEmitter");
		
		ARocketMuzzleFlashEmitter_C_ExecuteUbergraph_RocketMuzzleFlashEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARocketMuzzleFlashEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARocketMuzzleFlashEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C");
		return ptr;
	}

}


