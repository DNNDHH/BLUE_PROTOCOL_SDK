#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetWeaponItemDataForDhcBattle
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetWeaponItemDataForDhcBattle_Params
	{
	public:
		struct FSBWeaponItemData                                   InWeaponData;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InBattleScore;                                           // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeaponBase
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase_Params
	{
	public:
		struct FSBWeaponMasterData                                 InWeaponMasterData;                                      // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InItemUniqueId;                                          // 0x00C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageId;                                             // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPerkUnlockedNum;                                       // 0x00DC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBCharacterWeaponPerkData>                  InPerkList;                                              // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InUsedPerkSlotNum;                                       // 0x00F0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSpecialPerkId;                                         // 0x00F4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSpecialPerkValue;                                      // 0x00F8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStackBNum;                                             // 0x00FC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsTermLimited;                                         // 0x0100(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKWE[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0108(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEffectiveDisplay;                                      // 0x0110(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x0111(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GCY5[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set Tool Tip Based Weapon Data
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetToolTipBasedWeaponData_Params
	{
	public:
		struct FSBWeaponMasterData                                 InWeaponMasterData;                                      // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InItemUniqueId;                                          // 0x00C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageId;                                             // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEffectiveDisplay;                                      // 0x00DC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x00DD(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5E04[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set  Weapon Item Data
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetWeaponItemData_Params
	{
	public:
		struct FSBWeaponItemData                                   InWeaponData;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ResetToDefaultTextColor
	 */
	struct UCommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor_Params
	{	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetAttributePower
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetAttributePower_Params
	{
	public:
		int32_t                                                    InAttributePower;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetLevelSync
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetLevelSync_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeapon
	 */
	struct UCommonIconToolTipContent_Weapon_C_SetToolTipWeapon_Params
	{
	public:
		struct FSBWeaponMasterData                                 InWeaponMasterData;                                      // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InItemUniqueId;                                          // 0x00C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageId;                                             // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEffectiveDisplay;                                      // 0x00DC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x00DD(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J047[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Construct
	 */
	struct UCommonIconToolTipContent_Weapon_C_Construct_Params
	{	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.PreConstruct
	 */
	struct UCommonIconToolTipContent_Weapon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ExecuteUbergraph_CommonIconToolTipContent_Weapon
	 */
	struct UCommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
