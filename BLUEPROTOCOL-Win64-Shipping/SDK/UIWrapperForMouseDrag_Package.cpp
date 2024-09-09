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
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonUp_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUIWrapperForMouseDrag_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonUp_1");
		
		UUIWrapperForMouseDrag_C_OnMouseButtonUp_1_Params params {};
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
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUIWrapperForMouseDrag_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonDown_1");
		
		UUIWrapperForMouseDrag_C_OnMouseButtonDown_1_Params params {};
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
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.GetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MousePosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIWrapperForMouseDrag_C::GetMousePosition(struct FVector2D* MousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.GetMousePosition");
		
		UUIWrapperForMouseDrag_C_GetMousePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MousePosition != nullptr)
			*MousePosition = params.MousePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIWrapperForMouseDrag_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.Tick");
		
		UUIWrapperForMouseDrag_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.ExecuteUbergraph_UIWrapperForMouseDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIWrapperForMouseDrag_C::ExecuteUbergraph_UIWrapperForMouseDrag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.ExecuteUbergraph_UIWrapperForMouseDrag");
		
		UUIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonUp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUIWrapperForMouseDrag_C::EventOnButtonUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonUp__DelegateSignature");
		
		UUIWrapperForMouseDrag_C_EventOnButtonUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonDown__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUIWrapperForMouseDrag_C::EventOnButtonDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonDown__DelegateSignature");
		
		UUIWrapperForMouseDrag_C_EventOnButtonDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIWrapperForMouseDrag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIWrapperForMouseDrag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIWrapperForMouseDrag.UIWrapperForMouseDrag_C");
		return ptr;
	}

}


