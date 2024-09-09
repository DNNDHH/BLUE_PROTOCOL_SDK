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
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.GetBGVisible
	 * 		Flags  -> ()
	 */
	bool UTextWindowSkit_C::GetBGVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.GetBGVisible");
		
		UTextWindowSkit_C_GetBGVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.SetBGOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowSkit_C::SetBGOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.SetBGOpacity");
		
		UTextWindowSkit_C_SetBGOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.IsShow
	 * 		Flags  -> ()
	 */
	bool UTextWindowSkit_C::IsShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.IsShow");
		
		UTextWindowSkit_C_IsShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowSkit_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.OnAnimationFinished");
		
		UTextWindowSkit_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.Destruct");
		
		UTextWindowSkit_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.CustomEvent_1");
		
		UTextWindowSkit_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.CustomEvent_2");
		
		UTextWindowSkit_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.CustomEvent_3
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.CustomEvent_3");
		
		UTextWindowSkit_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.OnInputKey
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::OnInputKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.OnInputKey");
		
		UTextWindowSkit_C_OnInputKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.CustomEvent_4
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.CustomEvent_4");
		
		UTextWindowSkit_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.Construct
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.Construct");
		
		UTextWindowSkit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTextWindowSkit_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.SetText");
		
		UTextWindowSkit_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.Hide
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.Hide");
		
		UTextWindowSkit_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.Show
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.Show");
		
		UTextWindowSkit_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.SetSpeaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InProfileId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowSkit_C::SetSpeaker(const class FName& InProfileId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.SetSpeaker");
		
		UTextWindowSkit_C_SetSpeaker_Params params {};
		params.InProfileId = InProfileId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.SetNextMarkVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTextWindowSkit_C::SetNextMarkVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.SetNextMarkVisibility");
		
		UTextWindowSkit_C_SetNextMarkVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.HideWithoutBG
	 * 		Flags  -> ()
	 */
	void UTextWindowSkit_C::HideWithoutBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.HideWithoutBG");
		
		UTextWindowSkit_C_HideWithoutBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.SetBGVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTextWindowSkit_C::SetBGVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.SetBGVisible");
		
		UTextWindowSkit_C_SetBGVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowSkit.TextWindowSkit_C.ExecuteUbergraph_TextWindowSkit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowSkit_C::ExecuteUbergraph_TextWindowSkit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowSkit.TextWindowSkit_C.ExecuteUbergraph_TextWindowSkit");
		
		UTextWindowSkit_C_ExecuteUbergraph_TextWindowSkit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextWindowSkit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextWindowSkit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextWindowSkit.TextWindowSkit_C");
		return ptr;
	}

}


