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
	 * 		Name   -> Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_TitanHasDownloadSickness_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ReceiveConditionCheck");
		
		UDeco_TitanHasDownloadSickness_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ExecuteUbergraph_Deco_TitanHasDownloadSickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_TitanHasDownloadSickness_C::ExecuteUbergraph_Deco_TitanHasDownloadSickness(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ExecuteUbergraph_Deco_TitanHasDownloadSickness");
		
		UDeco_TitanHasDownloadSickness_C_ExecuteUbergraph_Deco_TitanHasDownloadSickness_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeco_TitanHasDownloadSickness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeco_TitanHasDownloadSickness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C");
		return ptr;
	}

}


