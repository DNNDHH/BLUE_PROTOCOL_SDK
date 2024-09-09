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
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetFusionItemData
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetFusionItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetFusionItemData");
		
		UCommonEquipmentBasicItemStatusParts_C_SetFusionItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetRecepiId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetRecepiId(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetRecepiId");
		
		UCommonEquipmentBasicItemStatusParts_C_SetRecepiId_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetEventTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetEventTermId(const class FString& EventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetEventTermId");
		
		UCommonEquipmentBasicItemStatusParts_C_SetEventTermId_Params params {};
		params.EventTermId = EventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetCraftNumVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CraftNumMin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CraftNumMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetCraftNumVisible(bool Visibility, int32_t CraftNumMin, int32_t CraftNumMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetCraftNumVisible");
		
		UCommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible_Params params {};
		params.Visibility = Visibility;
		params.CraftNumMin = CraftNumMin;
		params.CraftNumMax = CraftNumMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetShowRateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetShowRateButton(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetShowRateButton");
		
		UCommonEquipmentBasicItemStatusParts_C_SetShowRateButton_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Set ItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             MasterItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::SetItemData(const struct FItemMasterData& MasterItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Set ItemData");
		
		UCommonEquipmentBasicItemStatusParts_C_SetItemData_Params params {};
		params.MasterItem = MasterItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicItemStatusParts_C::BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UCommonEquipmentBasicItemStatusParts_C_BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicItemStatusParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentBasicItemStatusParts_C::ExecuteUbergraph_CommonEquipmentBasicItemStatusParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicItemStatusParts");
		
		UCommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Request_ShowRate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentBasicItemStatusParts_C::Request_ShowRate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Request_ShowRate__DelegateSignature");
		
		UCommonEquipmentBasicItemStatusParts_C_Request_ShowRate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentBasicItemStatusParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentBasicItemStatusParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C");
		return ptr;
	}

}


