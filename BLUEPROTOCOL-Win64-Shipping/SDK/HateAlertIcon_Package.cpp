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
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.RequestSetIconColorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::RequestSetIconColorName(const class FString& ColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.RequestSetIconColorName");
		
		UHateAlertIcon_C_RequestSetIconColorName_Params params {};
		params.ColorName = ColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.SetAnimationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimationSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::SetAnimationSpeed(float AnimationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.SetAnimationSpeed");
		
		UHateAlertIcon_C_SetAnimationSpeed_Params params {};
		params.AnimationSpeed = AnimationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.PlayAnimBlink
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::PlayAnimBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.PlayAnimBlink");
		
		UHateAlertIcon_C_PlayAnimBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.PlayAnimOut");
		
		UHateAlertIcon_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.PlayAnimIn");
		
		UHateAlertIcon_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.SetIconColorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::SetIconColorName(const class FString& ColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.SetIconColorName");
		
		UHateAlertIcon_C_SetIconColorName_Params params {};
		params.ColorName = ColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.SetIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::SetIconColor(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.SetIconColor");
		
		UHateAlertIcon_C_SetIconColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.Hide
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.Hide");
		
		UHateAlertIcon_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.Show
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.Show");
		
		UHateAlertIcon_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.Construct");
		
		UHateAlertIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.OnAnimationFinished");
		
		UHateAlertIcon_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHateAlertIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.PreConstruct");
		
		UHateAlertIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.RequestShow
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::RequestShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.RequestShow");
		
		UHateAlertIcon_C_RequestShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.RequestHide
	 * 		Flags  -> ()
	 */
	void UHateAlertIcon_C::RequestHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.RequestHide");
		
		UHateAlertIcon_C_RequestHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.RequestSetOwnerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::RequestSetOwnerCharacter(class ASBCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.RequestSetOwnerCharacter");
		
		UHateAlertIcon_C_RequestSetOwnerCharacter_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.RequestSetAnimationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimationSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::RequestSetAnimationSpeed(float AnimationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.RequestSetAnimationSpeed");
		
		UHateAlertIcon_C_RequestSetAnimationSpeed_Params params {};
		params.AnimationSpeed = AnimationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlertIcon.HateAlertIcon_C.ExecuteUbergraph_HateAlertIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlertIcon_C::ExecuteUbergraph_HateAlertIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlertIcon.HateAlertIcon_C.ExecuteUbergraph_HateAlertIcon");
		
		UHateAlertIcon_C_ExecuteUbergraph_HateAlertIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHateAlertIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHateAlertIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HateAlertIcon.HateAlertIcon_C");
		return ptr;
	}

}


