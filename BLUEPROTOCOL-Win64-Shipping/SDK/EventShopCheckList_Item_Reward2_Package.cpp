﻿/**
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
	 * 		Name   -> Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetIconOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCheckList_Item_Reward2_C::SetIconOver(bool isOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetIconOver");
		
		UEventShopCheckList_Item_Reward2_C_SetIconOver_Params params {};
		params.isOver = isOver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumExchange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_Item_Reward2_C::SetItemInfo(const class FString& ItemName, int32_t NumExchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetItemInfo");
		
		UEventShopCheckList_Item_Reward2_C_SetItemInfo_Params params {};
		params.ItemName = ItemName;
		params.NumExchange = NumExchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCheckList_Item_Reward2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCheckList_Item_Reward2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C");
		return ptr;
	}

}


