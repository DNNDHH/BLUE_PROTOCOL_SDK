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
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdatePrevAbilityTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdatePrevAbilityTextColor(const struct FOwnItemInfo& Prev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdatePrevAbilityTextColor");
		
		UCommonEquipmentBasicStatusParts_C_UpdatePrevAbilityTextColor_Params params {};
		params.Prev = Prev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleInventoryTagInfoIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetVisibleInventoryTagInfoIcon(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleInventoryTagInfoIcon");
		
		UCommonEquipmentBasicStatusParts_C_SetVisibleInventoryTagInfoIcon_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleSPEffectBonusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetVisibleSPEffectBonusInfo(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleSPEffectBonusInfo");
		
		UCommonEquipmentBasicStatusParts_C_SetVisibleSPEffectBonusInfo_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetBattleScoreTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreTextColor");
		
		UCommonEquipmentBasicStatusParts_C_SetBattleScoreTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetStackBToolTipTagStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsIconOff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetStackBToolTipTagStatus(bool bIsIconOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetStackBToolTipTagStatus");
		
		UCommonEquipmentBasicStatusParts_C_SetStackBToolTipTagStatus_Params params {};
		params.bIsIconOff = bIsIconOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetBattleScoreVisibility(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreVisibility");
		
		UCommonEquipmentBasicStatusParts_C_SetBattleScoreVisibility_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateSocketsInfoByWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecipiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdateSocketsInfoByWeaponId(int32_t RecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateSocketsInfoByWeaponId");
		
		UCommonEquipmentBasicStatusParts_C_UpdateSocketsInfoByWeaponId_Params params {};
		params.RecipiId = RecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpImagineUniqueStatusSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpImagineUniqueStatusSets(const struct FSBMasterImagine& MasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpImagineUniqueStatusSets");
		
		UCommonEquipmentBasicStatusParts_C_SetUpImagineUniqueStatusSets_Params params {};
		params.MasterImagine = MasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSockets
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpSockets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSockets");
		
		UCommonEquipmentBasicStatusParts_C_SetUpSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSPEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSPEffectsNewFormat                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpSPEffects(bool bInIsSPEffectsNewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSPEffects");
		
		UCommonEquipmentBasicStatusParts_C_SetUpSPEffects_Params params {};
		params.bInIsSPEffectsNewFormat = bInIsSPEffectsNewFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.InitView
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::InitView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.InitView");
		
		UCommonEquipmentBasicStatusParts_C_InitView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpBattleScoreTitleTxt
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpBattleScoreTitleTxt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpBattleScoreTitleTxt");
		
		UCommonEquipmentBasicStatusParts_C_SetUpBattleScoreTitleTxt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelHeadingTxt
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpLevelHeadingTxt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelHeadingTxt");
		
		UCommonEquipmentBasicStatusParts_C_SetUpLevelHeadingTxt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNeedLevelSync                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpLevelSync(bool bNeedLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelSync");
		
		UCommonEquipmentBasicStatusParts_C_SetUpLevelSync_Params params {};
		params.bNeedLevelSync = bNeedLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BattleScoreValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpLevel(int32_t LevelValue, int32_t BattleScoreValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevel");
		
		UCommonEquipmentBasicStatusParts_C_SetUpLevel_Params params {};
		params.LevelValue = LevelValue;
		params.BattleScoreValue = BattleScoreValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetWishListMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForWishList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetWishListMode(bool bForWishList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetWishListMode");
		
		UCommonEquipmentBasicStatusParts_C_SetWishListMode_Params params {};
		params.bForWishList = bForWishList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ShowBasicTagInfos
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::ShowBasicTagInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ShowBasicTagInfos");
		
		UCommonEquipmentBasicStatusParts_C_ShowBasicTagInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByWeaponMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         LocalWeaponMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpWeaponSkinIconAndTagsByWeaponMaster(const struct FSBWeaponMasterData& LocalWeaponMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByWeaponMaster");
		
		UCommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster_Params params {};
		params.LocalWeaponMaster = LocalWeaponMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByImagineMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            LocalImagineMaster                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetUpWeaponSkinIconAndTagsByImagineMaster(const struct FSBMasterImagine& LocalImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByImagineMaster");
		
		UCommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster_Params params {};
		params.LocalImagineMaster = LocalImagineMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetPrevInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetPrevInfo(const struct FOwnItemInfo& Prev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetPrevInfo");
		
		UCommonEquipmentBasicStatusParts_C_SetPrevInfo_Params params {};
		params.Prev = Prev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByImagineId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecipiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdateLimitInfoByImagineId(int32_t RecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByImagineId");
		
		UCommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId_Params params {};
		params.RecipiId = RecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecipiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdateLimitInfoByWeaponId(int32_t RecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByWeaponId");
		
		UCommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId_Params params {};
		params.RecipiId = RecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdateLimitRecepiByImagine(const struct FMasterImagineRecepi& MasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByImagine");
		
		UCommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftMasterData                            MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::UpdateLimitRecepiByWeapon(const struct FCraftMasterData& MasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByWeapon");
		
		UCommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetSPEffectTextAsRecipi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRecipiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetSPEffectTextAsRecipi(int32_t InRecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetSPEffectTextAsRecipi");
		
		UCommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi_Params params {};
		params.InRecipiId = InRecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.HideBasicTagInfos
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::HideBasicTagInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.HideBasicTagInfos");
		
		UCommonEquipmentBasicStatusParts_C_HideBasicTagInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set Int to Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseGrouping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetInttoText(class UTextBlock* Target, int32_t Value, bool UseGrouping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set Int to Text");
		
		UCommonEquipmentBasicStatusParts_C_SetInttoText_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.UseGrouping = UseGrouping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set SPEffect Text Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetSPEffectTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set SPEffect Text Color");
		
		UCommonEquipmentBasicStatusParts_C_SetSPEffectTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLevelSync                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetLevelSync(bool bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelSync");
		
		UCommonEquipmentBasicStatusParts_C_SetLevelSync_Params params {};
		params.bIsLevelSync = bIsLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByRecepiId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupByRecepiId(int32_t ID, EItemType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByRecepiId");
		
		UCommonEquipmentBasicStatusParts_C_SetupByRecepiId_Params params {};
		params.ID = ID;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByRecepiId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByRecepiId(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByRecepiId");
		
		UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByRecepiId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByRecepiId(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByRecepiId");
		
		UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelAndExpLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetLevelAndExpLevelSync(const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelAndExpLevelSync");
		
		UCommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToImagineStatusMode
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::AdjustToImagineStatusMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToImagineStatusMode");
		
		UCommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToWeaponStatusMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSPEffectsNewFormat                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::AdjustToWeaponStatusMode(bool bInIsSPEffectsNewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToWeaponStatusMode");
		
		UCommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode_Params params {};
		params.bInIsSPEffectsNewFormat = bInIsSPEffectsNewFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitTagsByMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByMasterData(int32_t InImagineId, bool bInitTagsByMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByMasterData");
		
		UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData_Params params {};
		params.InImagineId = InImagineId;
		params.bInitTagsByMaster = bInitTagsByMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitTagsByMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByMasterData(int32_t InWeaponID, bool bInitTagsByMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByMasterData");
		
		UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData_Params params {};
		params.InWeaponID = InWeaponID;
		params.bInitTagsByMaster = bInitTagsByMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEquipmentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InEquipmentItemType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitTagsByMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InRecipiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupByMasterData(int32_t InEquipmentId, EItemType InEquipmentItemType, bool bInitTagsByMaster, int32_t InRecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByMasterData");
		
		UCommonEquipmentBasicStatusParts_C_SetupByMasterData_Params params {};
		params.InEquipmentId = InEquipmentId;
		params.InEquipmentItemType = InEquipmentItemType;
		params.bInitTagsByMaster = bInitTagsByMaster;
		params.InRecipiId = InRecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsForStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByOwnItemInfo");
		
		UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InIsForStorage = InIsForStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsForStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByOwnItemInfo");
		
		UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InIsForStorage = InIsForStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsForStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicStatusParts_C::SetupByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByOwnItemInfo");
		
		UCommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InIsForStorage = InIsForStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicStatusParts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Construct");
		
		UCommonEquipmentBasicStatusParts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicStatusParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicStatusParts_C::ExecuteUbergraph_CommonEquipmentBasicStatusParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicStatusParts");
		
		UCommonEquipmentBasicStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicStatusParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentBasicStatusParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentBasicStatusParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C");
		return ptr;
	}

}


