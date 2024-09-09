/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetWeaponItemDataForDhcBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetWeaponItemDataForDhcBattle(const struct FSBWeaponItemData& InWeaponData, int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetWeaponItemDataForDhcBattle");
		
		UCommonIconToolTipContent_Weapon_C_SetWeaponItemDataForDhcBattle_Params params {};
		params.InWeaponData = InWeaponData;
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeaponBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         InWeaponMasterData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPerkUnlockedNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBCharacterWeaponPerkData>          InPerkList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InUsedPerkSlotNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSpecialPerkId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSpecialPerkValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsTermLimited                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetToolTipWeaponBase(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32_t InStorageId, int32_t InPerkUnlockedNum, TArray<struct FSBCharacterWeaponPerkData>* InPerkList, int32_t InUsedPerkSlotNum, int32_t InSpecialPerkId, int32_t InSpecialPerkValue, int32_t InStackBNum, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeaponBase");
		
		UCommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase_Params params {};
		params.InWeaponMasterData = InWeaponMasterData;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageId = InStorageId;
		params.InPerkUnlockedNum = InPerkUnlockedNum;
		params.InUsedPerkSlotNum = InUsedPerkSlotNum;
		params.InSpecialPerkId = InSpecialPerkId;
		params.InSpecialPerkValue = InSpecialPerkValue;
		params.InStackBNum = InStackBNum;
		params.InIsTermLimited = InIsTermLimited;
		params.InExpiryDateTime = InExpiryDateTime;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPerkList != nullptr)
			*InPerkList = params.InPerkList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set Tool Tip Based Weapon Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         InWeaponMasterData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetToolTipBasedWeaponData(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32_t InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set Tool Tip Based Weapon Data");
		
		UCommonIconToolTipContent_Weapon_C_SetToolTipBasedWeaponData_Params params {};
		params.InWeaponMasterData = InWeaponMasterData;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageId = InStorageId;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set  Weapon Item Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetWeaponItemData(const struct FSBWeaponItemData& InWeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Set  Weapon Item Data");
		
		UCommonIconToolTipContent_Weapon_C_SetWeaponItemData_Params params {};
		params.InWeaponData = InWeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ResetToDefaultTextColor
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_Weapon_C::ResetToDefaultTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ResetToDefaultTextColor");
		
		UCommonIconToolTipContent_Weapon_C_ResetToDefaultTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetAttributePower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAttributePower                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetAttributePower(int32_t InAttributePower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetAttributePower");
		
		UCommonIconToolTipContent_Weapon_C_SetAttributePower_Params params {};
		params.InAttributePower = InAttributePower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetLevelSync(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetLevelSync");
		
		UCommonIconToolTipContent_Weapon_C_SetLevelSync_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         InWeaponMasterData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Weapon_C::SetToolTipWeapon(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32_t InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeapon");
		
		UCommonIconToolTipContent_Weapon_C_SetToolTipWeapon_Params params {};
		params.InWeaponMasterData = InWeaponMasterData;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageId = InStorageId;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_Weapon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Construct");
		
		UCommonIconToolTipContent_Weapon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Weapon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.PreConstruct");
		
		UCommonIconToolTipContent_Weapon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ExecuteUbergraph_CommonIconToolTipContent_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Weapon_C::ExecuteUbergraph_CommonIconToolTipContent_Weapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ExecuteUbergraph_CommonIconToolTipContent_Weapon");
		
		UCommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C");
		return ptr;
	}

}


