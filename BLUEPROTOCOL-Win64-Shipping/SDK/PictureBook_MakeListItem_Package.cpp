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
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPictureBook_MakeListItem_C::SetTermId(const class FString& TermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetTermId");
		
		UPictureBook_MakeListItem_C_SetTermId_Params params {};
		params.TermId = TermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.CheckAdventurerRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_MakeListItem_C::CheckAdventurerRank(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.CheckAdventurerRank");
		
		UPictureBook_MakeListItem_C_CheckAdventurerRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetWishlistBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_MakeListItem_C::SetWishlistBtnEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetWishlistBtnEnable");
		
		UPictureBook_MakeListItem_C_SetWishlistBtnEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAddRead                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_MakeListItem_C::SetNew(bool IsRead, bool* IsAddRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetNew");
		
		UPictureBook_MakeListItem_C_SetNew_Params params {};
		params.IsRead = IsRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAddRead != nullptr)
			*IsAddRead = params.IsAddRead;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetSecret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSecret                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_MakeListItem_C::SetSecret(bool IsSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetSecret");
		
		UPictureBook_MakeListItem_C_SetSecret_Params params {};
		params.IsSecret = IsSecret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPictureBook_MakeListItem_C::SetName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetName");
		
		UPictureBook_MakeListItem_C_SetName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_MakeListItem_C::BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UPictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UPictureBook_MakeListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.Construct");
		
		UPictureBook_MakeListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.ExecuteUbergraph_PictureBook_MakeListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_MakeListItem_C::ExecuteUbergraph_PictureBook_MakeListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.ExecuteUbergraph_PictureBook_MakeListItem");
		
		UPictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.OnWishlist__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPictureBook_MakeListItem_C::OnWishlist__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.OnWishlist__DelegateSignature");
		
		UPictureBook_MakeListItem_C_OnWishlist__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPictureBook_MakeListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPictureBook_MakeListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PictureBook_MakeListItem.PictureBook_MakeListItem_C");
		return ptr;
	}

}


