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
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.IsPlayAnimation
	 * 		Flags  -> ()
	 */
	bool UKeyGuideHUD_C::IsPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.IsPlayAnimation");
		
		UKeyGuideHUD_C_IsPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideNaviVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::SetKeyGuideNaviVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideNaviVisibility");
		
		UKeyGuideHUD_C_SetKeyGuideNaviVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.UpdateKeyGuide
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::UpdateKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.UpdateKeyGuide");
		
		UKeyGuideHUD_C_UpdateKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetClassKeyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                                                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSBPlayerClassKeyConfigData UKeyGuideHUD_C::GetClassKeyConfig(class ASBPlayerCharacter* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetClassKeyConfig");
		
		UKeyGuideHUD_C_GetClassKeyConfig_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetGamepadPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                                                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::GetGamepadPressed(class ASBPlayerCharacter* , bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetGamepadPressed");
		
		UKeyGuideHUD_C_GetGamepadPressed_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetKBPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                                                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::GetKBPressed(class ASBPlayerCharacter* , bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetKBPressed");
		
		UKeyGuideHUD_C_GetKBPressed_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetPlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASBPlayerCharacter*                          AsSBPlayerCharacter                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::GetPlayerCharacter(bool* Result, class ASBPlayerCharacter** AsSBPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetPlayerCharacter");
		
		UKeyGuideHUD_C_GetPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AsSBPlayerCharacter != nullptr)
			*AsSBPlayerCharacter = params.AsSBPlayerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.Is Key Input BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::IsKeyInputBP(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.Is Key Input BP");
		
		UKeyGuideHUD_C_IsKeyInputBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               SkillActionPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::SetKeyGuideTextVisible(ESkillActionPosition SkillActionPosition, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideTextVisible");
		
		UKeyGuideHUD_C_SetKeyGuideTextVisible_Params params {};
		params.SkillActionPosition = SkillActionPosition;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.Reset
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.Reset");
		
		UKeyGuideHUD_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.Is Key Guide Animation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::IsKeyGuideAnimation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.Is Key Guide Animation");
		
		UKeyGuideHUD_C_IsKeyGuideAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyGuideType                                      InKeyGuideType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::ChangeKeyGuide2(EKeyGuideType InKeyGuideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2");
		
		UKeyGuideHUD_C_ChangeKeyGuide2_Params params {};
		params.InKeyGuideType = InKeyGuideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyGuideType                                      InKeyGuideType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::ChangeKeyGuide(EKeyGuideType InKeyGuideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide");
		
		UKeyGuideHUD_C_ChangeKeyGuide_Params params {};
		params.InKeyGuideType = InKeyGuideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuide2Size
	 * 		Flags  -> ()
	 */
	struct FVector2D UKeyGuideHUD_C::GetKeyGuide2Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuide2Size");
		
		UKeyGuideHUD_C_GetKeyGuide2Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuideSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UKeyGuideHUD_C::GetKeyGuideSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuideSize");
		
		UKeyGuideHUD_C_GetKeyGuideSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2Visibility
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::ChangeKeyGuide2Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2Visibility");
		
		UKeyGuideHUD_C_ChangeKeyGuide2Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuideVisibility
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::ChangeKeyGuideVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuideVisibility");
		
		UKeyGuideHUD_C_ChangeKeyGuideVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.Initialize
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.Initialize");
		
		UKeyGuideHUD_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.PreConstruct");
		
		UKeyGuideHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEdit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::SetEditMode(bool IsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.SetEditMode");
		
		UKeyGuideHUD_C_SetEditMode_Params params {};
		params.IsEdit = IsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature(bool IsMount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature");
		
		UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature_Params params {};
		params.IsMount = IsMount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::CustomEvent_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.CustomEvent_1");
		
		UKeyGuideHUD_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.OnPlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::OnPlayAnim(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.OnPlayAnim");
		
		UKeyGuideHUD_C_OnPlayAnim_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.OnReset
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.OnReset");
		
		UKeyGuideHUD_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheerfulItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature");
		
		UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature_Params params {};
		params.IsCheerfulItem = IsCheerfulItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.OnAnimationFinished");
		
		UKeyGuideHUD_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature");
		
		UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature");
		
		UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuide2VisibilityEvent
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::RetryKeyGuide2VisibilityEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuide2VisibilityEvent");
		
		UKeyGuideHUD_C_RetryKeyGuide2VisibilityEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuideVisibilityEvent
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::RetryKeyGuideVisibilityEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuideVisibilityEvent");
		
		UKeyGuideHUD_C_RetryKeyGuideVisibilityEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UKeyGuideHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.Construct");
		
		UKeyGuideHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.UIVisibleSettingChangeEnvet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuideHUD_C::UIVisibleSettingChangeEnvet(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.UIVisibleSettingChangeEnvet");
		
		UKeyGuideHUD_C_UIVisibleSettingChangeEnvet_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuideHUD.KeyGuideHUD_C.ExecuteUbergraph_KeyGuideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuideHUD_C::ExecuteUbergraph_KeyGuideHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuideHUD.KeyGuideHUD_C.ExecuteUbergraph_KeyGuideHUD");
		
		UKeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuideHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuideHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuideHUD.KeyGuideHUD_C");
		return ptr;
	}

}


