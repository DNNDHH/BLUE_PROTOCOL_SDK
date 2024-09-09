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
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryGroupsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::SetLotteryGroupsId(int32_t LotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryGroupsId");
		
		UShopMenuDetailsSwitcher_C_SetLotteryGroupsId_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLotteryAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::SetLotteryAbility(bool bLotteryAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryAbility");
		
		UShopMenuDetailsSwitcher_C_SetLotteryAbility_Params params {};
		params.bLotteryAbility = bLotteryAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBppExchange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBppExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::SetBppExchange(bool bCanBppExchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBppExchange");
		
		UShopMenuDetailsSwitcher_C_SetBppExchange_Params params {};
		params.bCanBppExchange = bCanBppExchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetOriginalRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  OriginalRewardType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::GetOriginalRewardType(ESBRewardItemType* OriginalRewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetOriginalRewardType");
		
		UShopMenuDetailsSwitcher_C_GetOriginalRewardType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalRewardType != nullptr)
			*OriginalRewardType = params.OriginalRewardType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowOriginal
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::ShowOriginal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowOriginal");
		
		UShopMenuDetailsSwitcher_C_ShowOriginal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::ShowProduct(ESBRewardItemType RewardType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowProduct");
		
		UShopMenuDetailsSwitcher_C_ShowProduct_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::SetBonus(bool bBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBonus");
		
		UShopMenuDetailsSwitcher_C_SetBonus_Params params {};
		params.bBonus = bBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromItemBoxContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxContentParam                      ItemBoxContent                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromItemBoxContent(const struct FSBItemBoxContentParam& ItemBoxContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromItemBoxContent");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent_Params params {};
		params.ItemBoxContent = ItemBoxContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromRewardData(ESBRewardItemType RewardType, int32_t ItemIndex, int32_t Amount, int32_t AmountMin, bool bShowProduct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromRewardData");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.bShowProduct = bShowProduct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterRewardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MasterRewardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromMasterRewardId(const class FName& MasterRewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterRewardId");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId_Params params {};
		params.MasterRewardId = MasterRewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromMasterReward(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterReward");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails_Internal
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetails_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails_Internal");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetails_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.RewardTypeToDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_ItemDetailTypes                                  DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::RewardTypeToDetailType(ESBRewardItemType RewardType, int32_t ItemIndex, bool* bValid, E_ItemDetailTypes* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.RewardTypeToDetailType");
		
		UShopMenuDetailsSwitcher_C_RewardTypeToDetailType_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ItemTypeToDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_ItemDetailTypes                                  DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::ItemTypeToDetailType(EItemType ItemType, int32_t ItemIndex, bool* bValid, E_ItemDetailTypes* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ItemTypeToDetailType");
		
		UShopMenuDetailsSwitcher_C_ItemTypeToDetailType_Params params {};
		params.ItemType = ItemType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetCurrentItemDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_ItemDetailTypes                                  DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::GetCurrentItemDetailType(bool* bValid, E_ItemDetailTypes* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetCurrentItemDetailType");
		
		UShopMenuDetailsSwitcher_C_GetCurrentItemDetailType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetailInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ItemDetailTypes                                  DetailType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::CloseItemDetailInternal(E_ItemDetailTypes DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetailInternal");
		
		UShopMenuDetailsSwitcher_C_CloseItemDetailInternal_Params params {};
		params.DetailType = DetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bShowProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::ShowItemDetails(int32_t InItemIndex, EItemType InItemType, int32_t Amount, int32_t AmountMin, const class FString& UniqueId, bool bShowProduct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails");
		
		UShopMenuDetailsSwitcher_C_ShowItemDetails_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemType = InItemType;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.UniqueId = UniqueId;
		params.bShowProduct = bShowProduct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::InitItemDetails(const class FString& InCurrMapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitItemDetails");
		
		UShopMenuDetailsSwitcher_C_InitItemDetails_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SpawnSceneCapture2DStudio
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::SpawnSceneCapture2DStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SpawnSceneCapture2DStudio");
		
		UShopMenuDetailsSwitcher_C_SpawnSceneCapture2DStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShowCostumeModelCaptureImage
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::OnShowCostumeModelCaptureImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShowCostumeModelCaptureImage");
		
		UShopMenuDetailsSwitcher_C_OnShowCostumeModelCaptureImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnLoadWeaponAsset
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::OnLoadWeaponAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnLoadWeaponAsset");
		
		UShopMenuDetailsSwitcher_C_OnLoadWeaponAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CreateItemDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::CreateItemDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CreateItemDetails");
		
		UShopMenuDetailsSwitcher_C_CreateItemDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::OnEndCloseDetailAnimation_Event(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation_Event");
		
		UShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.DestroyItemDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::DestroyItemDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.DestroyItemDetails");
		
		UShopMenuDetailsSwitcher_C_DestroyItemDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnSelectCostumeType_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaleCostumeSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::OnSelectCostumeType_Event(bool IsMaleCostumeSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnSelectCostumeType_Event");
		
		UShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event_Params params {};
		params.IsMaleCostumeSelected = IsMaleCostumeSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::CloseItemDetail(bool bAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetail");
		
		UShopMenuDetailsSwitcher_C_CloseItemDetail_Params params {};
		params.bAnimation = bAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickedItemBoxDetail
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::OnClickedItemBoxDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickedItemBoxDetail");
		
		UShopMenuDetailsSwitcher_C_OnClickedItemBoxDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomInEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::OnClickZoomInEvent(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomInEvent");
		
		UShopMenuDetailsSwitcher_C_OnClickZoomInEvent_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Construct");
		
		UShopMenuDetailsSwitcher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Destruct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Destruct");
		
		UShopMenuDetailsSwitcher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.PreConstruct");
		
		UShopMenuDetailsSwitcher_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetExternalDirectionalLightRotation");
		
		UShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ApplyExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::ApplyExternalDirectionalLightRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ApplyExternalDirectionalLightRotation");
		
		UShopMenuDetailsSwitcher_C_ApplyExternalDirectionalLightRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesign
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::UpdateDesign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesign");
		
		UShopMenuDetailsSwitcher_C_UpdateDesign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LayoutType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::Init(const class FName& LayoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Init");
		
		UShopMenuDetailsSwitcher_C_Init_Params params {};
		params.LayoutType = LayoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesignAndData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LayoutType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::UpdateDesignAndData(const class FName& LayoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesignAndData");
		
		UShopMenuDetailsSwitcher_C_UpdateDesignAndData_Params params {};
		params.LayoutType = LayoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitInternal
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::InitInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitInternal");
		
		UShopMenuDetailsSwitcher_C_InitInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ExecuteUbergraph_ShopMenuDetailsSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::ExecuteUbergraph_ShopMenuDetailsSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ExecuteUbergraph_ShopMenuDetailsSwitcher");
		
		UShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::OnClickItemBoxDetail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickItemBoxDetail__DelegateSignature");
		
		UShopMenuDetailsSwitcher_C_OnClickItemBoxDetail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsSwitcher_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShow__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsSwitcher_C::OnShow__DelegateSignature(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShow__DelegateSignature");
		
		UShopMenuDetailsSwitcher_C_OnShow__DelegateSignature_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsSwitcher_C::OnEndCloseDetailAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C");
		return ptr;
	}

}


