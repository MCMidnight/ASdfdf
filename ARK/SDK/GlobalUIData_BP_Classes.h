﻿#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GlobalUIData_BP.GlobalUIData_BP_C
	 * Size -> 0x0588 (FullSize[0x06A0] - InheritedSize[0x0118])
	 */
	class UGlobalUIData_BP_C : public UPrimalGlobalUIData
	{
	public:
		struct FHUDElement                                         StruggleHUDElementTemplate;                              // 0x0118(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDRichTextOverlayData                             StruggleHUDRichTextOverlay;                              // 0x0268(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        StruggleHUDRichTextColor;                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StruggleHUDRichTextBlinkSpeed;                           // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H2HS[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultStruggleHUDTextString;                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FHUDElement                                         FuelOrAmmoHUDElementTemplate;                            // 0x02F0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FuelOrAmmoSpaceBetweenSlots;                             // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Default;                          // 0x0444(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Low;                              // 0x0454(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Critical;                         // 0x0464(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Upgrade1;                         // 0x0474(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Upgrade2;                         // 0x0484(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Default;                    // 0x0494(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Low;                        // 0x04A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Critical;                   // 0x04B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Upgrade1;                   // 0x04C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Upgrade2;                   // 0x04D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Default;                    // 0x04E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Low;                        // 0x04F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Critical;                   // 0x0504(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Upgrade1;                   // 0x0514(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Upgrade2;                   // 0x0524(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYCR[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         FuelOrAmmoExtraBarHUDElementTemplate;                    // 0x0538(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FuelOrAmmoExtraBarOffsetY;                               // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FuelOrAmmoExtraBarLocationSpanOffsetMult;                // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FHUDElement>                                 FuelOrAmmoSlotsInUse;                                    // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void BPGetHUDElements_Module_FuelOrAmmo_ExtraBar(int32_t SlotOffset, int32_t SlotSpan, int32_t StateIndex, float Progress, const class FString& ExtendedInfoText, struct FHUDElement* OutHUDElement);
		void BPGetHUDElements_Module_FuelOrAmmo(int32_t SlotIndex, int32_t StateIndex, float Progress, const class FString& MainText, const class FString& ExtendedInfoText, class UTexture2D* Icon, struct FHUDElement* OutHUDElement);
		void BPGetHUDElements_Module_Struggle(class APlayerController* ForPC, float StruggleProgressPercent, const class FString& RichTextOverride, class AActor* Instigator, TArray<struct FHUDElement>* Elements, struct FHUDRichTextOverlayData* OutHUDRichTextOverlay);
		void ExecuteUbergraph_GlobalUIData_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
