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
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemBoxDepthIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetItemBoxDepthIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemBoxDepthIndex");
		
		UBP_SBProductItemData_C_GetItemBoxDepthIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.IsItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::IsItemBox(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.IsItemBox");
		
		UBP_SBProductItemData_C_IsItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetIconItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetIconItemData");
		
		UBP_SBProductItemData_C_GetIconItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::IsCostumeSet(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeSet");
		
		UBP_SBProductItemData_C_IsCostumeSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetDetailType(E_SBProductDetailType* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetDetailType");
		
		UBP_SBProductItemData_C_GetDetailType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetSelectedData");
		
		UBP_SBProductItemData_C_GetSelectedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemDataList
	 * 		Flags  -> ()
	 */
	TArray<class UBP_SBProductItemData_C*> UBP_SBProductItemData_C::GetItemDataList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemDataList");
		
		UBP_SBProductItemData_C_GetItemDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetScrollOffset
	 * 		Flags  -> ()
	 */
	float UBP_SBProductItemData_C::GetScrollOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetScrollOffset");
		
		UBP_SBProductItemData_C_GetScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetParentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::GetParentData(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetParentData");
		
		UBP_SBProductItemData_C_GetParentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RewardLotId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::SetLotteryId(int32_t RewardLotId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryId");
		
		UBP_SBProductItemData_C_SetLotteryId_Params params {};
		params.RewardLotId = RewardLotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::SetAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetAmount");
		
		UBP_SBProductItemData_C_SetAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::SetLotteryAbility(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryAbility");
		
		UBP_SBProductItemData_C_SetLotteryAbility_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::SetBonus(bool bBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetBonus");
		
		UBP_SBProductItemData_C_SetBonus_Params params {};
		params.bBonus = bBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetRewardType(ESBRewardItemType* RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetRewardType");
		
		UBP_SBProductItemData_C_GetRewardType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardType != nullptr)
			*RewardType = params.RewardType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitSeasonPassRewardExtraData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             InSeasonPassMenuRewardItemData                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitSeasonPassRewardExtraData(class USBSeasonPassMenuRewardItemData* InSeasonPassMenuRewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitSeasonPassRewardExtraData");
		
		UBP_SBProductItemData_C_InitSeasonPassRewardExtraData_Params params {};
		params.InSeasonPassMenuRewardItemData = InSeasonPassMenuRewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.IsShowRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::IsShowRate(bool* bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.IsShowRate");
		
		UBP_SBProductItemData_C_IsShowRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValue != nullptr)
			*bValue = params.bValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailData                                 MailData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SBProductItemData_C::InitFromMailData(const struct FSBMailData& MailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMailData");
		
		UBP_SBProductItemData_C_InitFromMailData_Params params {};
		params.MailData = MailData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromEventShopProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBEventShopProduct                         ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SBProductItemData_C::InitFromEventShopProductData(const struct FSBEventShopProduct& ProductData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromEventShopProductData");
		
		UBP_SBProductItemData_C_InitFromEventShopProductData_Params params {};
		params.ProductData = ProductData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetItemIndex(int32_t* ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemIndex");
		
		UBP_SBProductItemData_C_GetItemIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIndex != nullptr)
			*ItemIndex = params.ItemIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFlag                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::IsCostumeData(bool* bFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeData");
		
		UBP_SBProductItemData_C_IsCostumeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFlag != nullptr)
			*bFlag = params.bFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.ToItemType(IntegerFromMasterData)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::ToItemTypeIntegerFromMasterData(int32_t Index, EItemType* ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.ToItemType(IntegerFromMasterData)");
		
		UBP_SBProductItemData_C_ToItemTypeIntegerFromMasterData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemType != nullptr)
			*ItemType = params.ItemType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.HasWight
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductItemData_C::HasWight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.HasWight");
		
		UBP_SBProductItemData_C_HasWight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromGashaReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaReward                              GashaReward                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductItemData_C::InitFromGashaReward(const struct FSBGashaReward& GashaReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromGashaReward");
		
		UBP_SBProductItemData_C_InitFromGashaReward_Params params {};
		params.GashaReward = GashaReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.IsSetItem
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductItemData_C::IsSetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.IsSetItem");
		
		UBP_SBProductItemData_C_IsSetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::GetVisibility(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetVisibility");
		
		UBP_SBProductItemData_C_GetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::SetVisibility(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetVisibility");
		
		UBP_SBProductItemData_C_SetVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetTrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::SetTrying(bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetTrying");
		
		UBP_SBProductItemData_C_SetTrying_Params params {};
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetTrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTrying                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::GetTrying(bool* bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetTrying");
		
		UBP_SBProductItemData_C_GetTrying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTrying != nullptr)
			*bTrying = params.bTrying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.GetCostumeMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeMasterData                                          (Parm, OutParm)
	 */
	void UBP_SBProductItemData_C::GetCostumeMasterData(struct FSBMasterCostume* CostumeMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.GetCostumeMasterData");
		
		UBP_SBProductItemData_C_GetCostumeMasterData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CostumeMasterData != nullptr)
			*CostumeMasterData = params.CostumeMasterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.HasRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::HasRewardType(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.HasRewardType");
		
		UBP_SBProductItemData_C_HasRewardType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.HasMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::HasMasterReward(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.HasMasterReward");
		
		UBP_SBProductItemData_C_HasMasterReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.HasItemBoxContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::HasItemBoxContent(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.HasItemBoxContent");
		
		UBP_SBProductItemData_C_HasItemBoxContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.HasUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::HasUniqueId(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.HasUniqueId");
		
		UBP_SBProductItemData_C_HasUniqueId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemBox
	 * 		Flags  -> ()
	 */
	void UBP_SBProductItemData_C::InitFromDummyItemBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemBox");
		
		UBP_SBProductItemData_C_InitFromDummyItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyCostumeSetBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DummyDataIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromDummyCostumeSetBox(int32_t DummyDataIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyCostumeSetBox");
		
		UBP_SBProductItemData_C_InitFromDummyCostumeSetBox_Params params {};
		params.DummyDataIndex = DummyDataIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInCostumeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DummyCostumeSetIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DummyDataIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromDummyItemDataInCostumeSet(int32_t DummyCostumeSetIndex, int32_t DummyDataIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInCostumeSet");
		
		UBP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet_Params params {};
		params.DummyCostumeSetIndex = DummyCostumeSetIndex;
		params.DummyDataIndex = DummyDataIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DummyDataIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromDummyItemDataInItemBox(int32_t DummyDataIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInItemBox");
		
		UBP_SBProductItemData_C_InitFromDummyItemDataInItemBox_Params params {};
		params.DummyDataIndex = DummyDataIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DummyDataIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromDummyItemData(int32_t DummyDataIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemData");
		
		UBP_SBProductItemData_C_InitFromDummyItemData_Params params {};
		params.DummyDataIndex = DummyDataIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromShopItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShopItemInfo                               ShopItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductItemData_C::InitFromShopItemInfo(const struct FShopItemInfo& ShopItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromShopItemInfo");
		
		UBP_SBProductItemData_C_InitFromShopItemInfo_Params params {};
		params.ShopItemInfo = ShopItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitIfItemBox
	 * 		Flags  -> ()
	 */
	void UBP_SBProductItemData_C::InitIfItemBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitIfItemBox");
		
		UBP_SBProductItemData_C_InitIfItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.initFromItemBoxContentParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxContentParam                      ItemBoxContentParam                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bCanParentBppExchange                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::initFromItemBoxContentParam(const struct FSBItemBoxContentParam& ItemBoxContentParam, bool bCanParentBppExchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.initFromItemBoxContentParam");
		
		UBP_SBProductItemData_C_initFromItemBoxContentParam_Params params {};
		params.ItemBoxContentParam = ItemBoxContentParam;
		params.bCanParentBppExchange = bCanParentBppExchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductItemData_C::InitFromMasterReward(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMasterReward");
		
		UBP_SBProductItemData_C_InitFromMasterReward_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromRewardData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, int32_t AmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromRewardData");
		
		UBP_SBProductItemData_C_InitFromRewardData_Params params {};
		params.RewardType = RewardType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromItemData(EItemType ItemType, int32_t ItemId, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromItemData");
		
		UBP_SBProductItemData_C_InitFromItemData_Params params {};
		params.ItemType = ItemType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::InitFromUniqueId(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromUniqueId");
		
		UBP_SBProductItemData_C_InitFromUniqueId_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::SetScrollOffset(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetScrollOffset");
		
		UBP_SBProductItemData_C_SetScrollOffset_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.SetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.SetSelectedData");
		
		UBP_SBProductItemData_C_SetSelectedData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.ExecuteUbergraph_BP_SBProductItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::ExecuteUbergraph_BP_SBProductItemData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.ExecuteUbergraph_BP_SBProductItemData");
		
		UBP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeVisibility__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductItemData_C::OnChangeVisibility__DelegateSignature(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeVisibility__DelegateSignature");
		
		UBP_SBProductItemData_C_OnChangeVisibility__DelegateSignature_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeTrying__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductItemData_C::OnChangeTrying__DelegateSignature(class UBP_SBProductItemData_C* Sender, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeTrying__DelegateSignature");
		
		UBP_SBProductItemData_C_OnChangeTrying__DelegateSignature_Params params {};
		params.Sender = Sender;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SBProductItemData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBProductItemData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBProductItemData.BP_SBProductItemData_C");
		return ptr;
	}

}


