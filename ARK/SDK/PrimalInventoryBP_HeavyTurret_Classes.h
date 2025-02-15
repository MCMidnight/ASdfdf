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
	 * BlueprintGeneratedClass PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_HeavyTurret_C : public UPrimalInventoryBP_StorageBox_Base_C
	{
	public:
		bool BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController* PC, class UPrimalItem* anItem, int32_t anItemQuantityOverride, bool bRequestedByPlayer);
		void ExecuteUbergraph_PrimalInventoryBP_HeavyTurret(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
