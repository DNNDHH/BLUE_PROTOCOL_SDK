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
	 * 		Name   -> Function SkillInfo.SkillInfo_C.UpdateChangeText
	 * 		Flags  -> ()
	 */
	void USkillInfo_C::UpdateChangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.UpdateChangeText");
		
		USkillInfo_C_UpdateChangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.IsPlayAnimation
	 * 		Flags  -> ()
	 */
	bool USkillInfo_C::IsPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.IsPlayAnimation");
		
		USkillInfo_C_IsPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility USkillInfo_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.GetVisibility_1");
		
		USkillInfo_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::SetEditMode(bool bIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.SetEditMode");
		
		USkillInfo_C_SetEditMode_Params params {};
		params.bIsEdit = bIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.OnChangeShowAlwaysHUD_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::OnChangeShowAlwaysHUD_event(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.OnChangeShowAlwaysHUD_event");
		
		USkillInfo_C_OnChangeShowAlwaysHUD_event_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.Destruct");
		
		USkillInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.OnInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::OnInAnimation(bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.OnInAnimation");
		
		USkillInfo_C_OnInAnimation_Params params {};
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.Construct");
		
		USkillInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.AnimationInOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::AnimationInOut(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.AnimationInOut");
		
		USkillInfo_C_AnimationInOut_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void USkillInfo_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		USkillInfo_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::CustomEvent_1(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.CustomEvent_1");
		
		USkillInfo_C_CustomEvent_1_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.OnChangePalette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerSkillPaletteSide                          PaletteSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfo_C::OnChangePalette(ESBPlayerSkillPaletteSide PaletteSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.OnChangePalette");
		
		USkillInfo_C_OnChangePalette_Params params {};
		params.PaletteSide = PaletteSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.OnChangeBackPaletteVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::OnChangeBackPaletteVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.OnChangeBackPaletteVisible");
		
		USkillInfo_C_OnChangeBackPaletteVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.PreConstruct");
		
		USkillInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.CustomEvent_4
	 * 		Flags  -> ()
	 */
	void USkillInfo_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.CustomEvent_4");
		
		USkillInfo_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.OnPadSkinChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfo_C::OnPadSkinChange(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.OnPadSkinChange");
		
		USkillInfo_C_OnPadSkinChange_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfo.SkillInfo_C.ExecuteUbergraph_SkillInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfo_C::ExecuteUbergraph_SkillInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfo.SkillInfo_C.ExecuteUbergraph_SkillInfo");
		
		USkillInfo_C_ExecuteUbergraph_SkillInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfo.SkillInfo_C");
		return ptr;
	}

}


