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
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetItemBoxDepthIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::GetItemBoxDepthIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetItemBoxDepthIndex");
		
		UBP_SBProductData_C_GetItemBoxDepthIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductData_C::IsItemBox(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsItemBox");
		
		UBP_SBProductData_C_IsItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetIconItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetIconItemData");
		
		UBP_SBProductData_C_GetIconItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsCostumeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductData_C::IsCostumeSet(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsCostumeSet");
		
		UBP_SBProductData_C_IsCostumeSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::GetDetailType(E_SBProductDetailType* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetDetailType");
		
		UBP_SBProductData_C_GetDetailType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetSelectedData");
		
		UBP_SBProductData_C_GetSelectedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetItemDataList
	 * 		Flags  -> ()
	 */
	TArray<class UBP_SBProductItemData_C*> UBP_SBProductData_C::GetItemDataList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetItemDataList");
		
		UBP_SBProductData_C_GetItemDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetScrollOffset
	 * 		Flags  -> ()
	 */
	float UBP_SBProductData_C::GetScrollOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetScrollOffset");
		
		UBP_SBProductData_C_GetScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetParentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductData_C::GetParentData(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetParentData");
		
		UBP_SBProductData_C_GetParentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDropTreasureData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RewardLotId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByDropTreasureData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, bool bBonus, int32_t RewardLotId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDropTreasureData");
		
		UBP_SBProductData_C_InitFromDetailMenuByDropTreasureData_Params params {};
		params.RewardType = RewardType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		params.bBonus = bBonus;
		params.RewardLotId = RewardLotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsSoldOut
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::IsSoldOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsSoldOut");
		
		UBP_SBProductData_C_IsSoldOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.SetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::SetPrice(int32_t Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.SetPrice");
		
		UBP_SBProductData_C_SetPrice_Params params {};
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitDungeonSupply_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductData_C::InitDungeonSupply_Internal(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitDungeonSupply_Internal");
		
		UBP_SBProductData_C_InitDungeonSupply_Internal_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsTryingFirstItem
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::IsTryingFirstItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsTryingFirstItem");
		
		UBP_SBProductData_C_IsTryingFirstItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitMasterReward_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductData_C::InitMasterReward_Internal(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitMasterReward_Internal");
		
		UBP_SBProductData_C_InitMasterReward_Internal_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByRewardData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, bool bBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByRewardData");
		
		UBP_SBProductData_C_InitFromDetailMenuByRewardData_Params params {};
		params.RewardType = RewardType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		params.bBonus = bBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OverrideAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByUniqueId(const class FString& UniqueId, int32_t OverrideAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByUniqueId");
		
		UBP_SBProductData_C_InitFromDetailMenuByUniqueId_Params params {};
		params.UniqueId = UniqueId;
		params.OverrideAmount = OverrideAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMailDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         MailDatas                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByMailDatas(TArray<struct FSBMailData>* MailDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMailDatas");
		
		UBP_SBProductData_C_InitFromDetailMenuByMailDatas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MailDatas != nullptr)
			*MailDatas = params.MailDatas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDungeonSupply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDungeonSupply");
		
		UBP_SBProductData_C_InitFromDetailMenuByDungeonSupply_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductData_C::InitFromDetailMenuByMasterReward(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMasterReward");
		
		UBP_SBProductData_C_InitFromDetailMenuByMasterReward_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::InitFromDetailMenu(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenu");
		
		UBP_SBProductData_C_InitFromDetailMenu_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsSelectFirstItem
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::IsSelectFirstItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsSelectFirstItem");
		
		UBP_SBProductData_C_IsSelectFirstItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.IsHideList
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::IsHideList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.IsHideList");
		
		UBP_SBProductData_C_IsHideList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SBProductData_C::InitFromAdventureBoard(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromAdventureBoard");
		
		UBP_SBProductData_C_InitFromAdventureBoard_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriod
	 * 		Flags  -> ()
	 */
	struct FDateTime UBP_SBProductData_C::GetPurchasePeriod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriod");
		
		UBP_SBProductData_C_GetPurchasePeriod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromGashaRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSBGashaReward>                      GashaRewardList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SBProductData_C::InitFromGashaRewardList(const class FText& Title, const class FText& Description, TArray<struct FSBGashaReward>* GashaRewardList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromGashaRewardList");
		
		UBP_SBProductData_C_InitFromGashaRewardList_Params params {};
		params.Title = Title;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GashaRewardList != nullptr)
			*GashaRewardList = params.GashaRewardList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonPassRewardItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::InitFromSeasonPassRewardItemData(class USBSeasonPassMenuRewardItemData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonPassRewardItemData");
		
		UBP_SBProductData_C_InitFromSeasonPassRewardItemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonRankPointShopProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBProductData                              ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SBProductData_C::InitFromSeasonRankPointShopProductData(const struct FSBProductData& ProductData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonRankPointShopProductData");
		
		UBP_SBProductData_C_InitFromSeasonRankPointShopProductData_Params params {};
		params.ProductData = ProductData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromFlatShopProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBProductData                              ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SBProductData_C::InitFromFlatShopProductData(const struct FSBProductData& ProductData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromFlatShopProductData");
		
		UBP_SBProductData_C_InitFromFlatShopProductData_Params params {};
		params.ProductData = ProductData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromDummyItemBox
	 * 		Flags  -> ()
	 */
	void UBP_SBProductData_C::InitFromDummyItemBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromDummyItemBox");
		
		UBP_SBProductData_C_InitFromDummyItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromRoseOrbShopItemMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRoseOrbShopItemMasterData                RoseOrbShopItemMaster                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SBProductData_C::InitFromRoseOrbShopItemMaster(const struct FSBRoseOrbShopItemMasterData& RoseOrbShopItemMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromRoseOrbShopItemMaster");
		
		UBP_SBProductData_C_InitFromRoseOrbShopItemMaster_Params params {};
		params.RoseOrbShopItemMaster = RoseOrbShopItemMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.InitFromShopItemInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FShopItemInfo>                       ShopItemInfoList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::InitFromShopItemInfoList(const class FText& Description, TArray<struct FShopItemInfo>* ShopItemInfoList, ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.InitFromShopItemInfoList");
		
		UBP_SBProductData_C_InitFromShopItemInfoList_Params params {};
		params.Description = Description;
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShopItemInfoList != nullptr)
			*ShopItemInfoList = params.ShopItemInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriodText
	 * 		Flags  -> ()
	 */
	class FText UBP_SBProductData_C::GetPurchasePeriodText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriodText");
		
		UBP_SBProductData_C_GetPurchasePeriodText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetPurchaseRestrictionCountText
	 * 		Flags  -> ()
	 */
	class FText UBP_SBProductData_C::GetPurchaseRestrictionCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetPurchaseRestrictionCountText");
		
		UBP_SBProductData_C_GetPurchaseRestrictionCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.SetShopType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::SetShopType(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.SetShopType");
		
		UBP_SBProductData_C_SetShopType_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.SetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::SetDetailType(E_SBProductDetailType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.SetDetailType");
		
		UBP_SBProductData_C_SetDetailType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.HasPurchaseRestriction
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::HasPurchaseRestriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.HasPurchaseRestriction");
		
		UBP_SBProductData_C_HasPurchaseRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.GetProductIconItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::GetProductIconItemData(class UBP_SBProductItemData_C** ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.GetProductIconItemData");
		
		UBP_SBProductData_C_GetProductIconItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.HasPurchasePeriod
	 * 		Flags  -> ()
	 */
	bool UBP_SBProductData_C::HasPurchasePeriod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.HasPurchasePeriod");
		
		UBP_SBProductData_C_HasPurchasePeriod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.CreateItemBoxDummyData
	 * 		Flags  -> ()
	 */
	void UBP_SBProductData_C::CreateItemBoxDummyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.CreateItemBoxDummyData");
		
		UBP_SBProductData_C_CreateItemBoxDummyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.CreateDummyData2
	 * 		Flags  -> ()
	 */
	void UBP_SBProductData_C::CreateDummyData2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.CreateDummyData2");
		
		UBP_SBProductData_C_CreateDummyData2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.CreateDummyData
	 * 		Flags  -> ()
	 */
	void UBP_SBProductData_C::CreateDummyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.CreateDummyData");
		
		UBP_SBProductData_C_CreateDummyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::SetScrollOffset(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.SetScrollOffset");
		
		UBP_SBProductData_C_SetScrollOffset_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.SetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.SetSelectedData");
		
		UBP_SBProductData_C_SetSelectedData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBProductData.BP_SBProductData_C.ExecuteUbergraph_BP_SBProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBProductData_C::ExecuteUbergraph_BP_SBProductData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBProductData.BP_SBProductData_C.ExecuteUbergraph_BP_SBProductData");
		
		UBP_SBProductData_C_ExecuteUbergraph_BP_SBProductData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SBProductData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBProductData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBProductData.BP_SBProductData_C");
		return ptr;
	}

}


