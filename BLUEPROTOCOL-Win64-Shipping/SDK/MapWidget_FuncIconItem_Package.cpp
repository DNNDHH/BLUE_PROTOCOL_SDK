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
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconTextureByFuncIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapFuncIconType                                   InFuncIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconItem_C::SetIconTextureByFuncIconType(EMapFuncIconType InFuncIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconTextureByFuncIconType");
		
		UMapWidget_FuncIconItem_C_SetIconTextureByFuncIconType_Params params {};
		params.InFuncIconType = InFuncIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconItem_C::SetTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetTextId");
		
		UMapWidget_FuncIconItem_C_SetTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_FuncIconItem_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetText");
		
		UMapWidget_FuncIconItem_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_FuncIconItem_C::SetIconEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconEnable");
		
		UMapWidget_FuncIconItem_C_SetIconEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_FuncIconItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_FuncIconItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.ExecuteUbergraph_MapWidget_FuncIconItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconItem_C::ExecuteUbergraph_MapWidget_FuncIconItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.ExecuteUbergraph_MapWidget_FuncIconItem");
		
		UMapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_FuncIconItem_C*                   InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconItem_C::OnPressed__DelegateSignature(class UMapWidget_FuncIconItem_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.OnPressed__DelegateSignature");
		
		UMapWidget_FuncIconItem_C_OnPressed__DelegateSignature_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_FuncIconItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_FuncIconItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_FuncIconItem.MapWidget_FuncIconItem_C");
		return ptr;
	}

}


