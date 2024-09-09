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
	 * 		Name   -> Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetIconOver
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_Item_C::SetIconOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetIconOver");
		
		UEventShopCheckList_Item_C_SetIconOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Item.EventShopCheckList_Item_C.Initialize
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_Item_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item.EventShopCheckList_Item_C.Initialize");
		
		UEventShopCheckList_Item_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetStorage
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_Item_C::SetStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetStorage");
		
		UEventShopCheckList_Item_C_SetStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Item.EventShopCheckList_Item_C.GetCheckListType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EventShopCheckList_ItemType                        CheckListType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_Item_C::GetCheckListType(ESBRewardItemType RewardItemType, EventShopCheckList_ItemType* CheckListType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item.EventShopCheckList_Item_C.GetCheckListType");
		
		UEventShopCheckList_Item_C_GetCheckListType_Params params {};
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckListType != nullptr)
			*CheckListType = params.CheckListType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumExchange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumHave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_Item_C::SetItemInfo(ESBRewardItemType RewardItemType, const class FString& ItemName, int32_t NumExchange, int32_t NumHave, int32_t NumLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetItemInfo");
		
		UEventShopCheckList_Item_C_SetItemInfo_Params params {};
		params.RewardItemType = RewardItemType;
		params.ItemName = ItemName;
		params.NumExchange = NumExchange;
		params.NumHave = NumHave;
		params.NumLimit = NumLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCheckList_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCheckList_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCheckList_Item.EventShopCheckList_Item_C");
		return ptr;
	}

}


