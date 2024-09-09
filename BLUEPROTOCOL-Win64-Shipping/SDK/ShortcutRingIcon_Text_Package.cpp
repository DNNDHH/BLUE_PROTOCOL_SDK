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
	 * 		Name   -> Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnExecuteError
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Text_C::OnExecuteError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnExecuteError");
		
		UShortcutRingIcon_Text_C_OnExecuteError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.PlayAnimPressed
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Text_C::PlayAnimPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.PlayAnimPressed");
		
		UShortcutRingIcon_Text_C_PlayAnimPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Text_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseEnter");
		
		UShortcutRingIcon_Text_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Text_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseLeave");
		
		UShortcutRingIcon_Text_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.ExecuteUbergraph_ShortcutRingIcon_Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Text_C::ExecuteUbergraph_ShortcutRingIcon_Text(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.ExecuteUbergraph_ShortcutRingIcon_Text");
		
		UShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRingIcon_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRingIcon_Text_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutRingIcon_Text.ShortcutRingIcon_Text_C");
		return ptr;
	}

}


