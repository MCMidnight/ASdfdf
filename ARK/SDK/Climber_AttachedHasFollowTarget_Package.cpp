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
	 * 		Name   -> Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClimber_AttachedHasFollowTarget_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ReceiveExecute");
		
		UClimber_AttachedHasFollowTarget_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ExecuteUbergraph_Climber_AttachedHasFollowTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClimber_AttachedHasFollowTarget_C::ExecuteUbergraph_Climber_AttachedHasFollowTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ExecuteUbergraph_Climber_AttachedHasFollowTarget");
		
		UClimber_AttachedHasFollowTarget_C_ExecuteUbergraph_Climber_AttachedHasFollowTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClimber_AttachedHasFollowTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimber_AttachedHasFollowTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C");
		return ptr;
	}

}


