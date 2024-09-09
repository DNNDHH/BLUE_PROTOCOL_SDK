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
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfoByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAbilityInfoView_C::SetupAbilityInfoByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfoByOwnItemInfo");
		
		UImagineAbilityInfoView_C_SetupAbilityInfoByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ShowChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAbilityInfoView_C::ShowChange(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ShowChange");
		
		UImagineAbilityInfoView_C_ShowChange_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.GetAbilityPartsValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UImagineAbilityInfoView_C::GetAbilityPartsValueText(int32_t InValue, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.GetAbilityPartsValueText");
		
		UImagineAbilityInfoView_C_GetAbilityPartsValueText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAbilityEffectId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityInfoView_C::SetupAbilityInfo(int32_t InAbilityEffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfo");
		
		UImagineAbilityInfoView_C_SetupAbilityInfo_Params params {};
		params.InAbilityEffectId = InAbilityEffectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.CreateEfficacyInfoItemList
	 * 		Flags  -> ()
	 */
	void UImagineAbilityInfoView_C::CreateEfficacyInfoItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.CreateEfficacyInfoItemList");
		
		UImagineAbilityInfoView_C_CreateEfficacyInfoItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAbilityInfoView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.PreConstruct");
		
		UImagineAbilityInfoView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineAbilityInfoView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.Construct");
		
		UImagineAbilityInfoView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ExecuteUbergraph_ImagineAbilityInfoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityInfoView_C::ExecuteUbergraph_ImagineAbilityInfoView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ExecuteUbergraph_ImagineAbilityInfoView");
		
		UImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineAbilityInfoView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineAbilityInfoView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineAbilityInfoView.ImagineAbilityInfoView_C");
		return ptr;
	}

}


