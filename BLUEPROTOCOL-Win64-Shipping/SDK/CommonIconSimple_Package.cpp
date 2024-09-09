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
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetUnidentifiedIcon
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::SetUnidentifiedIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetUnidentifiedIcon");
		
		UCommonIconSimple_C_SetUnidentifiedIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetItemBoxContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxContentParam                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonIconSimple_C::SetItemBoxContent(const struct FSBItemBoxContentParam& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetItemBoxContent");
		
		UCommonIconSimple_C_SetItemBoxContent_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconSimple_C::SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetProductData");
		
		UCommonIconSimple_C_SetProductData_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonIconSimple_C::SetMasterReward(const struct FSBMasterReward& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetMasterReward");
		
		UCommonIconSimple_C_SetMasterReward_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.Set Reward Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmountMin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetRewardIcon(ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, int32_t InAmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.Set Reward Icon");
		
		UCommonIconSimple_C_SetRewardIcon_Params params {};
		params.InRewardType = InRewardType;
		params.InId = InId;
		params.InAmount = InAmount;
		params.InAmountMin = InAmountMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.GetRewardItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::GetRewardItemIcon(ESBRewardItemType RewardItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.GetRewardItemIcon");
		
		UCommonIconSimple_C_GetRewardItemIcon_Params params {};
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetSkyCoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetSkyCoin(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetSkyCoin");
		
		UCommonIconSimple_C_SetSkyCoin_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.ItemTypeToToolTipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EToolTipType                                       ToolTipType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.ItemTypeToToolTipType");
		
		UCommonIconSimple_C_ItemTypeToToolTipType_Params params {};
		params.InItemType = InItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTipType != nullptr)
			*ToolTipType = params.ToolTipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetClassExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetClassExp(int32_t Exp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetClassExp");
		
		UCommonIconSimple_C_SetClassExp_Params params {};
		params.Exp = Exp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetGrayOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrayOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconSimple_C::SetGrayOut(bool IsGrayOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetGrayOut");
		
		UCommonIconSimple_C_SetGrayOut_Params params {};
		params.IsGrayOut = IsGrayOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetEmptyStamp
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::SetEmptyStamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetEmptyStamp");
		
		UCommonIconSimple_C_SetEmptyStamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetBrokenData
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::SetBrokenData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetBrokenData");
		
		UCommonIconSimple_C_SetBrokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetBP(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetBP");
		
		UCommonIconSimple_C_SetBP_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetEmotion(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetEmotion");
		
		UCommonIconSimple_C_SetEmotion_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetMoney(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetMoney");
		
		UCommonIconSimple_C_SetMoney_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159");
		
		UCommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconStamp(const class FString& StampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconStamp");
		
		UCommonIconSimple_C_SetIconStamp_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconMountImagine(int32_t InIndex, const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconMountImagine");
		
		UCommonIconSimple_C_SetIconMountImagine_Params params {};
		params.InIndex = InIndex;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.IconLoadRequest
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::IconLoadRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.IconLoadRequest");
		
		UCommonIconSimple_C_IconLoadRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.IconLoadStart
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::IconLoadStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.IconLoadStart");
		
		UCommonIconSimple_C_IconLoadStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.IconLoadRequestCheckStart
	 * 		Flags  -> ()
	 */
	void UCommonIconSimple_C::IconLoadRequestCheckStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.IconLoadRequestCheckStart");
		
		UCommonIconSimple_C_IconLoadRequestCheckStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDetailsMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconWeapon(int32_t InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconWeapon");
		
		UCommonIconSimple_C_SetIconWeapon_Params params {};
		params.InItemIndex = InItemIndex;
		params.IsDetailsMode = IsDetailsMode;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconBasic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconBasic(EItemType Selection, int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconBasic");
		
		UCommonIconSimple_C_SetIconBasic_Params params {};
		params.Selection = Selection;
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisplayLockIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconSimple_C::SetIconCostume(int32_t InItemIndex, bool bDisplayLockIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconCostume");
		
		UCommonIconSimple_C_SetIconCostume_Params params {};
		params.InItemIndex = InItemIndex;
		params.bDisplayLockIcon = bDisplayLockIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.Set RewardCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetRewardCategory(ESBRewardItemType RewardItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.Set RewardCategory");
		
		UCommonIconSimple_C_SetRewardCategory_Params params {};
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconImagine(int32_t InImagineItemId, const class FString& UniqueId, int32_t StorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconImagine");
		
		UCommonIconSimple_C_SetIconImagine_Params params {};
		params.InImagineItemId = InImagineItemId;
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconStampCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconStampCategory(int32_t CategoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconStampCategory");
		
		UCommonIconSimple_C_SetIconStampCategory_Params params {};
		params.CategoryId = CategoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconToken(int32_t ID, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconToken");
		
		UCommonIconSimple_C_SetIconToken_Params params {};
		params.ID = ID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconRecipe(ESBRewardItemType Type, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconRecipe");
		
		UCommonIconSimple_C_SetIconRecipe_Params params {};
		params.Type = Type;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconAchivement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconAchivement(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconAchivement");
		
		UCommonIconSimple_C_SetIconAchivement_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisplayLockIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconSimple_C::SetIconItem(int32_t InItemIndex, int32_t InItemAmount, bool bDisplayLockIcon, bool IsUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconItem");
		
		UCommonIconSimple_C_SetIconItem_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemAmount = InItemAmount;
		params.bDisplayLockIcon = bDisplayLockIcon;
		params.IsUnidentified = IsUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconLiquidMemory(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconLiquidMemory");
		
		UCommonIconSimple_C_SetIconLiquidMemory_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconStampWithToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconStampWithToolTip(int32_t StampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconStampWithToolTip");
		
		UCommonIconSimple_C_SetIconStampWithToolTip_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.SetIconRecipeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::SetIconRecipeSet(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.SetIconRecipeSet");
		
		UCommonIconSimple_C_SetIconRecipeSet_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconSimple.CommonIconSimple_C.ExecuteUbergraph_CommonIconSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconSimple_C::ExecuteUbergraph_CommonIconSimple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconSimple.CommonIconSimple_C.ExecuteUbergraph_CommonIconSimple");
		
		UCommonIconSimple_C_ExecuteUbergraph_CommonIconSimple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconSimple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconSimple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconSimple.CommonIconSimple_C");
		return ptr;
	}

}


