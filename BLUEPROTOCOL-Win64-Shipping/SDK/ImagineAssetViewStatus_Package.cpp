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
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeViewWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAssetViewStatus_C::SetImagineTypeViewWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeViewWidth");
		
		UImagineAssetViewStatus_C_SetImagineTypeViewWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetEnableFlatStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableFlatStyle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAssetViewStatus_C::SetEnableFlatStyle(bool bEnableFlatStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetEnableFlatStyle");
		
		UImagineAssetViewStatus_C_SetEnableFlatStyle_Params params {};
		params.bEnableFlatStyle = bEnableFlatStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupImagineAbilities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetViewStatus_C::SetupImagineAbilities(const struct FOwnItemInfo& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupImagineAbilities");
		
		UImagineAssetViewStatus_C_SetupImagineAbilities_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAssetViewStatus_C::SetDiffVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffVisible");
		
		UImagineAssetViewStatus_C_SetDiffVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeVisibility
	 * 		Flags  -> ()
	 */
	void UImagineAssetViewStatus_C::SetImagineTypeVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeVisibility");
		
		UImagineAssetViewStatus_C_SetImagineTypeVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.UpdateDiffParamImagine
	 * 		Flags  -> ()
	 */
	void UImagineAssetViewStatus_C::UpdateDiffParamImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.UpdateDiffParamImagine");
		
		UImagineAssetViewStatus_C_UpdateDiffParamImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InDiffBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetViewStatus_C::SetDiffBase(const struct FOwnItemInfo& InDiffBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffBase");
		
		UImagineAssetViewStatus_C_SetDiffBase_Params params {};
		params.InDiffBase = InDiffBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetAbilityInfoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VisibleAbilityInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAssetViewStatus_C::SetAbilityInfoVisibility(bool VisibleAbilityInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetAbilityInfoVisibility");
		
		UImagineAssetViewStatus_C_SetAbilityInfoVisibility_Params params {};
		params.VisibleAbilityInfo = VisibleAbilityInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetUpName
	 * 		Flags  -> ()
	 */
	void UImagineAssetViewStatus_C::SetUpName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetUpName");
		
		UImagineAssetViewStatus_C_SetUpName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupParameterImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InItemInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetViewStatus_C::SetupParameterImagine(const struct FOwnItemInfo& InItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupParameterImagine");
		
		UImagineAssetViewStatus_C_SetupParameterImagine_Params params {};
		params.InItemInfo = InItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetViewStatus_C::SetInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetInfo");
		
		UImagineAssetViewStatus_C_SetInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineAssetViewStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineAssetViewStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineAssetViewStatus.ImagineAssetViewStatus_C");
		return ptr;
	}

}


