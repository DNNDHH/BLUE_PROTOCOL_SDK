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
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.Set Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRegist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnBtnWishListWhite_C::SetBtn(bool IsRegist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.Set Btn");
		
		UCmnBtnWishListWhite_C_SetBtn_Params params {};
		params.IsRegist = IsRegist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetHoveredSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnBtnWishListWhite_C::SetHoveredSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetHoveredSoundId");
		
		UCmnBtnWishListWhite_C_SetHoveredSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetPressedSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnBtnWishListWhite_C::SetPressedSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetPressedSoundId");
		
		UCmnBtnWishListWhite_C_SetPressedSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnBtnWishListWhite_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.SetText");
		
		UCmnBtnWishListWhite_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnBtnWishListWhite_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.PreConstruct");
		
		UCmnBtnWishListWhite_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnBtnWishListWhite_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");
		
		UCmnBtnWishListWhite_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnBtnWishListWhite_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UCmnBtnWishListWhite_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnBtnWishListWhite_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCmnBtnWishListWhite_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.ExecuteUbergraph_CmnBtnWishListWhite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnBtnWishListWhite_C::ExecuteUbergraph_CmnBtnWishListWhite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.ExecuteUbergraph_CmnBtnWishListWhite");
		
		UCmnBtnWishListWhite_C_ExecuteUbergraph_CmnBtnWishListWhite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnBtnWishListWhite_C::EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBtnWishListWhite.CmnBtnWishListWhite_C.EventOnClicked__DelegateSignature");
		
		UCmnBtnWishListWhite_C_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnBtnWishListWhite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnBtnWishListWhite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnBtnWishListWhite.CmnBtnWishListWhite_C");
		return ptr;
	}

}


