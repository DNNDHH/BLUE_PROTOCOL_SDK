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
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnExecuteError
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Warp_C::OnExecuteError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnExecuteError");
		
		UShortcutRingIcon_Warp_C_OnExecuteError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnSetEnableToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Warp_C::OnSetEnableToolTip(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnSetEnableToolTip");
		
		UShortcutRingIcon_Warp_C_OnSetEnableToolTip_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.GetToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UShortcutRingIcon_Warp_C::GetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.GetToolTip");
		
		UShortcutRingIcon_Warp_C_GetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.PlayAnimPressed
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Warp_C::PlayAnimPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.PlayAnimPressed");
		
		UShortcutRingIcon_Warp_C_PlayAnimPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Warp_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseEnter");
		
		UShortcutRingIcon_Warp_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Warp_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseLeave");
		
		UShortcutRingIcon_Warp_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.ExecuteUbergraph_ShortcutRingIcon_Warp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Warp_C::ExecuteUbergraph_ShortcutRingIcon_Warp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.ExecuteUbergraph_ShortcutRingIcon_Warp");
		
		UShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRingIcon_Warp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRingIcon_Warp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C");
		return ptr;
	}

}


