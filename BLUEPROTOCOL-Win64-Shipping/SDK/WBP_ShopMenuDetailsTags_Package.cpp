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
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOwnItemByUniqueIdForInventoryTagStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetOwnItemByUniqueIdForInventoryTagStackB(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOwnItemByUniqueIdForInventoryTagStackB");
		
		UWBP_ShopMenuDetailsTags_C_SetOwnItemByUniqueIdForInventoryTagStackB_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.Set Lottery Groups Id
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLotteryGroupsId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetLotteryGroupsId(int32_t InLotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.Set Lottery Groups Id");
		
		UWBP_ShopMenuDetailsTags_C_SetLotteryGroupsId_Params params {};
		params.InLotteryGroupsId = InLotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetBppExchange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBppExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetBppExchange(bool bCanBppExchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetBppExchange");
		
		UWBP_ShopMenuDetailsTags_C_SetBppExchange_Params params {};
		params.bCanBppExchange = bCanBppExchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsBppIrredeemable
	 * 		Flags  -> ()
	 */
	bool UWBP_ShopMenuDetailsTags_C::IsBppIrredeemable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsBppIrredeemable");
		
		UWBP_ShopMenuDetailsTags_C_IsBppIrredeemable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsVisibieShowProductForCurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWBP_ShopMenuDetailsTags_C::IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsVisibieShowProductForCurrency");
		
		UWBP_ShopMenuDetailsTags_C_IsVisibieShowProductForCurrency_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.GetEventTermDataForCurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EventTermId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurationMinutes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::GetEventTermDataForCurrency(ESBRewardItemType RewardType, int32_t ItemIndex, class FString* EventTermId, int32_t* DurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.GetEventTermDataForCurrency");
		
		UWBP_ShopMenuDetailsTags_C_GetEventTermDataForCurrency_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTermId != nullptr)
			*EventTermId = params.EventTermId;
		if (DurationMinutes != nullptr)
			*DurationMinutes = params.DurationMinutes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetCostumeData(const struct FSBMasterCostume& MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCostumeData");
		
		UWBP_ShopMenuDetailsTags_C_SetCostumeData_Params params {};
		params.MasterCostume = MasterCostume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         WeaponMaster                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bSell                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRecipeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetWeaponData(const struct FSBWeaponMasterData& WeaponMaster, bool bSell, const class FString& InUniqueId, int32_t InRecipeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetWeaponData");
		
		UWBP_ShopMenuDetailsTags_C_SetWeaponData_Params params {};
		params.WeaponMaster = WeaponMaster;
		params.bSell = bSell;
		params.InUniqueId = InUniqueId;
		params.InRecipeId = InRecipeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsTags_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.PreConstruct");
		
		UWBP_ShopMenuDetailsTags_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetImagineData");
		
		UWBP_ShopMenuDetailsTags_C_SetImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetMountImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterMountImagine                       MasterMountImagine                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetMountImagineData(const struct FSBMasterMountImagine& MasterMountImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetMountImagineData");
		
		UWBP_ShopMenuDetailsTags_C_SetMountImagineData_Params params {};
		params.MasterMountImagine = MasterMountImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCurrencyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetCurrencyData(ESBRewardItemType RewardType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCurrencyData");
		
		UWBP_ShopMenuDetailsTags_C_SetCurrencyData_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowZoomInButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsTags_C::ShowZoomInButton(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowZoomInButton");
		
		UWBP_ShopMenuDetailsTags_C_ShowZoomInButton_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowRotateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsTags_C::ShowRotateIcon(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowRotateIcon");
		
		UWBP_ShopMenuDetailsTags_C_ShowRotateIcon_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowViewIllustImagineButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsTags_C::ShowViewIllustImagineButton(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowViewIllustImagineButton");
		
		UWBP_ShopMenuDetailsTags_C_ShowViewIllustImagineButton_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             ItemMaster                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetItemData(const struct FItemMasterData& ItemMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetItemData");
		
		UWBP_ShopMenuDetailsTags_C_SetItemData_Params params {};
		params.ItemMaster = ItemMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetAchievementData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAchievementMasterData                      AchievementMaster                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetAchievementData(const struct FAchievementMasterData& AchievementMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetAchievementData");
		
		UWBP_ShopMenuDetailsTags_C_SetAchievementData_Params params {};
		params.AchievementMaster = AchievementMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetEmoteData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBEmoteMasterData                          EmoteMaster                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetEmoteData(const struct FSBEmoteMasterData& EmoteMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetEmoteData");
		
		UWBP_ShopMenuDetailsTags_C_SetEmoteData_Params params {};
		params.EmoteMaster = EmoteMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampMasterData                          StampMasterData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetStampData(const struct FSBStampMasterData& StampMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampData");
		
		UWBP_ShopMenuDetailsTags_C_SetStampData_Params params {};
		params.StampMasterData = StampMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDateTimeTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LimitTimeColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DescColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetDateTimeTextColor(const struct FLinearColor& LimitTimeColor, const struct FLinearColor& DescColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDateTimeTextColor");
		
		UWBP_ShopMenuDetailsTags_C_SetDateTimeTextColor_Params params {};
		params.LimitTimeColor = LimitTimeColor;
		params.DescColor = DescColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampDataByCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMaster                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetStampDataByCategory(const struct FSBStampCategoryMasterData& StampCategoryMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampDataByCategory");
		
		UWBP_ShopMenuDetailsTags_C_SetStampDataByCategory_Params params {};
		params.StampCategoryMaster = StampCategoryMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDefault
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::SetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDefault");
		
		UWBP_ShopMenuDetailsTags_C_SetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOrnamentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterOrnament                           InOrnamentData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ShopMenuDetailsTags_C::SetOrnamentData(const struct FSBMasterOrnament& InOrnamentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOrnamentData");
		
		UWBP_ShopMenuDetailsTags_C_SetOrnamentData_Params params {};
		params.InOrnamentData = InOrnamentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ExecuteUbergraph_WBP_ShopMenuDetailsTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsTags_C::ExecuteUbergraph_WBP_ShopMenuDetailsTags(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ExecuteUbergraph_WBP_ShopMenuDetailsTags");
		
		UWBP_ShopMenuDetailsTags_C_ExecuteUbergraph_WBP_ShopMenuDetailsTags_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickReturnDisplay__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::OnClickReturnDisplay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickReturnDisplay__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_OnClickReturnDisplay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickShowProduct__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::OnClickShowProduct__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickShowProduct__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_OnClickShowProduct__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopMenuDetailsTags_C::OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickZoomIn__DelegateSignature");
		
		UWBP_ShopMenuDetailsTags_C_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ShopMenuDetailsTags_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ShopMenuDetailsTags_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C");
		return ptr;
	}

}


