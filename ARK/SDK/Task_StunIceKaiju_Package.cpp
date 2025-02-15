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
	 * 		Name   -> Function Task_StunIceKaiju.Task_StunIceKaiju_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_StunIceKaiju_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_StunIceKaiju.Task_StunIceKaiju_C.ReceiveExecute");
		
		UTask_StunIceKaiju_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_StunIceKaiju.Task_StunIceKaiju_C.ExecuteUbergraph_Task_StunIceKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_StunIceKaiju_C::ExecuteUbergraph_Task_StunIceKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_StunIceKaiju.Task_StunIceKaiju_C.ExecuteUbergraph_Task_StunIceKaiju");
		
		UTask_StunIceKaiju_C_ExecuteUbergraph_Task_StunIceKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_StunIceKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_StunIceKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_StunIceKaiju.Task_StunIceKaiju_C");
		return ptr;
	}

}


