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
	 * 		Name   -> Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.GetAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       OutAttribute                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AttributeDurabilityListItem_C::GetAttribute(ESBAttribute* OutAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.GetAttribute");
		
		UMyCharaMenu_AttributeDurabilityListItem_C_GetAttribute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttribute != nullptr)
			*OutAttribute = params.OutAttribute;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeDurabilityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeDurabilityValue(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeDurabilityValue");
		
		UMyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeNameByTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeNameByTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeNameByTextId");
		
		UMyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeIconTexture
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeIconTexture");
		
		UMyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       InAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttribute(ESBAttribute InAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttribute");
		
		UMyCharaMenu_AttributeDurabilityListItem_C_SetAttribute_Params params {};
		params.InAttribute = InAttribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_AttributeDurabilityListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_AttributeDurabilityListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C");
		return ptr;
	}

}


