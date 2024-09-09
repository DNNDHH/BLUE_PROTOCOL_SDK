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
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.SetImagineType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBImagineCategoryType                             ImagineType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBResult_C::SetImagineType(ESBImagineCategoryType ImagineType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.SetImagineType");
		
		UImagineStackBResult_C_SetImagineType_Params params {};
		params.ImagineType = ImagineType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.SetPrevData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineStackBResult_C::SetPrevData(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.SetPrevData");
		
		UImagineStackBResult_C_SetPrevData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.ImageLoad
	 * 		Flags  -> ()
	 */
	void UImagineStackBResult_C::ImageLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.ImageLoad");
		
		UImagineStackBResult_C_ImageLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.UpdateImagineType
	 * 		Flags  -> ()
	 */
	void UImagineStackBResult_C::UpdateImagineType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.UpdateImagineType");
		
		UImagineStackBResult_C_UpdateImagineType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.UpdateStackBIcon
	 * 		Flags  -> ()
	 */
	void UImagineStackBResult_C::UpdateStackBIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.UpdateStackBIcon");
		
		UImagineStackBResult_C_UpdateStackBIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.Set Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineStackBResult_C::SetInfo(const struct FOwnItemInfo& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.Set Info");
		
		UImagineStackBResult_C_SetInfo_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineStackBResult_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.PreConstruct");
		
		UImagineStackBResult_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineStackBResult_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.Construct");
		
		UImagineStackBResult_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineStackBResult.ImagineStackBResult_C.ExecuteUbergraph_ImagineStackBResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineStackBResult_C::ExecuteUbergraph_ImagineStackBResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineStackBResult.ImagineStackBResult_C.ExecuteUbergraph_ImagineStackBResult");
		
		UImagineStackBResult_C_ExecuteUbergraph_ImagineStackBResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineStackBResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineStackBResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineStackBResult.ImagineStackBResult_C");
		return ptr;
	}

}


