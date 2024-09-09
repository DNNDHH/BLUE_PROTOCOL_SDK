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
	 * 		Name   -> Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBDroppingTextOption                              Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DroppingTextManager_C::ShowDroppingText(class UObject* WorldContextObject, const class FText& Message, ESBDroppingTextOption Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingText");
		
		UBP_DroppingTextManager_C_ShowDroppingText_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Message = Message;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBDroppingTextOption                              Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsBonusAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRare                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DroppingTextManager_C::ShowDroppingTextItem(class UObject* WorldContextObject, EItemType ItemType, int32_t ItemId, int32_t Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd, bool bRare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItem");
		
		UBP_DroppingTextManager_C_ShowDroppingTextItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ItemType = ItemType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		params.Option = Option;
		params.bUnidentified = bUnidentified;
		params.bIsBonusAdd = bIsBonusAdd;
		params.bRare = bRare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ItemName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Amount                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBDroppingTextOption                              Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DroppingTextManager_C::ShowDroppingTextItemName(class UObject* WorldContextObject, const class FText& ItemName, int32_t Amount, ESBDroppingTextOption Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItemName");
		
		UBP_DroppingTextManager_C_ShowDroppingTextItemName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ItemName = ItemName;
		params.Amount = Amount;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppingTextManager.BP_DroppingTextManager_C.ExecuteUbergraph_BP_DroppingTextManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DroppingTextManager_C::ExecuteUbergraph_BP_DroppingTextManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppingTextManager.BP_DroppingTextManager_C.ExecuteUbergraph_BP_DroppingTextManager");
		
		UBP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DroppingTextManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DroppingTextManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppingTextManager.BP_DroppingTextManager_C");
		return ptr;
	}

}


