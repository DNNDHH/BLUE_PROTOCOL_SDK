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
	 * 		Name   -> Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_TheaterDetails_C::SetMessage(bool IsCty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetMessage");
		
		ULibraryMenu_TheaterDetails_C_SetMessage_Params params {};
		params.IsCty = IsCty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetDetailsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_TheaterDetails_C::SetDetailsVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetDetailsVisibility");
		
		ULibraryMenu_TheaterDetails_C_SetDetailsVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_TheaterDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.Construct");
		
		ULibraryMenu_TheaterDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.ExecuteUbergraph_LibraryMenu_TheaterDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_TheaterDetails_C::ExecuteUbergraph_LibraryMenu_TheaterDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.ExecuteUbergraph_LibraryMenu_TheaterDetails");
		
		ULibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_TheaterDetails_C::CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.CategoryChanged__DelegateSignature");
		
		ULibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_TheaterDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_TheaterDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C");
		return ptr;
	}

}


