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
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.Set Diff Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InDiffBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetView_C::SetDiffInfo(const struct FOwnItemInfo& InDiffBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.Set Diff Info");
		
		UImagineAssetView_C_SetDiffInfo_Params params {};
		params.InDiffBase = InDiffBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.SetAbilityInfoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VisibleAbilityInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAssetView_C::SetAbilityInfoVisibility(bool VisibleAbilityInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.SetAbilityInfoVisibility");
		
		UImagineAssetView_C_SetAbilityInfoVisibility_Params params {};
		params.VisibleAbilityInfo = VisibleAbilityInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.SetUpName
	 * 		Flags  -> ()
	 */
	void UImagineAssetView_C::SetUpName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.SetUpName");
		
		UImagineAssetView_C_SetUpName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineAssetView_C::SetInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.SetInfo");
		
		UImagineAssetView_C_SetInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.Request_Image
	 * 		Flags  -> ()
	 */
	void UImagineAssetView_C::Request_Image()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.Request_Image");
		
		UImagineAssetView_C_Request_Image_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAssetView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.PreConstruct");
		
		UImagineAssetView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAssetView.ImagineAssetView_C.ExecuteUbergraph_ImagineAssetView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAssetView_C::ExecuteUbergraph_ImagineAssetView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAssetView.ImagineAssetView_C.ExecuteUbergraph_ImagineAssetView");
		
		UImagineAssetView_C_ExecuteUbergraph_ImagineAssetView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineAssetView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineAssetView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineAssetView.ImagineAssetView_C");
		return ptr;
	}

}


