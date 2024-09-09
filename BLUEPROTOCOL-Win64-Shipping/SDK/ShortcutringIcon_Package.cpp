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
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.Unhover
	 * 		Flags  -> ()
	 */
	void UShortcutringIcon_C::Unhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.Unhover");
		
		UShortcutringIcon_C_Unhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.Hover
	 * 		Flags  -> ()
	 */
	void UShortcutringIcon_C::Hover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.Hover");
		
		UShortcutringIcon_C_Hover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnUnbindIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBShortcutRingIconBase*                     InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnUnbindIcon(class USBShortcutRingIconBase* InIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnUnbindIcon");
		
		UShortcutringIcon_C_OnUnbindIcon_Params params {};
		params.InIcon = InIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnBindIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBShortcutRingIconBase*                     InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnBindIcon(class USBShortcutRingIconBase* InIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnBindIcon");
		
		UShortcutringIcon_C_OnBindIcon_Params params {};
		params.InIcon = InIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnCreateWarpIcon
	 * 		Flags  -> ()
	 */
	class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateWarpIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnCreateWarpIcon");
		
		UShortcutringIcon_C_OnCreateWarpIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnCreateCommandIcon
	 * 		Flags  -> ()
	 */
	class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateCommandIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnCreateCommandIcon");
		
		UShortcutringIcon_C_OnCreateCommandIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnCreateTextIcon
	 * 		Flags  -> ()
	 */
	class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateTextIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnCreateTextIcon");
		
		UShortcutringIcon_C_OnCreateTextIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnCreateBasicIcon
	 * 		Flags  -> ()
	 */
	class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateBasicIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnCreateBasicIcon");
		
		UShortcutringIcon_C_OnCreateBasicIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnCreateNoneIcon
	 * 		Flags  -> ()
	 */
	class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateNoneIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnCreateNoneIcon");
		
		UShortcutringIcon_C_OnCreateNoneIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.GetDragDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDragDropOperation*                          OutDragDropOperation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::GetDragDropOperation(class UDragDropOperation** OutDragDropOperation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.GetDragDropOperation");
		
		UShortcutringIcon_C_GetDragDropOperation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDragDropOperation != nullptr)
			*OutDragDropOperation = params.OutDragDropOperation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.SetDragDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDragDropOperation*                          InDradDropOperation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::SetDragDropOperation(class UDragDropOperation* InDradDropOperation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.SetDragDropOperation");
		
		UShortcutringIcon_C_SetDragDropOperation_Params params {};
		params.InDradDropOperation = InDradDropOperation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UShortcutringIcon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnMouseButtonDown");
		
		UShortcutringIcon_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutringIcon_C*                         Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnClickRight__DelegateSignature");
		
		UShortcutringIcon_C_OnClickRight__DelegateSignature_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutringIcon_C*                         Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnClick__DelegateSignature");
		
		UShortcutringIcon_C_OnClick__DelegateSignature_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnUnhover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutringIcon_C*                         Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnUnhover__DelegateSignature(class UShortcutringIcon_C* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnUnhover__DelegateSignature");
		
		UShortcutringIcon_C_OnUnhover__DelegateSignature_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutringIcon.ShortcutringIcon_C.OnHover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutringIcon_C*                         Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutringIcon_C::OnHover__DelegateSignature(class UShortcutringIcon_C* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutringIcon.ShortcutringIcon_C.OnHover__DelegateSignature");
		
		UShortcutringIcon_C_OnHover__DelegateSignature_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutringIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutringIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutringIcon.ShortcutringIcon_C");
		return ptr;
	}

}


