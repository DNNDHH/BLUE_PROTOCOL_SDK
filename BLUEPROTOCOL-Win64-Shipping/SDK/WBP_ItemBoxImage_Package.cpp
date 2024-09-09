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
	 * 		Name   -> Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.OnLoaded_753F2A8F4CEFA9688FDB97A44A552509
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxImage_C::OnLoaded_753F2A8F4CEFA9688FDB97A44A552509(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.OnLoaded_753F2A8F4CEFA9688FDB97A44A552509");
		
		UWBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadRequest
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxImage_C::IconLoadRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadRequest");
		
		UWBP_ItemBoxImage_C_IconLoadRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadStart
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxImage_C::IconLoadStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadStart");
		
		UWBP_ItemBoxImage_C_IconLoadStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.InitIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxImage_C::InitIconImage(int32_t InItemID, EItemType InItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.InitIconImage");
		
		UWBP_ItemBoxImage_C_InitIconImage_Params params {};
		params.InItemID = InItemID;
		params.InItemType = InItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.ExecuteUbergraph_WBP_ItemBoxImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxImage_C::ExecuteUbergraph_WBP_ItemBoxImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.ExecuteUbergraph_WBP_ItemBoxImage");
		
		UWBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxImage.WBP_ItemBoxImage_C");
		return ptr;
	}

}


