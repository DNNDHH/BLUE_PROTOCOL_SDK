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
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.IsHaveCutomPartsById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCheckList_C::IsHaveCutomPartsById(int32_t ID, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.IsHaveCutomPartsById");
		
		UEventShopCheckList_C_IsHaveCutomPartsById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetItemNameByOther
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetItemNameByOther(ESBRewardItemType Type, int32_t ID, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetItemNameByOther");
		
		UEventShopCheckList_C_GetItemNameByOther_Params params {};
		params.Type = Type;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetTokenMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Limit                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetTokenMax(int32_t TokenID, int32_t* Limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetTokenMax");
		
		UEventShopCheckList_C_GetTokenMax_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Limit != nullptr)
			*Limit = params.Limit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CheckOther2_AlreadyHave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isOver                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCheckList_C::CheckOther2_AlreadyHave(int32_t ItemId, ESBRewardItemType RewardItemType, bool* isOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CheckOther2_AlreadyHave");
		
		UEventShopCheckList_C_CheckOther2_AlreadyHave_Params params {};
		params.ItemId = ItemId;
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOver != nullptr)
			*isOver = params.isOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.SetDisabledExchangeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCheckList_C::SetDisabledExchangeButton(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.SetDisabledExchangeButton");
		
		UEventShopCheckList_C_SetDisabledExchangeButton_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetLiquidMemoryNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetLiquidMemoryNum(int32_t ID, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetLiquidMemoryNum");
		
		UEventShopCheckList_C_GetLiquidMemoryNum_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetItemOtherType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EventShopCheckList_ItemType                        CheckListOtherType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetItemOtherType(ESBRewardItemType RewardItemType, bool* IsOk, EventShopCheckList_ItemType* CheckListOtherType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetItemOtherType");
		
		UEventShopCheckList_C_GetItemOtherType_Params params {};
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
		if (CheckListOtherType != nullptr)
			*CheckListOtherType = params.CheckListOtherType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetLimitItemOther
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetLimitItemOther(ESBRewardItemType RewardItemType, int32_t ItemId, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetLimitItemOther");
		
		UEventShopCheckList_C_GetLimitItemOther_Params params {};
		params.RewardItemType = RewardItemType;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetStock_ItemOther
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::GetStock_ItemOther(ESBRewardItemType RewardItemType, int32_t ItemId, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetStock_ItemOther");
		
		UEventShopCheckList_C_GetStock_ItemOther_Params params {};
		params.RewardItemType = RewardItemType;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.GetCheckListItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EventShopCheckList_DestType                        DestType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCheckList_C::GetCheckListItemType(ESBRewardItemType RewardItemType, EventShopCheckList_DestType DestType, bool* IsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.GetCheckListItemType");
		
		UEventShopCheckList_C_GetCheckListItemType_Params params {};
		params.RewardItemType = RewardItemType;
		params.DestType = DestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CheckDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EventShopCheckList_ItemType                        NewParam1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::CheckDestination(ESBRewardItemType Type, EventShopCheckList_ItemType* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CheckDestination");
		
		UEventShopCheckList_C_CheckDestination_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Create Item List Ornament
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemListOrnament()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Create Item List Ornament");
		
		UEventShopCheckList_C_CreateItemListOrnament_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Other
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemList_Other()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Other");
		
		UEventShopCheckList_C_CreateItemList_Other_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_E
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemListBag_E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_E");
		
		UEventShopCheckList_C_CreateItemListBag_E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_I
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemListBag_I()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_I");
		
		UEventShopCheckList_C_CreateItemListBag_I_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I_Craft
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemList_Storage_I_Craft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I_Craft");
		
		UEventShopCheckList_C_CreateItemList_Storage_I_Craft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_E
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemList_Storage_E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_E");
		
		UEventShopCheckList_C_CreateItemList_Storage_E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemList_Storage_I()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I");
		
		UEventShopCheckList_C_CreateItemList_Storage_I_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateIconList
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateIconList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateIconList");
		
		UEventShopCheckList_C_CreateIconList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Initialize");
		
		UEventShopCheckList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Event
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::CreateItemList_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Event");
		
		UEventShopCheckList_C_CreateItemList_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Construct");
		
		UEventShopCheckList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UEventShopCheckList_C_BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UEventShopCheckList_C_BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.Destruct");
		
		UEventShopCheckList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.OnEsc
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::OnEsc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.OnEsc");
		
		UEventShopCheckList_C_OnEsc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UEventShopCheckList_C_BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1");
		
		UEventShopCheckList_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UEventShopCheckList_C_BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.ExecuteUbergraph_EventShopCheckList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_C::ExecuteUbergraph_EventShopCheckList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.ExecuteUbergraph_EventShopCheckList");
		
		UEventShopCheckList_C_ExecuteUbergraph_EventShopCheckList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.OnClickedCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::OnClickedCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.OnClickedCancel__DelegateSignature");
		
		UEventShopCheckList_C_OnClickedCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList.EventShopCheckList_C.OnClickedExchange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_C::OnClickedExchange__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList.EventShopCheckList_C.OnClickedExchange__DelegateSignature");
		
		UEventShopCheckList_C_OnClickedExchange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCheckList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCheckList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCheckList.EventShopCheckList_C");
		return ptr;
	}

}


