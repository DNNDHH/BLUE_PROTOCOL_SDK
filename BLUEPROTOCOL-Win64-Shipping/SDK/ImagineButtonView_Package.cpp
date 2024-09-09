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
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.ApplyBasicImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ImagineData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineButtonView_C::ApplyBasicImagineData(const struct FOwnItemInfo& ImagineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.ApplyBasicImagineData");
		
		UImagineButtonView_C_ApplyBasicImagineData_Params params {};
		params.ImagineData = ImagineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.ApplySelectImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineButtonView_C::ApplySelectImagine(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.ApplySelectImagine");
		
		UImagineButtonView_C_ApplySelectImagine_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineButtonView_C::OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113");
		
		UImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.RequestLoadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UImagineButtonView_C::RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.RequestLoadImage");
		
		UImagineButtonView_C_RequestLoadImage_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineButtonView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.PreConstruct");
		
		UImagineButtonView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineButtonView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.Construct");
		
		UImagineButtonView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineButtonView_C::BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UImagineButtonView_C_BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.ExecuteUbergraph_ImagineButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineButtonView_C::ExecuteUbergraph_ImagineButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.ExecuteUbergraph_ImagineButtonView");
		
		UImagineButtonView_C_ExecuteUbergraph_ImagineButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineButtonView.ImagineButtonView_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineButtonView_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineButtonView.ImagineButtonView_C.OnClicked__DelegateSignature");
		
		UImagineButtonView_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineButtonView.ImagineButtonView_C");
		return ptr;
	}

}


