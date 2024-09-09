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
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlaceGuideContent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.Construct");
		
		UPlaceGuideContent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.Show_ByText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InPlaceName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InSubName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bInAutoClose                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaceGuideContent_C::Show_ByText(const class FText& InPlaceName, const class FText& InSubName, bool bInAutoClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.Show_ByText");
		
		UPlaceGuideContent_C_Show_ByText_Params params {};
		params.InPlaceName = InPlaceName;
		params.InSubName = InSubName;
		params.bInAutoClose = bInAutoClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuideContent_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.OnAnimationFinished");
		
		UPlaceGuideContent_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.Hide
	 * 		Flags  -> ()
	 */
	void UPlaceGuideContent_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.Hide");
		
		UPlaceGuideContent_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.OnChangeUIVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaceGuideContent_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.OnChangeUIVisibleSetting");
		
		UPlaceGuideContent_C_OnChangeUIVisibleSetting_Params params {};
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
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlaceGuideContent_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.Destruct");
		
		UPlaceGuideContent_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.ExecuteUbergraph_PlaceGuideContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuideContent_C::ExecuteUbergraph_PlaceGuideContent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.ExecuteUbergraph_PlaceGuideContent");
		
		UPlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuideContent.PlaceGuideContent_C.OnPlayEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlaceGuideContent_C::OnPlayEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuideContent.PlaceGuideContent_C.OnPlayEnd__DelegateSignature");
		
		UPlaceGuideContent_C_OnPlayEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaceGuideContent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaceGuideContent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlaceGuideContent.PlaceGuideContent_C");
		return ptr;
	}

}


