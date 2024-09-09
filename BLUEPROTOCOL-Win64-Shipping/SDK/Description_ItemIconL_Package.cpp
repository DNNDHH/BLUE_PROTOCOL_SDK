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
	 * 		Name   -> Function Description_ItemIconL.Description_ItemIconL_C.OnLoaded_CF191FB34BA71AABA5262489195B3141
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescription_ItemIconL_C::OnLoaded_CF191FB34BA71AABA5262489195B3141(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Description_ItemIconL.Description_ItemIconL_C.OnLoaded_CF191FB34BA71AABA5262489195B3141");
		
		UDescription_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Description_ItemIconL.Description_ItemIconL_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescription_ItemIconL_C::SetItem(int32_t InItemIndex, bool bUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Description_ItemIconL.Description_ItemIconL_C.SetItem");
		
		UDescription_ItemIconL_C_SetItem_Params params {};
		params.InItemIndex = InItemIndex;
		params.bUnidentified = bUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Description_ItemIconL.Description_ItemIconL_C.ExecuteUbergraph_Description_ItemIconL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescription_ItemIconL_C::ExecuteUbergraph_Description_ItemIconL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Description_ItemIconL.Description_ItemIconL_C.ExecuteUbergraph_Description_ItemIconL");
		
		UDescription_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDescription_ItemIconL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDescription_ItemIconL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Description_ItemIconL.Description_ItemIconL_C");
		return ptr;
	}

}


