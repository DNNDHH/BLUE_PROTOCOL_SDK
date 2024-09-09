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
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleInventoryTagInfoIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetVisibleInventoryTagInfoIcon(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleInventoryTagInfoIcon");
		
		UCommonEquipmentStatusDescWithImageView_C_SetVisibleInventoryTagInfoIcon_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleSPEffectBonusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetVisibleSPEffectBonusInfo(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleSPEffectBonusInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_SetVisibleSPEffectBonusInfo_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetBattleScoreTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InBeforeItem                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                InAfterItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetBattleScoreTextColor(const struct FOwnItemInfo& InBeforeItem, const struct FOwnItemInfo& InAfterItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetBattleScoreTextColor");
		
		UCommonEquipmentStatusDescWithImageView_C_SetBattleScoreTextColor_Params params {};
		params.InBeforeItem = InBeforeItem;
		params.InAfterItem = InAfterItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetStackBToolTipStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsIconOff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetStackBToolTipStatus(bool bIsIconOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetStackBToolTipStatus");
		
		UCommonEquipmentStatusDescWithImageView_C_SetStackBToolTipStatus_Params params {};
		params.bIsIconOff = bIsIconOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWishListMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWishList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetWishListMode(bool bWishList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWishListMode");
		
		UCommonEquipmentStatusDescWithImageView_C_SetWishListMode_Params params {};
		params.bWishList = bWishList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Show Basic Status Parts Tags
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentStatusDescWithImageView_C::ShowBasicStatusPartsTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Show Basic Status Parts Tags");
		
		UCommonEquipmentStatusDescWithImageView_C_ShowBasicStatusPartsTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetPrevInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetPrevInfo(const struct FOwnItemInfo& Prev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetPrevInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_SetPrevInfo_Params params {};
		params.Prev = Prev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetDescPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescPosition");
		
		UCommonEquipmentStatusDescWithImageView_C_SetDescPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescSPEffectByRecipi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRecipiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetWeaponDescSPEffectByRecipi(int32_t InRecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescSPEffectByRecipi");
		
		UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi_Params params {};
		params.InRecipiId = InRecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.HideBasicStatusPartsTags
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentStatusDescWithImageView_C::HideBasicStatusPartsTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.HideBasicStatusPartsTags");
		
		UCommonEquipmentStatusDescWithImageView_C_HideBasicStatusPartsTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetImagineDescByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetImagineDescByOwnItemInfo(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetImagineDescByOwnItemInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set SPEffect Txt Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetSPEffectTxtColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set SPEffect Txt Color");
		
		UCommonEquipmentStatusDescWithImageView_C_SetSPEffectTxtColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLevelSync                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetLevelSync(bool bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetLevelSync");
		
		UCommonEquipmentStatusDescWithImageView_C_SetLevelSync_Params params {};
		params.bIsLevelSync = bIsLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadImagineAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::LoadImagineAsset(int32_t WeaponItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadImagineAsset");
		
		UCommonEquipmentStatusDescWithImageView_C_LoadImagineAsset_Params params {};
		params.WeaponItemId = WeaponItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Imagine Desc By Character Imagine Recepi Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetImagineDescByCharacterImagineRecepiData(const struct FCharacterCraftRecepi& MasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Imagine Desc By Character Imagine Recepi Data");
		
		UCommonEquipmentStatusDescWithImageView_C_SetImagineDescByCharacterImagineRecepiData_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDrawMode
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateDrawMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDrawMode");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateDrawMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadWeaponAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::LoadWeaponAsset(int32_t WeaponItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadWeaponAsset");
		
		UCommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset_Params params {};
		params.WeaponItemId = WeaponItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Weapon Desc By Character Craft Recepi Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetWeaponDescByCharacterCraftRecepiData(const struct FCharacterCraftRecepi& MasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Weapon Desc By Character Craft Recepi Data");
		
		UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescByCharacterCraftRecepiData_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetWeaponDescByOwnItemInfo(const struct FOwnItemInfo& InWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescByOwnItemInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SwitchBaseBgType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNormalType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SwitchBaseBgType(bool InIsNormalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SwitchBaseBgType");
		
		UCommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType_Params params {};
		params.InIsNormalType = InIsNormalType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescToDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDescDefault                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetDescToDefault(bool InIsDescDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescToDefault");
		
		UCommonEquipmentStatusDescWithImageView_C_SetDescToDefault_Params params {};
		params.InIsDescDefault = InIsDescDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentModelCaptureImageVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetEquipmentModelCaptureImageVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentModelCaptureImageVisibility");
		
		UCommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetUsingEquipmentImage2Dor3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InUse3D                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetUsingEquipmentImage2Dor3D(bool InUse3D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetUsingEquipmentImage2Dor3D");
		
		UCommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D_Params params {};
		params.InUse3D = InUse3D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitTagsByMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateImagineDescByMasterData(int32_t InImagineId, bool bInitTagsByMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByMasterData");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData_Params params {};
		params.InImagineId = InImagineId;
		params.bInitTagsByMaster = bInitTagsByMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRecipiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitTagsByMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateWeaponDescByMasterData(int32_t InWeaponID, int32_t MinLevel, int32_t MaxLevel, int32_t InRecipiId, bool bInitTagsByMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByMasterData");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData_Params params {};
		params.InWeaponID = InWeaponID;
		params.MinLevel = MinLevel;
		params.MaxLevel = MaxLevel;
		params.InRecipiId = InRecipiId;
		params.bInitTagsByMaster = bInitTagsByMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEquipmentItemId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateDescByMasterData(int32_t InEquipmentItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByMasterData");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData_Params params {};
		params.InEquipmentItemId = InEquipmentItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateImagineDescByOwnItemInfo(const class FString& inImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByOwnItemInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo_Params params {};
		params.inImagineUniqueId = inImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateWeaponDescByOwnItemInfo(const class FString& InWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByOwnItemInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::UpdateDescByOwnItemInfo(const class FString& InEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByOwnItemInfo");
		
		UCommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo_Params params {};
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::SetEquipmentType(ESBCharaEquipType InEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentType");
		
		UCommonEquipmentStatusDescWithImageView_C_SetEquipmentType_Params params {};
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.PreConstruct");
		
		UCommonEquipmentStatusDescWithImageView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentStatusDescWithImageView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Construct");
		
		UCommonEquipmentStatusDescWithImageView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.ExecuteUbergraph_CommonEquipmentStatusDescWithImageView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::ExecuteUbergraph_CommonEquipmentStatusDescWithImageView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.ExecuteUbergraph_CommonEquipmentStatusDescWithImageView");
		
		UCommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestBattleImagineModelLoad__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InBattleImagineInventoryItemData                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestBattleImagineModelLoad__DelegateSignature");
		
		UCommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature_Params params {};
		params.InBattleImagineInventoryItemData = InBattleImagineInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestWeaponModelLoad__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InWeaponInventoryItemData                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescWithImageView_C::OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestWeaponModelLoad__DelegateSignature");
		
		UCommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature_Params params {};
		params.InWeaponInventoryItemData = InWeaponInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentStatusDescWithImageView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentStatusDescWithImageView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C");
		return ptr;
	}

}


