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
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapFuncIconType                                   InFuncIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_FuncIconList_C::SetFuncIconVisibility(EMapFuncIconType InFuncIconType, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconVisibility");
		
		UMapWidget_FuncIconList_C_SetFuncIconVisibility_Params params {};
		params.InFuncIconType = InFuncIconType;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapFuncIconType                                   InFuncIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_FuncIconList_C::SetFuncIconEnable(EMapFuncIconType InFuncIconType, bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconEnable");
		
		UMapWidget_FuncIconList_C_SetFuncIconEnable_Params params {};
		params.InFuncIconType = InFuncIconType;
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_FuncIconList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Construct");
		
		UMapWidget_FuncIconList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.FuncIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_FuncIconItem_C*                   InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconList_C::FuncIconPressed(class UMapWidget_FuncIconItem_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.FuncIconPressed");
		
		UMapWidget_FuncIconList_C_FuncIconPressed_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnIconPressedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_FuncIconItem_C*                   InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconList_C::OnIconPressedEvent(class UMapWidget_FuncIconItem_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnIconPressedEvent");
		
		UMapWidget_FuncIconList_C_OnIconPressedEvent_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_FuncIconList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Destruct");
		
		UMapWidget_FuncIconList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.ExecuteUbergraph_MapWidget_FuncIconList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconList_C::ExecuteUbergraph_MapWidget_FuncIconList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.ExecuteUbergraph_MapWidget_FuncIconList");
		
		UMapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnFuncIconSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapFuncIconType                                   InSelectedFuncIconType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_FuncIconList_C::OnFuncIconSelected__DelegateSignature(EMapFuncIconType InSelectedFuncIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnFuncIconSelected__DelegateSignature");
		
		UMapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature_Params params {};
		params.InSelectedFuncIconType = InSelectedFuncIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_FuncIconList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_FuncIconList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_FuncIconList.MapWidget_FuncIconList_C");
		return ptr;
	}

}


