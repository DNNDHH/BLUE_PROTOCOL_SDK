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
	 * 		Name   -> Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleText");
		
		UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextId");
		
		UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleTextTable(class USBTextTableAsset* InTextTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextTable");
		
		UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable_Params params {};
		params.InTextTable = InTextTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CommonCostumeTypeHeading_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.PreConstruct");
		
		UMyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CommonCostumeTypeHeading_C::ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading");
		
		UMyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_CommonCostumeTypeHeading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_CommonCostumeTypeHeading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C");
		return ptr;
	}

}


