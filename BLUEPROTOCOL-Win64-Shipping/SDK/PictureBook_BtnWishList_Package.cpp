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
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.Set Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRegist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_BtnWishList_C::SetBtn(bool IsRegist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.Set Btn");
		
		UPictureBook_BtnWishList_C_SetBtn_Params params {};
		params.IsRegist = IsRegist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetHoveredSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_BtnWishList_C::SetHoveredSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetHoveredSoundId");
		
		UPictureBook_BtnWishList_C_SetHoveredSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetPressedSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_BtnWishList_C::SetPressedSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetPressedSoundId");
		
		UPictureBook_BtnWishList_C_SetPressedSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPictureBook_BtnWishList_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetText");
		
		UPictureBook_BtnWishList_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_BtnWishList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.PreConstruct");
		
		UPictureBook_BtnWishList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");
		
		UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.ExecuteUbergraph_PictureBook_BtnWishList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_BtnWishList_C::ExecuteUbergraph_PictureBook_BtnWishList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.ExecuteUbergraph_PictureBook_BtnWishList");
		
		UPictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_BtnWishList_C::EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.EventOnClicked__DelegateSignature");
		
		UPictureBook_BtnWishList_C_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPictureBook_BtnWishList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPictureBook_BtnWishList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PictureBook_BtnWishList.PictureBook_BtnWishList_C");
		return ptr;
	}

}


