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
	 * 		Name   -> Function DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate.DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C.BPAdjustHarvestingDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C::BPAdjustHarvestingDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate.DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C.BPAdjustHarvestingDamage");
		
		UDmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C_BPAdjustHarvestingDamage_Params params {};
		params.Victim = Victim;
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate.DmgType_Melee_Dino_Herbivore_Medium_Stego_SharpPlate_C");
		return ptr;
	}

}


