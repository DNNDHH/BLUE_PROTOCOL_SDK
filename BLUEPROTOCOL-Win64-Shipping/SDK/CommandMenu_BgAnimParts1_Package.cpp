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
	 * 		Name   -> Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.StopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_BgAnimParts1_C::StopAnim(class UWidgetAnimation* InAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.StopAnim");
		
		UCommandMenu_BgAnimParts1_C_StopAnim_Params params {};
		params.InAnim = InAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenu_BgAnimParts1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.Construct");
		
		UCommandMenu_BgAnimParts1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.SetPat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_BgAnimParts1_C::SetPat(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.SetPat");
		
		UCommandMenu_BgAnimParts1_C_SetPat_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UCommandMenu_BgAnimParts1_C::WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_1");
		
		UCommandMenu_BgAnimParts1_C_WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.ExecuteUbergraph_CommandMenu_BgAnimParts1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_BgAnimParts1_C::ExecuteUbergraph_CommandMenu_BgAnimParts1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.ExecuteUbergraph_CommandMenu_BgAnimParts1");
		
		UCommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_BgAnimParts1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_BgAnimParts1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C");
		return ptr;
	}

}


