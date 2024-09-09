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
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SwitchHoldType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsToken                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SwitchHoldType(bool* IsToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SwitchHoldType");
		
		UEventShopProductBox_Item_C_SwitchHoldType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsToken != nullptr)
			*IsToken = params.IsToken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckExchangeLimitNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LimitNum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::CheckExchangeLimitNum(int32_t* LimitNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckExchangeLimitNum");
		
		UEventShopProductBox_Item_C_CheckExchangeLimitNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimitNum != nullptr)
			*LimitNum = params.LimitNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetActiveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SetActiveIcon(bool IsItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetActiveIcon");
		
		UEventShopProductBox_Item_C_SetActiveIcon_Params params {};
		params.IsItem = IsItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.IsReadedNewMark
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::IsReadedNewMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.IsReadedNewMark");
		
		UEventShopProductBox_Item_C_IsReadedNewMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetIconNewMark
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::SetIconNewMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetIconNewMark");
		
		UEventShopProductBox_Item_C_SetIconNewMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetTAbiiltyClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       ClassType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::GetTAbiiltyClass(ESBClassType* ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetTAbiiltyClass");
		
		UEventShopProductBox_Item_C_GetTAbiiltyClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassType != nullptr)
			*ClassType = params.ClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.Set Token Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DiscountRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetTokenInfo(int32_t CurrencyType, int32_t TokenID, float DiscountRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.Set Token Info");
		
		UEventShopProductBox_Item_C_SetTokenInfo_Params params {};
		params.CurrencyType = CurrencyType;
		params.TokenID = TokenID;
		params.DiscountRate = DiscountRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetWorkSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTemporallyStorage*                        item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Storage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Ornament                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetWorkSpace(class USBTemporallyStorage* item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetWorkSpace");
		
		UEventShopProductBox_Item_C_SetWorkSpace_Params params {};
		params.item = item;
		params.Equip = Equip;
		params.Storage = Storage;
		params.Ornament = Ornament;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetStorageRemainNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Remain                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::GetStorageRemainNum(int32_t* Remain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetStorageRemainNum");
		
		UEventShopProductBox_Item_C_GetStorageRemainNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Remain != nullptr)
			*Remain = params.Remain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetAmountNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Have                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Remain                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::GetAmountNum(bool Have, int32_t* Remain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetAmountNum");
		
		UEventShopProductBox_Item_C_GetAmountNum_Params params {};
		params.Have = Have;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Remain != nullptr)
			*Remain = params.Remain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetPurchaseNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Purchase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SetPurchaseNum(int32_t Purchase, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetPurchaseNum");
		
		UEventShopProductBox_Item_C_SetPurchaseNum_Params params {};
		params.Purchase = Purchase;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected Remake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SetBtnSelectedRemake(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected Remake");
		
		UEventShopProductBox_Item_C_SetBtnSelectedRemake_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SetBtnSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected");
		
		UEventShopProductBox_Item_C_SetBtnSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56");
		
		UEventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A");
		
		UEventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetResetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetResetType(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetResetType");
		
		UEventShopProductBox_Item_C_SetResetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetStockNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Stock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetStockNum(int32_t Stock, int32_t Limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetStockNum");
		
		UEventShopProductBox_Item_C_SetStockNum_Params params {};
		params.Stock = Stock;
		params.Limit = Limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::CheckItemType(int32_t ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckItemType");
		
		UEventShopProductBox_Item_C_CheckItemType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemSetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::GetItemId(int32_t ItemSetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetItemId");
		
		UEventShopProductBox_Item_C_GetItemId_Params params {};
		params.ItemSetId = ItemSetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductIcon
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::SetProductIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductIcon");
		
		UEventShopProductBox_Item_C_SetProductIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetExchangePeriod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetExchangePeriod(const struct FDateTime& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetExchangePeriod");
		
		UEventShopProductBox_Item_C_SetExchangePeriod_Params params {};
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UEventShopProductBox_Item_C_BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UEventShopProductBox_Item_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UEventShopProductBox_Item_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberPlus
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::NumberPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberPlus");
		
		UEventShopProductBox_Item_C_NumberPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatPlus
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::StartRepeatPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatPlus");
		
		UEventShopProductBox_Item_C_StartRepeatPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.ClearHandle
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::ClearHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.ClearHandle");
		
		UEventShopProductBox_Item_C_ClearHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UEventShopProductBox_Item_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		UEventShopProductBox_Item_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberMinus
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::NumberMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberMinus");
		
		UEventShopProductBox_Item_C_NumberMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatMinus
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::StartRepeatMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatMinus");
		
		UEventShopProductBox_Item_C_StartRepeatMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBEventShopProduct                         ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              DiscountRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDiscount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBTemporallyStorage*                        item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Storage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBTemporallyStorage*                        Ornament                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetProductData(const struct FSBEventShopProduct& ProductData, float DiscountRate, bool IsDiscount, class USBTemporallyStorage* item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductData");
		
		UEventShopProductBox_Item_C_SetProductData_Params params {};
		params.ProductData = ProductData;
		params.DiscountRate = DiscountRate;
		params.IsDiscount = IsDiscount;
		params.item = item;
		params.Equip = Equip;
		params.Storage = Storage;
		params.Ornament = Ornament;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.UpdateButton
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.UpdateButton");
		
		UEventShopProductBox_Item_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetSelectNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::SetSelectNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetSelectNum");
		
		UEventShopProductBox_Item_C_SetSelectNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopProductBox_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.Construct");
		
		UEventShopProductBox_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.LoadTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::LoadTexture(int32_t CurrencyType, int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.LoadTexture");
		
		UEventShopProductBox_Item_C_LoadTexture_Params params {};
		params.CurrencyType = CurrencyType;
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetTrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::SetTrying(bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetTrying");
		
		UEventShopProductBox_Item_C_SetTrying_Params params {};
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.ExecuteUbergraph_EventShopProductBox_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::ExecuteUbergraph_EventShopProductBox_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.ExecuteUbergraph_EventShopProductBox_Item");
		
		UEventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSubRemake__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventShopProductBox_Item_C*                 item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnSubRemake__DelegateSignature(class UEventShopProductBox_Item_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSubRemake__DelegateSignature");
		
		UEventShopProductBox_Item_C_OnSubRemake__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAddRemake__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventShopProductBox_Item_C*                 item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnAddRemake__DelegateSignature(class UEventShopProductBox_Item_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAddRemake__DelegateSignature");
		
		UEventShopProductBox_Item_C_OnAddRemake__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSub__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnSub__DelegateSignature(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSub__DelegateSignature");
		
		UEventShopProductBox_Item_C_OnSub__DelegateSignature_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAdd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Item_C::OnAdd__DelegateSignature(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAdd__DelegateSignature");
		
		UEventShopProductBox_Item_C_OnAdd__DelegateSignature_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventShopProductBox_Item_C*                 item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOnNumberInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopProductBox_Item_C::OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* item, bool bOnNumberInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnBtnSelected__DelegateSignature");
		
		UEventShopProductBox_Item_C_OnBtnSelected__DelegateSignature_Params params {};
		params.item = item;
		params.bOnNumberInput = bOnNumberInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopProductBox_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopProductBox_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopProductBox_Item.EventShopProductBox_Item_C");
		return ptr;
	}

}


